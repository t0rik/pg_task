#include "include.h"

void SPI_start_transaction_my(const char *src) {
    SPI_start_transaction();
    if (StatementTimeout > 0) enable_timeout_after(STATEMENT_TIMEOUT, StatementTimeout); else disable_timeout(STATEMENT_TIMEOUT, false);
    pgstat_report_activity(STATE_RUNNING, src);
}

void SPI_connect_my(const char *src) {
    int rc;
    if ((rc = SPI_connect_ext(SPI_OPT_NONATOMIC)) != SPI_OK_CONNECT) E("SPI_connect_ext = %s", SPI_result_code_string(rc));
    SPI_start_transaction_my(src);
}

void SPI_commit_my(void) {
    disable_timeout(STATEMENT_TIMEOUT, false);
    SPI_commit();
    pgstat_report_stat(false);
    pgstat_report_activity(STATE_IDLE, NULL);
}

void SPI_finish_my() {
    int rc;
    if ((rc = SPI_finish()) != SPI_OK_FINISH) E("SPI_finish = %s", SPI_result_code_string(rc));
    if (!SPI_inside_nonatomic_context()) ProcessCompletedNotifies();
}

char *TextDatumGetCStringMy(Datum datum) {
    return datum ? TextDatumGetCString(datum) : NULL;
}

SPIPlanPtr SPI_prepare_my(const char *src, int nargs, Oid *argtypes) {
    int rc;
    SPIPlanPtr plan;
    if (!(plan = SPI_prepare(src, nargs, argtypes))) E("SPI_prepare = %s", SPI_result_code_string(SPI_result));
    if ((rc = SPI_keepplan(plan))) E("SPI_keepplan = %s", SPI_result_code_string(rc));
    return plan;
}

void SPI_execute_plan_my(SPIPlanPtr plan, Datum *values, const char *nulls, int res, bool commit) {
    int rc;
    if ((rc = SPI_execute_plan(plan, values, nulls, false, 0)) != res) E("SPI_execute_plan = %s", SPI_result_code_string(rc));
    if (commit) SPI_commit_my();
}

void SPI_execute_with_args_my(const char *src, int nargs, Oid *argtypes, Datum *values, const char *nulls, int res, bool commit) {
    int rc;
    if ((rc = SPI_execute_with_args(src, nargs, argtypes, values, nulls, false, 0)) != res) E("SPI_execute_with_args = %s", SPI_result_code_string(rc));
    if (commit) SPI_commit_my();
}

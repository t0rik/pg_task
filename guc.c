#include "include.h"

void SetConfigOptionMy(const char *name, const char *value) {
    set_config_option(name, value, (false ? PGC_SUSET : PGC_USERSET), PGC_S_OVERRIDE, false ? GUC_ACTION_LOCAL : GUC_ACTION_SET, true, ERROR, false);
}

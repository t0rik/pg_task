#include "include.h"

const char *PQftypeMy(Oid oid) {
    switch (oid) {
        case BOOLOID: return "BOOL";
        case BYTEAOID: return "BYTEA";
        case CHAROID: return "CHAR";
        case NAMEOID: return "NAME";
        case INT8OID: return "INT8";
        case INT2OID: return "INT2";
        case INT2VECTOROID: return "INT2VECTOR";
        case INT4OID: return "INT4";
        case REGPROCOID: return "REGPROC";
        case TEXTOID: return "TEXT";
        case OIDOID: return "OID";
        case TIDOID: return "TID";
        case XIDOID: return "XID";
        case CIDOID: return "CID";
        case OIDVECTOROID: return "OIDVECTOR";
        case JSONOID: return "JSON";
        case XMLOID: return "XML";
        case PGNODETREEOID: return "PGNODETREE";
        case PGNDISTINCTOID: return "PGNDISTINCT";
        case PGDEPENDENCIESOID: return "PGDEPENDENCIES";
        case PGMCVLISTOID: return "PGMCVLIST";
        case PGDDLCOMMANDOID: return "PGDDLCOMMAND";
        case POINTOID: return "POINT";
        case LSEGOID: return "LSEG";
        case PATHOID: return "PATH";
        case BOXOID: return "BOX";
        case POLYGONOID: return "POLYGON";
        case LINEOID: return "LINE";
        case FLOAT4OID: return "FLOAT4";
        case FLOAT8OID: return "FLOAT8";
        case UNKNOWNOID: return "UNKNOWN";
        case CIRCLEOID: return "CIRCLE";
        case CASHOID: return "CASH";
        case MACADDROID: return "MACADDR";
        case INETOID: return "INET";
        case CIDROID: return "CIDR";
        case MACADDR8OID: return "MACADDR8";
        case ACLITEMOID: return "ACLITEM";
        case BPCHAROID: return "BPCHAR";
        case VARCHAROID: return "VARCHAR";
        case DATEOID: return "DATE";
        case TIMEOID: return "TIME";
        case TIMESTAMPOID: return "TIMESTAMP";
        case TIMESTAMPTZOID: return "TIMESTAMPTZ";
        case INTERVALOID: return "INTERVAL";
        case TIMETZOID: return "TIMETZ";
        case BITOID: return "BIT";
        case VARBITOID: return "VARBIT";
        case NUMERICOID: return "NUMERIC";
        case REFCURSOROID: return "REFCURSOR";
        case REGPROCEDUREOID: return "REGPROCEDURE";
        case REGOPEROID: return "REGOPER";
        case REGOPERATOROID: return "REGOPERATOR";
        case REGCLASSOID: return "REGCLASS";
        case REGTYPEOID: return "REGTYPE";
        case REGROLEOID: return "REGROLE";
        case REGNAMESPACEOID: return "REGNAMESPACE";
        case UUIDOID: return "UUID";
        case LSNOID: return "LSN";
        case TSVECTOROID: return "TSVECTOR";
        case GTSVECTOROID: return "GTSVECTOR";
        case TSQUERYOID: return "TSQUERY";
        case REGCONFIGOID: return "REGCONFIG";
        case REGDICTIONARYOID: return "REGDICTIONARY";
        case JSONBOID: return "JSONB";
        case JSONPATHOID: return "JSONPATH";
        case TXID_SNAPSHOTOID: return "TXID_SNAPSHOT";
        case INT4RANGEOID: return "INT4RANGE";
        case NUMRANGEOID: return "NUMRANGE";
        case TSRANGEOID: return "TSRANGE";
        case TSTZRANGEOID: return "TSTZRANGE";
        case DATERANGEOID: return "DATERANGE";
        case INT8RANGEOID: return "INT8RANGE";
        case RECORDOID: return "RECORD";
        case RECORDARRAYOID: return "RECORDARRAY";
        case CSTRINGOID: return "CSTRING";
        case ANYOID: return "ANY";
        case ANYARRAYOID: return "ANYARRAY";
        case VOIDOID: return "VOID";
        case TRIGGEROID: return "TRIGGER";
        case EVTTRIGGEROID: return "EVTTRIGGER";
        case LANGUAGE_HANDLEROID: return "LANGUAGE_HANDLER";
        case INTERNALOID: return "INTERNAL";
        case OPAQUEOID: return "OPAQUE";
        case ANYELEMENTOID: return "ANYELEMENT";
        case ANYNONARRAYOID: return "ANYNONARRAY";
        case ANYENUMOID: return "ANYENUM";
        case FDW_HANDLEROID: return "FDW_HANDLER";
        case INDEX_AM_HANDLEROID: return "INDEX_AM_HANDLER";
        case TSM_HANDLEROID: return "TSM_HANDLER";
        case TABLE_AM_HANDLEROID: return "TABLE_AM_HANDLER";
        case ANYRANGEOID: return "ANYRANGE";
        case BOOLARRAYOID: return "BOOLARRAY";
        case BYTEAARRAYOID: return "BYTEAARRAY";
        case CHARARRAYOID: return "CHARARRAY";
        case NAMEARRAYOID: return "NAMEARRAY";
        case INT8ARRAYOID: return "INT8ARRAY";
        case INT2ARRAYOID: return "INT2ARRAY";
        case INT2VECTORARRAYOID: return "INT2VECTORARRAY";
        case INT4ARRAYOID: return "INT4ARRAY";
        case REGPROCARRAYOID: return "REGPROCARRAY";
        case TEXTARRAYOID: return "TEXTARRAY";
        case OIDARRAYOID: return "OIDARRAY";
        case TIDARRAYOID: return "TIDARRAY";
        case XIDARRAYOID: return "XIDARRAY";
        case CIDARRAYOID: return "CIDARRAY";
        case OIDVECTORARRAYOID: return "OIDVECTORARRAY";
        case JSONARRAYOID: return "JSONARRAY";
        case XMLARRAYOID: return "XMLARRAY";
        case POINTARRAYOID: return "POINTARRAY";
        case LSEGARRAYOID: return "LSEGARRAY";
        case PATHARRAYOID: return "PATHARRAY";
        case BOXARRAYOID: return "BOXARRAY";
        case POLYGONARRAYOID: return "POLYGONARRAY";
        case LINEARRAYOID: return "LINEARRAY";
        case FLOAT4ARRAYOID: return "FLOAT4ARRAY";
        case FLOAT8ARRAYOID: return "FLOAT8ARRAY";
        case CIRCLEARRAYOID: return "CIRCLEARRAY";
        case MONEYARRAYOID: return "MONEYARRAY";
        case MACADDRARRAYOID: return "MACADDRARRAY";
        case INETARRAYOID: return "INETARRAY";
        case CIDRARRAYOID: return "CIDRARRAY";
        case MACADDR8ARRAYOID: return "MACADDR8ARRAY";
        case ACLITEMARRAYOID: return "ACLITEMARRAY";
        case BPCHARARRAYOID: return "BPCHARARRAY";
        case VARCHARARRAYOID: return "VARCHARARRAY";
        case DATEARRAYOID: return "DATEARRAY";
        case TIMEARRAYOID: return "TIMEARRAY";
        case TIMESTAMPARRAYOID: return "TIMESTAMPARRAY";
        case TIMESTAMPTZARRAYOID: return "TIMESTAMPTZARRAY";
        case INTERVALARRAYOID: return "INTERVALARRAY";
        case TIMETZARRAYOID: return "TIMETZARRAY";
        case BITARRAYOID: return "BITARRAY";
        case VARBITARRAYOID: return "VARBITARRAY";
        case NUMERICARRAYOID: return "NUMERICARRAY";
        case REFCURSORARRAYOID: return "REFCURSORARRAY";
        case REGPROCEDUREARRAYOID: return "REGPROCEDUREARRAY";
        case REGOPERARRAYOID: return "REGOPERARRAY";
        case REGOPERATORARRAYOID: return "REGOPERATORARRAY";
        case REGCLASSARRAYOID: return "REGCLASSARRAY";
        case REGTYPEARRAYOID: return "REGTYPEARRAY";
        case REGROLEARRAYOID: return "REGROLEARRAY";
        case REGNAMESPACEARRAYOID: return "REGNAMESPACEARRAY";
        case UUIDARRAYOID: return "UUIDARRAY";
        case PG_LSNARRAYOID: return "PG_LSNARRAY";
        case TSVECTORARRAYOID: return "TSVECTORARRAY";
        case GTSVECTORARRAYOID: return "GTSVECTORARRAY";
        case TSQUERYARRAYOID: return "TSQUERYARRAY";
        case REGCONFIGARRAYOID: return "REGCONFIGARRAY";
        case REGDICTIONARYARRAYOID: return "REGDICTIONARYARRAY";
        case JSONBARRAYOID: return "JSONBARRAY";
        case JSONPATHARRAYOID: return "JSONPATHARRAY";
        case TXID_SNAPSHOTARRAYOID: return "TXID_SNAPSHOTARRAY";
        case INT4RANGEARRAYOID: return "INT4RANGEARRAY";
        case NUMRANGEARRAYOID: return "NUMRANGEARRAY";
        case TSRANGEARRAYOID: return "TSRANGEARRAY";
        case TSTZRANGEARRAYOID: return "TSTZRANGEARRAY";
        case DATERANGEARRAYOID: return "DATERANGEARRAY";
        case INT8RANGEARRAYOID: return "INT8RANGEARRAY";
        case CSTRINGARRAYOID: return "CSTRINGARRAY";
        default: return NULL;
    }
}

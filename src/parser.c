#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 115
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_variable = 1,
  anon_sym_LPAREN = 2,
  anon_sym_con = 3,
  anon_sym_RPAREN = 4,
  aux_sym_builtinValue_token1 = 5,
  anon_sym_integer = 6,
  anon_sym_bytestring = 7,
  anon_sym_string = 8,
  anon_sym_unit = 9,
  anon_sym_bool = 10,
  anon_sym_list = 11,
  anon_sym_pair = 12,
  anon_sym_data = 13,
  anon_sym_bls12_381_G1_element = 14,
  anon_sym_bls12_381_G2_element = 15,
  anon_sym_bls12_381_mlresult = 16,
  anon_sym_builtin = 17,
  anon_sym_addInteger = 18,
  anon_sym_subtractInteger = 19,
  anon_sym_multiplyInteger = 20,
  anon_sym_divideInteger = 21,
  anon_sym_quotientInteger = 22,
  anon_sym_remainderInteger = 23,
  anon_sym_modInteger = 24,
  anon_sym_equalsInteger = 25,
  anon_sym_lessThanInteger = 26,
  anon_sym_lessThanEqualsInteger = 27,
  anon_sym_appendByteString = 28,
  anon_sym_consByteString = 29,
  anon_sym_sliceByteString = 30,
  anon_sym_lengthOfByteString = 31,
  anon_sym_indexByteString = 32,
  anon_sym_equalsByteString = 33,
  anon_sym_lessThanByteString = 34,
  anon_sym_lessThanEqualsByteString = 35,
  anon_sym_sha2_256 = 36,
  anon_sym_sha3_256 = 37,
  anon_sym_blake2b_256 = 38,
  anon_sym_verifyEd25519Signature = 39,
  anon_sym_verifyEcdsaSecp256k1Signature = 40,
  anon_sym_verifySchnorrSecp256k1Signature = 41,
  anon_sym_appendString = 42,
  anon_sym_equalsString = 43,
  anon_sym_encodeUtf8 = 44,
  anon_sym_decodeUtf8 = 45,
  anon_sym_ifThenElse = 46,
  anon_sym_chooseUnit = 47,
  anon_sym_trace = 48,
  anon_sym_fstPair = 49,
  anon_sym_sndPair = 50,
  anon_sym_chooseList = 51,
  anon_sym_mkCons = 52,
  anon_sym_headList = 53,
  anon_sym_tailList = 54,
  anon_sym_nullList = 55,
  anon_sym_chooseData = 56,
  anon_sym_constrData = 57,
  anon_sym_mapData = 58,
  anon_sym_listData = 59,
  anon_sym_iData = 60,
  anon_sym_bData = 61,
  anon_sym_unConstrData = 62,
  anon_sym_unMapData = 63,
  anon_sym_unListData = 64,
  anon_sym_unIData = 65,
  anon_sym_unBData = 66,
  anon_sym_equalsData = 67,
  anon_sym_serialiseData = 68,
  anon_sym_mkPairData = 69,
  anon_sym_mkNilData = 70,
  anon_sym_mkNilPairData = 71,
  anon_sym_bls12_381_G1_add = 72,
  anon_sym_bls12_381_G1_neg = 73,
  anon_sym_bls12_381_G1_scalarMul = 74,
  anon_sym_bls12_381_G1_equal = 75,
  anon_sym_bls12_381_G1_hashToGroup = 76,
  anon_sym_bls12_381_G1_compress = 77,
  anon_sym_bls12_381_G1_uncompress = 78,
  anon_sym_bls12_381_G2_add = 79,
  anon_sym_bls12_381_G2_neg = 80,
  anon_sym_bls12_381_G2_scalarMul = 81,
  anon_sym_bls12_381_G2_equal = 82,
  anon_sym_bls12_381_G2_hashToGroup = 83,
  anon_sym_bls12_381_G2_compress = 84,
  anon_sym_bls12_381_G2_uncompress = 85,
  anon_sym_bls12_381_millerLoop = 86,
  anon_sym_bls12_381_mulMlResult = 87,
  anon_sym_bls12_381_finalVerify = 88,
  anon_sym_keccak_256 = 89,
  anon_sym_blake2b_224 = 90,
  anon_sym_integerToByteString = 91,
  anon_sym_byteStringToInteger = 92,
  anon_sym_andByteString = 93,
  anon_sym_orByteString = 94,
  anon_sym_xorByteString = 95,
  anon_sym_complementByteString = 96,
  anon_sym_readBit = 97,
  anon_sym_writeBits = 98,
  anon_sym_replicateByte = 99,
  anon_sym_shiftByteString = 100,
  anon_sym_rotateByteString = 101,
  anon_sym_countSetBits = 102,
  anon_sym_findFirstSetBit = 103,
  anon_sym_ripemd_160 = 104,
  anon_sym_expModInteger = 105,
  anon_sym_lam = 106,
  anon_sym_LBRACK = 107,
  anon_sym_RBRACK = 108,
  anon_sym_delay = 109,
  anon_sym_force = 110,
  sym_error = 111,
  anon_sym_constr = 112,
  aux_sym_constr_token1 = 113,
  anon_sym_case = 114,
  sym_uplc = 115,
  sym_con = 116,
  sym_builtinValue = 117,
  sym_defaultUniTypes = 118,
  sym_builtin = 119,
  sym_defaultFun = 120,
  sym_lam = 121,
  sym_lamName = 122,
  sym_app = 123,
  sym_delay = 124,
  sym_force = 125,
  sym_constr = 126,
  sym_case = 127,
  aux_sym_constr_repeat1 = 128,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_variable] = "variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_con] = "con",
  [anon_sym_RPAREN] = ")",
  [aux_sym_builtinValue_token1] = "builtinValue_token1",
  [anon_sym_integer] = "integer",
  [anon_sym_bytestring] = "bytestring",
  [anon_sym_string] = "string",
  [anon_sym_unit] = "unit",
  [anon_sym_bool] = "bool",
  [anon_sym_list] = "list",
  [anon_sym_pair] = "pair",
  [anon_sym_data] = "data",
  [anon_sym_bls12_381_G1_element] = "bls12_381_G1_element",
  [anon_sym_bls12_381_G2_element] = "bls12_381_G2_element",
  [anon_sym_bls12_381_mlresult] = "bls12_381_mlresult",
  [anon_sym_builtin] = "builtin",
  [anon_sym_addInteger] = "addInteger",
  [anon_sym_subtractInteger] = "subtractInteger",
  [anon_sym_multiplyInteger] = "multiplyInteger",
  [anon_sym_divideInteger] = "divideInteger",
  [anon_sym_quotientInteger] = "quotientInteger",
  [anon_sym_remainderInteger] = "remainderInteger",
  [anon_sym_modInteger] = "modInteger",
  [anon_sym_equalsInteger] = "equalsInteger",
  [anon_sym_lessThanInteger] = "lessThanInteger",
  [anon_sym_lessThanEqualsInteger] = "lessThanEqualsInteger",
  [anon_sym_appendByteString] = "appendByteString",
  [anon_sym_consByteString] = "consByteString",
  [anon_sym_sliceByteString] = "sliceByteString",
  [anon_sym_lengthOfByteString] = "lengthOfByteString",
  [anon_sym_indexByteString] = "indexByteString",
  [anon_sym_equalsByteString] = "equalsByteString",
  [anon_sym_lessThanByteString] = "lessThanByteString",
  [anon_sym_lessThanEqualsByteString] = "lessThanEqualsByteString",
  [anon_sym_sha2_256] = "sha2_256",
  [anon_sym_sha3_256] = "sha3_256",
  [anon_sym_blake2b_256] = "blake2b_256",
  [anon_sym_verifyEd25519Signature] = "verifyEd25519Signature",
  [anon_sym_verifyEcdsaSecp256k1Signature] = "verifyEcdsaSecp256k1Signature",
  [anon_sym_verifySchnorrSecp256k1Signature] = "verifySchnorrSecp256k1Signature",
  [anon_sym_appendString] = "appendString",
  [anon_sym_equalsString] = "equalsString",
  [anon_sym_encodeUtf8] = "encodeUtf8",
  [anon_sym_decodeUtf8] = "decodeUtf8",
  [anon_sym_ifThenElse] = "ifThenElse",
  [anon_sym_chooseUnit] = "chooseUnit",
  [anon_sym_trace] = "trace",
  [anon_sym_fstPair] = "fstPair",
  [anon_sym_sndPair] = "sndPair",
  [anon_sym_chooseList] = "chooseList",
  [anon_sym_mkCons] = "mkCons",
  [anon_sym_headList] = "headList",
  [anon_sym_tailList] = "tailList",
  [anon_sym_nullList] = "nullList",
  [anon_sym_chooseData] = "chooseData",
  [anon_sym_constrData] = "constrData",
  [anon_sym_mapData] = "mapData",
  [anon_sym_listData] = "listData",
  [anon_sym_iData] = "iData",
  [anon_sym_bData] = "bData",
  [anon_sym_unConstrData] = "unConstrData",
  [anon_sym_unMapData] = "unMapData",
  [anon_sym_unListData] = "unListData",
  [anon_sym_unIData] = "unIData",
  [anon_sym_unBData] = "unBData",
  [anon_sym_equalsData] = "equalsData",
  [anon_sym_serialiseData] = "serialiseData",
  [anon_sym_mkPairData] = "mkPairData",
  [anon_sym_mkNilData] = "mkNilData",
  [anon_sym_mkNilPairData] = "mkNilPairData",
  [anon_sym_bls12_381_G1_add] = "bls12_381_G1_add",
  [anon_sym_bls12_381_G1_neg] = "bls12_381_G1_neg",
  [anon_sym_bls12_381_G1_scalarMul] = "bls12_381_G1_scalarMul",
  [anon_sym_bls12_381_G1_equal] = "bls12_381_G1_equal",
  [anon_sym_bls12_381_G1_hashToGroup] = "bls12_381_G1_hashToGroup",
  [anon_sym_bls12_381_G1_compress] = "bls12_381_G1_compress",
  [anon_sym_bls12_381_G1_uncompress] = "bls12_381_G1_uncompress",
  [anon_sym_bls12_381_G2_add] = "bls12_381_G2_add",
  [anon_sym_bls12_381_G2_neg] = "bls12_381_G2_neg",
  [anon_sym_bls12_381_G2_scalarMul] = "bls12_381_G2_scalarMul",
  [anon_sym_bls12_381_G2_equal] = "bls12_381_G2_equal",
  [anon_sym_bls12_381_G2_hashToGroup] = "bls12_381_G2_hashToGroup",
  [anon_sym_bls12_381_G2_compress] = "bls12_381_G2_compress",
  [anon_sym_bls12_381_G2_uncompress] = "bls12_381_G2_uncompress",
  [anon_sym_bls12_381_millerLoop] = "bls12_381_millerLoop",
  [anon_sym_bls12_381_mulMlResult] = "bls12_381_mulMlResult",
  [anon_sym_bls12_381_finalVerify] = "bls12_381_finalVerify",
  [anon_sym_keccak_256] = "keccak_256",
  [anon_sym_blake2b_224] = "blake2b_224",
  [anon_sym_integerToByteString] = "integerToByteString",
  [anon_sym_byteStringToInteger] = "byteStringToInteger",
  [anon_sym_andByteString] = "andByteString",
  [anon_sym_orByteString] = "orByteString",
  [anon_sym_xorByteString] = "xorByteString",
  [anon_sym_complementByteString] = "complementByteString",
  [anon_sym_readBit] = "readBit",
  [anon_sym_writeBits] = "writeBits",
  [anon_sym_replicateByte] = "replicateByte",
  [anon_sym_shiftByteString] = "shiftByteString",
  [anon_sym_rotateByteString] = "rotateByteString",
  [anon_sym_countSetBits] = "countSetBits",
  [anon_sym_findFirstSetBit] = "findFirstSetBit",
  [anon_sym_ripemd_160] = "ripemd_160",
  [anon_sym_expModInteger] = "expModInteger",
  [anon_sym_lam] = "lam",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_delay] = "delay",
  [anon_sym_force] = "force",
  [sym_error] = "error",
  [anon_sym_constr] = "constr",
  [aux_sym_constr_token1] = "constr_token1",
  [anon_sym_case] = "case",
  [sym_uplc] = "uplc",
  [sym_con] = "con",
  [sym_builtinValue] = "builtinValue",
  [sym_defaultUniTypes] = "defaultUniTypes",
  [sym_builtin] = "builtin",
  [sym_defaultFun] = "defaultFun",
  [sym_lam] = "lam",
  [sym_lamName] = "lamName",
  [sym_app] = "app",
  [sym_delay] = "delay",
  [sym_force] = "force",
  [sym_constr] = "constr",
  [sym_case] = "case",
  [aux_sym_constr_repeat1] = "constr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_variable] = sym_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_con] = anon_sym_con,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_builtinValue_token1] = aux_sym_builtinValue_token1,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_bytestring] = anon_sym_bytestring,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_pair] = anon_sym_pair,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_bls12_381_G1_element] = anon_sym_bls12_381_G1_element,
  [anon_sym_bls12_381_G2_element] = anon_sym_bls12_381_G2_element,
  [anon_sym_bls12_381_mlresult] = anon_sym_bls12_381_mlresult,
  [anon_sym_builtin] = anon_sym_builtin,
  [anon_sym_addInteger] = anon_sym_addInteger,
  [anon_sym_subtractInteger] = anon_sym_subtractInteger,
  [anon_sym_multiplyInteger] = anon_sym_multiplyInteger,
  [anon_sym_divideInteger] = anon_sym_divideInteger,
  [anon_sym_quotientInteger] = anon_sym_quotientInteger,
  [anon_sym_remainderInteger] = anon_sym_remainderInteger,
  [anon_sym_modInteger] = anon_sym_modInteger,
  [anon_sym_equalsInteger] = anon_sym_equalsInteger,
  [anon_sym_lessThanInteger] = anon_sym_lessThanInteger,
  [anon_sym_lessThanEqualsInteger] = anon_sym_lessThanEqualsInteger,
  [anon_sym_appendByteString] = anon_sym_appendByteString,
  [anon_sym_consByteString] = anon_sym_consByteString,
  [anon_sym_sliceByteString] = anon_sym_sliceByteString,
  [anon_sym_lengthOfByteString] = anon_sym_lengthOfByteString,
  [anon_sym_indexByteString] = anon_sym_indexByteString,
  [anon_sym_equalsByteString] = anon_sym_equalsByteString,
  [anon_sym_lessThanByteString] = anon_sym_lessThanByteString,
  [anon_sym_lessThanEqualsByteString] = anon_sym_lessThanEqualsByteString,
  [anon_sym_sha2_256] = anon_sym_sha2_256,
  [anon_sym_sha3_256] = anon_sym_sha3_256,
  [anon_sym_blake2b_256] = anon_sym_blake2b_256,
  [anon_sym_verifyEd25519Signature] = anon_sym_verifyEd25519Signature,
  [anon_sym_verifyEcdsaSecp256k1Signature] = anon_sym_verifyEcdsaSecp256k1Signature,
  [anon_sym_verifySchnorrSecp256k1Signature] = anon_sym_verifySchnorrSecp256k1Signature,
  [anon_sym_appendString] = anon_sym_appendString,
  [anon_sym_equalsString] = anon_sym_equalsString,
  [anon_sym_encodeUtf8] = anon_sym_encodeUtf8,
  [anon_sym_decodeUtf8] = anon_sym_decodeUtf8,
  [anon_sym_ifThenElse] = anon_sym_ifThenElse,
  [anon_sym_chooseUnit] = anon_sym_chooseUnit,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_fstPair] = anon_sym_fstPair,
  [anon_sym_sndPair] = anon_sym_sndPair,
  [anon_sym_chooseList] = anon_sym_chooseList,
  [anon_sym_mkCons] = anon_sym_mkCons,
  [anon_sym_headList] = anon_sym_headList,
  [anon_sym_tailList] = anon_sym_tailList,
  [anon_sym_nullList] = anon_sym_nullList,
  [anon_sym_chooseData] = anon_sym_chooseData,
  [anon_sym_constrData] = anon_sym_constrData,
  [anon_sym_mapData] = anon_sym_mapData,
  [anon_sym_listData] = anon_sym_listData,
  [anon_sym_iData] = anon_sym_iData,
  [anon_sym_bData] = anon_sym_bData,
  [anon_sym_unConstrData] = anon_sym_unConstrData,
  [anon_sym_unMapData] = anon_sym_unMapData,
  [anon_sym_unListData] = anon_sym_unListData,
  [anon_sym_unIData] = anon_sym_unIData,
  [anon_sym_unBData] = anon_sym_unBData,
  [anon_sym_equalsData] = anon_sym_equalsData,
  [anon_sym_serialiseData] = anon_sym_serialiseData,
  [anon_sym_mkPairData] = anon_sym_mkPairData,
  [anon_sym_mkNilData] = anon_sym_mkNilData,
  [anon_sym_mkNilPairData] = anon_sym_mkNilPairData,
  [anon_sym_bls12_381_G1_add] = anon_sym_bls12_381_G1_add,
  [anon_sym_bls12_381_G1_neg] = anon_sym_bls12_381_G1_neg,
  [anon_sym_bls12_381_G1_scalarMul] = anon_sym_bls12_381_G1_scalarMul,
  [anon_sym_bls12_381_G1_equal] = anon_sym_bls12_381_G1_equal,
  [anon_sym_bls12_381_G1_hashToGroup] = anon_sym_bls12_381_G1_hashToGroup,
  [anon_sym_bls12_381_G1_compress] = anon_sym_bls12_381_G1_compress,
  [anon_sym_bls12_381_G1_uncompress] = anon_sym_bls12_381_G1_uncompress,
  [anon_sym_bls12_381_G2_add] = anon_sym_bls12_381_G2_add,
  [anon_sym_bls12_381_G2_neg] = anon_sym_bls12_381_G2_neg,
  [anon_sym_bls12_381_G2_scalarMul] = anon_sym_bls12_381_G2_scalarMul,
  [anon_sym_bls12_381_G2_equal] = anon_sym_bls12_381_G2_equal,
  [anon_sym_bls12_381_G2_hashToGroup] = anon_sym_bls12_381_G2_hashToGroup,
  [anon_sym_bls12_381_G2_compress] = anon_sym_bls12_381_G2_compress,
  [anon_sym_bls12_381_G2_uncompress] = anon_sym_bls12_381_G2_uncompress,
  [anon_sym_bls12_381_millerLoop] = anon_sym_bls12_381_millerLoop,
  [anon_sym_bls12_381_mulMlResult] = anon_sym_bls12_381_mulMlResult,
  [anon_sym_bls12_381_finalVerify] = anon_sym_bls12_381_finalVerify,
  [anon_sym_keccak_256] = anon_sym_keccak_256,
  [anon_sym_blake2b_224] = anon_sym_blake2b_224,
  [anon_sym_integerToByteString] = anon_sym_integerToByteString,
  [anon_sym_byteStringToInteger] = anon_sym_byteStringToInteger,
  [anon_sym_andByteString] = anon_sym_andByteString,
  [anon_sym_orByteString] = anon_sym_orByteString,
  [anon_sym_xorByteString] = anon_sym_xorByteString,
  [anon_sym_complementByteString] = anon_sym_complementByteString,
  [anon_sym_readBit] = anon_sym_readBit,
  [anon_sym_writeBits] = anon_sym_writeBits,
  [anon_sym_replicateByte] = anon_sym_replicateByte,
  [anon_sym_shiftByteString] = anon_sym_shiftByteString,
  [anon_sym_rotateByteString] = anon_sym_rotateByteString,
  [anon_sym_countSetBits] = anon_sym_countSetBits,
  [anon_sym_findFirstSetBit] = anon_sym_findFirstSetBit,
  [anon_sym_ripemd_160] = anon_sym_ripemd_160,
  [anon_sym_expModInteger] = anon_sym_expModInteger,
  [anon_sym_lam] = anon_sym_lam,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_delay] = anon_sym_delay,
  [anon_sym_force] = anon_sym_force,
  [sym_error] = sym_error,
  [anon_sym_constr] = anon_sym_constr,
  [aux_sym_constr_token1] = aux_sym_constr_token1,
  [anon_sym_case] = anon_sym_case,
  [sym_uplc] = sym_uplc,
  [sym_con] = sym_con,
  [sym_builtinValue] = sym_builtinValue,
  [sym_defaultUniTypes] = sym_defaultUniTypes,
  [sym_builtin] = sym_builtin,
  [sym_defaultFun] = sym_defaultFun,
  [sym_lam] = sym_lam,
  [sym_lamName] = sym_lamName,
  [sym_app] = sym_app,
  [sym_delay] = sym_delay,
  [sym_force] = sym_force,
  [sym_constr] = sym_constr,
  [sym_case] = sym_case,
  [aux_sym_constr_repeat1] = aux_sym_constr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_con] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_builtinValue_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytestring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pair] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_element] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_element] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_mlresult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_builtin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subtractInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiplyInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_divideInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quotientInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remainderInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_modInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equalsInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThanInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThanEqualsInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_appendByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sliceByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lengthOfByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indexByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equalsByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThanByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lessThanEqualsByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha2_256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sha3_256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake2b_256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verifyEd25519Signature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verifyEcdsaSecp256k1Signature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verifySchnorrSecp256k1Signature] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_appendString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equalsString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_encodeUtf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_decodeUtf8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ifThenElse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chooseUnit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fstPair] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sndPair] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chooseList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mkCons] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_headList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tailList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_chooseData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constrData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mapData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_listData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unConstrData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unMapData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unListData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unIData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unBData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equalsData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_serialiseData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mkPairData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mkNilData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mkNilPairData] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_scalarMul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_equal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_hashToGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_compress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G1_uncompress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_add] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_neg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_scalarMul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_equal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_hashToGroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_compress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_G2_uncompress] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_millerLoop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_mulMlResult] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bls12_381_finalVerify] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_keccak_256] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blake2b_224] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integerToByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byteStringToInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_andByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_orByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xorByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_complementByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readBit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_writeBits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_replicateByte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shiftByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rotateByteString] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_countSetBits] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_findFirstSetBit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ripemd_160] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expModInteger] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_delay] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_force] = {
    .visible = true,
    .named = false,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_constr] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_constr_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [sym_uplc] = {
    .visible = true,
    .named = true,
  },
  [sym_con] = {
    .visible = true,
    .named = true,
  },
  [sym_builtinValue] = {
    .visible = true,
    .named = true,
  },
  [sym_defaultUniTypes] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_defaultFun] = {
    .visible = true,
    .named = true,
  },
  [sym_lam] = {
    .visible = true,
    .named = true,
  },
  [sym_lamName] = {
    .visible = true,
    .named = true,
  },
  [sym_app] = {
    .visible = true,
    .named = true,
  },
  [sym_delay] = {
    .visible = true,
    .named = true,
  },
  [sym_force] = {
    .visible = true,
    .named = true,
  },
  [sym_constr] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constr_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_body = 2,
  field_constructor = 3,
  field_fields = 4,
  field_function = 5,
  field_handler = 6,
  field_name = 7,
  field_target = 8,
  field_type = 9,
  field_value = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_body] = "body",
  [field_constructor] = "constructor",
  [field_fields] = "fields",
  [field_function] = "function",
  [field_handler] = "handler",
  [field_name] = "name",
  [field_target] = "target",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 2},
  [1] =
    {field_argument, 2},
    {field_function, 1},
  [3] =
    {field_type, 2},
    {field_value, 3},
  [5] =
    {field_body, 3},
    {field_name, 2},
  [7] =
    {field_constructor, 2},
    {field_fields, 3},
  [9] =
    {field_handler, 3},
    {field_target, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
};

static TSCharacterRange aux_sym_builtinValue_token1_character_set_1[] = {
  {'\n', '\n'}, {'!', '!'}, {'-', '-'}, {'0', ':'}, {'@', 'Z'}, {'_', '_'}, {'a', 'z'}, {0xc0, 0xd6},
  {0xd8, 0xf6}, {0xf8, 0xff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(884);
      ADVANCE_MAP(
        '(', 886,
        ')', 888,
        '[', 992,
        ']', 993,
        'a', 260,
        'b', 71,
        'c', 163,
        'd', 186,
        'e', 535,
        'f', 432,
        'h', 301,
        'i', 73,
        'k', 296,
        'l', 164,
        'm', 189,
        'n', 846,
        'o', 635,
        'p', 185,
        'q', 847,
        'r', 283,
        's', 327,
        't', 207,
        'u', 536,
        'v', 337,
        'w', 657,
        'x', 615,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(998);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(889);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (set_contains(aux_sym_builtinValue_token1_character_set_1, 10, lookahead)) ADVANCE(890);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(996);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(989);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(150);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(151);
      if (lookahead == '2') ADVANCE(157);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(153);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(154);
      if (lookahead == '2') ADVANCE(158);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(138);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == '3') ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(28);
      if (lookahead == '5') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(241);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(149);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(161);
      END_STATE();
    case 25:
      if (lookahead == '2') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(45);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == '4') ADVANCE(975);
      END_STATE();
    case 29:
      if (lookahead == '5') ADVANCE(36);
      END_STATE();
    case 30:
      if (lookahead == '5') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == '5') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == '5') ADVANCE(5);
      END_STATE();
    case 33:
      if (lookahead == '5') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '5') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == '5') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == '6') ADVANCE(921);
      END_STATE();
    case 37:
      if (lookahead == '6') ADVANCE(922);
      END_STATE();
    case 38:
      if (lookahead == '6') ADVANCE(3);
      END_STATE();
    case 39:
      if (lookahead == '6') ADVANCE(974);
      END_STATE();
    case 40:
      if (lookahead == '6') ADVANCE(923);
      END_STATE();
    case 41:
      if (lookahead == '6') ADVANCE(491);
      END_STATE();
    case 42:
      if (lookahead == '6') ADVANCE(494);
      END_STATE();
    case 43:
      if (lookahead == '8') ADVANCE(930);
      END_STATE();
    case 44:
      if (lookahead == '8') ADVANCE(929);
      END_STATE();
    case 45:
      if (lookahead == '8') ADVANCE(7);
      END_STATE();
    case 46:
      if (lookahead == '8') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == '9') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'B') ADVANCE(866);
      END_STATE();
    case 49:
      if (lookahead == 'B') ADVANCE(444);
      END_STATE();
    case 50:
      if (lookahead == 'B') ADVANCE(454);
      END_STATE();
    case 51:
      if (lookahead == 'B') ADVANCE(460);
      END_STATE();
    case 52:
      if (lookahead == 'B') ADVANCE(461);
      END_STATE();
    case 53:
      if (lookahead == 'B') ADVANCE(867);
      END_STATE();
    case 54:
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(598);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(471);
      if (lookahead == 'M') ADVANCE(235);
      END_STATE();
    case 55:
      if (lookahead == 'B') ADVANCE(76);
      if (lookahead == 'C') ADVANCE(598);
      if (lookahead == 'I') ADVANCE(77);
      if (lookahead == 'L') ADVANCE(471);
      if (lookahead == 'M') ADVANCE(235);
      if (lookahead == 'i') ADVANCE(740);
      END_STATE();
    case 56:
      if (lookahead == 'B') ADVANCE(868);
      END_STATE();
    case 57:
      if (lookahead == 'B') ADVANCE(869);
      END_STATE();
    case 58:
      if (lookahead == 'B') ADVANCE(870);
      END_STATE();
    case 59:
      if (lookahead == 'B') ADVANCE(872);
      END_STATE();
    case 60:
      if (lookahead == 'B') ADVANCE(873);
      END_STATE();
    case 61:
      if (lookahead == 'B') ADVANCE(874);
      if (lookahead == 'S') ADVANCE(794);
      END_STATE();
    case 62:
      if (lookahead == 'B') ADVANCE(875);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'I') ADVANCE(579);
      if (lookahead == 'S') ADVANCE(796);
      END_STATE();
    case 63:
      if (lookahead == 'B') ADVANCE(876);
      END_STATE();
    case 64:
      if (lookahead == 'B') ADVANCE(877);
      END_STATE();
    case 65:
      if (lookahead == 'B') ADVANCE(878);
      if (lookahead == 'E') ADVANCE(632);
      if (lookahead == 'I') ADVANCE(581);
      END_STATE();
    case 66:
      if (lookahead == 'B') ADVANCE(879);
      END_STATE();
    case 67:
      if (lookahead == 'B') ADVANCE(880);
      if (lookahead == 'I') ADVANCE(587);
      END_STATE();
    case 68:
      if (lookahead == 'B') ADVANCE(881);
      if (lookahead == 't') ADVANCE(702);
      END_STATE();
    case 69:
      if (lookahead == 'B') ADVANCE(882);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(596);
      if (lookahead == 'N') ADVANCE(437);
      if (lookahead == 'P') ADVANCE(209);
      END_STATE();
    case 71:
      if (lookahead == 'D') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(593);
      if (lookahead == 'u') ADVANCE(486);
      if (lookahead == 'y') ADVANCE(756);
      END_STATE();
    case 72:
      if (lookahead == 'D') ADVANCE(212);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == 'y') ADVANCE(838);
      END_STATE();
    case 73:
      if (lookahead == 'D') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 74:
      if (lookahead == 'D') ADVANCE(216);
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 75:
      if (lookahead == 'D') ADVANCE(218);
      END_STATE();
    case 76:
      if (lookahead == 'D') ADVANCE(219);
      END_STATE();
    case 77:
      if (lookahead == 'D') ADVANCE(220);
      END_STATE();
    case 78:
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'P') ADVANCE(239);
      END_STATE();
    case 79:
      if (lookahead == 'D') ADVANCE(222);
      END_STATE();
    case 80:
      if (lookahead == 'D') ADVANCE(223);
      if (lookahead == 'L') ADVANCE(485);
      if (lookahead == 'U') ADVANCE(572);
      END_STATE();
    case 81:
      if (lookahead == 'D') ADVANCE(225);
      END_STATE();
    case 82:
      if (lookahead == 'D') ADVANCE(226);
      END_STATE();
    case 83:
      if (lookahead == 'D') ADVANCE(227);
      END_STATE();
    case 84:
      if (lookahead == 'D') ADVANCE(228);
      END_STATE();
    case 85:
      if (lookahead == 'D') ADVANCE(229);
      END_STATE();
    case 86:
      if (lookahead == 'D') ADVANCE(230);
      END_STATE();
    case 87:
      if (lookahead == 'D') ADVANCE(231);
      END_STATE();
    case 88:
      if (lookahead == 'E') ADVANCE(247);
      if (lookahead == 'S') ADVANCE(243);
      END_STATE();
    case 89:
      if (lookahead == 'E') ADVANCE(518);
      END_STATE();
    case 90:
      if (lookahead == 'F') ADVANCE(440);
      END_STATE();
    case 91:
      if (lookahead == 'G') ADVANCE(8);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(472);
      END_STATE();
    case 92:
      if (lookahead == 'G') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(473);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(664);
      END_STATE();
    case 94:
      if (lookahead == 'G') ADVANCE(691);
      END_STATE();
    case 95:
      if (lookahead == 'I') ADVANCE(576);
      END_STATE();
    case 96:
      if (lookahead == 'I') ADVANCE(577);
      END_STATE();
    case 97:
      if (lookahead == 'I') ADVANCE(578);
      END_STATE();
    case 98:
      if (lookahead == 'I') ADVANCE(580);
      END_STATE();
    case 99:
      if (lookahead == 'I') ADVANCE(582);
      END_STATE();
    case 100:
      if (lookahead == 'I') ADVANCE(583);
      END_STATE();
    case 101:
      if (lookahead == 'I') ADVANCE(584);
      END_STATE();
    case 102:
      if (lookahead == 'I') ADVANCE(585);
      END_STATE();
    case 103:
      if (lookahead == 'I') ADVANCE(586);
      END_STATE();
    case 104:
      if (lookahead == 'L') ADVANCE(602);
      END_STATE();
    case 105:
      if (lookahead == 'L') ADVANCE(482);
      END_STATE();
    case 106:
      if (lookahead == 'L') ADVANCE(483);
      END_STATE();
    case 107:
      if (lookahead == 'L') ADVANCE(484);
      END_STATE();
    case 108:
      if (lookahead == 'M') ADVANCE(613);
      END_STATE();
    case 109:
      if (lookahead == 'M') ADVANCE(498);
      END_STATE();
    case 110:
      if (lookahead == 'M') ADVANCE(851);
      END_STATE();
    case 111:
      if (lookahead == 'M') ADVANCE(852);
      END_STATE();
    case 112:
      if (lookahead == 'O') ADVANCE(384);
      END_STATE();
    case 113:
      if (lookahead == 'P') ADVANCE(215);
      END_STATE();
    case 114:
      if (lookahead == 'P') ADVANCE(217);
      END_STATE();
    case 115:
      if (lookahead == 'R') ADVANCE(356);
      END_STATE();
    case 116:
      if (lookahead == 'S') ADVANCE(790);
      END_STATE();
    case 117:
      if (lookahead == 'S') ADVANCE(790);
      if (lookahead == 's') ADVANCE(792);
      END_STATE();
    case 118:
      if (lookahead == 'S') ADVANCE(308);
      END_STATE();
    case 119:
      if (lookahead == 'S') ADVANCE(451);
      END_STATE();
    case 120:
      if (lookahead == 'S') ADVANCE(303);
      END_STATE();
    case 121:
      if (lookahead == 'S') ADVANCE(798);
      END_STATE();
    case 122:
      if (lookahead == 'S') ADVANCE(800);
      END_STATE();
    case 123:
      if (lookahead == 'S') ADVANCE(802);
      END_STATE();
    case 124:
      if (lookahead == 'S') ADVANCE(804);
      END_STATE();
    case 125:
      if (lookahead == 'S') ADVANCE(806);
      END_STATE();
    case 126:
      if (lookahead == 'S') ADVANCE(808);
      END_STATE();
    case 127:
      if (lookahead == 'S') ADVANCE(809);
      END_STATE();
    case 128:
      if (lookahead == 'S') ADVANCE(810);
      END_STATE();
    case 129:
      if (lookahead == 'S') ADVANCE(811);
      END_STATE();
    case 130:
      if (lookahead == 'S') ADVANCE(812);
      END_STATE();
    case 131:
      if (lookahead == 'S') ADVANCE(813);
      END_STATE();
    case 132:
      if (lookahead == 'S') ADVANCE(814);
      END_STATE();
    case 133:
      if (lookahead == 'S') ADVANCE(815);
      END_STATE();
    case 134:
      if (lookahead == 'S') ADVANCE(816);
      END_STATE();
    case 135:
      if (lookahead == 'S') ADVANCE(817);
      END_STATE();
    case 136:
      if (lookahead == 'S') ADVANCE(357);
      END_STATE();
    case 137:
      if (lookahead == 'S') ADVANCE(488);
      END_STATE();
    case 138:
      if (lookahead == 'S') ADVANCE(490);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(378);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(427);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(428);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(612);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(592);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(614);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(607);
      END_STATE();
    case 146:
      if (lookahead == 'U') ADVANCE(755);
      END_STATE();
    case 147:
      if (lookahead == 'U') ADVANCE(758);
      END_STATE();
    case 148:
      if (lookahead == 'V') ADVANCE(352);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(91);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(6);
      END_STATE();
    case 153:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 154:
      if (lookahead == '_') ADVANCE(197);
      END_STATE();
    case 155:
      if (lookahead == '_') ADVANCE(15);
      END_STATE();
    case 156:
      if (lookahead == '_') ADVANCE(16);
      END_STATE();
    case 157:
      if (lookahead == '_') ADVANCE(210);
      END_STATE();
    case 158:
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 159:
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 160:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 161:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 162:
      ADVANCE_MAP(
        'a', 260,
        'b', 72,
        'c', 426,
        'd', 375,
        'e', 535,
        'f', 433,
        'h', 301,
        'i', 74,
        'k', 296,
        'l', 282,
        'm', 189,
        'n', 846,
        'o', 635,
        'q', 847,
        'r', 283,
        's', 328,
        't', 207,
        'u', 541,
        'v', 337,
        'w', 657,
        'x', 615,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(162);
      END_STATE();
    case 163:
      if (lookahead == 'a') ADVANCE(717);
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(525);
      END_STATE();
    case 164:
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(715);
      END_STATE();
    case 165:
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 166:
      if (lookahead == 'a') ADVANCE(492);
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 167:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(383);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(898);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(946);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(945);
      END_STATE();
    case 171:
      if (lookahead == 'a') ADVANCE(943);
      END_STATE();
    case 172:
      if (lookahead == 'a') ADVANCE(951);
      END_STATE();
    case 173:
      if (lookahead == 'a') ADVANCE(950);
      END_STATE();
    case 174:
      if (lookahead == 'a') ADVANCE(955);
      END_STATE();
    case 175:
      if (lookahead == 'a') ADVANCE(948);
      END_STATE();
    case 176:
      if (lookahead == 'a') ADVANCE(941);
      END_STATE();
    case 177:
      if (lookahead == 'a') ADVANCE(952);
      END_STATE();
    case 178:
      if (lookahead == 'a') ADVANCE(954);
      END_STATE();
    case 179:
      if (lookahead == 'a') ADVANCE(949);
      END_STATE();
    case 180:
      if (lookahead == 'a') ADVANCE(947);
      END_STATE();
    case 181:
      if (lookahead == 'a') ADVANCE(956);
      END_STATE();
    case 182:
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 183:
      if (lookahead == 'a') ADVANCE(944);
      END_STATE();
    case 184:
      if (lookahead == 'a') ADVANCE(942);
      END_STATE();
    case 185:
      if (lookahead == 'a') ADVANCE(435);
      END_STATE();
    case 186:
      if (lookahead == 'a') ADVANCE(757);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 187:
      if (lookahead == 'a') ADVANCE(493);
      END_STATE();
    case 188:
      if (lookahead == 'a') ADVANCE(863);
      END_STATE();
    case 189:
      if (lookahead == 'a') ADVANCE(617);
      if (lookahead == 'k') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(278);
      if (lookahead == 'u') ADVANCE(507);
      END_STATE();
    case 190:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 191:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 192:
      if (lookahead == 'a') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(515);
      END_STATE();
    case 193:
      if (lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 194:
      if (lookahead == 'a') ADVANCE(509);
      END_STATE();
    case 195:
      if (lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 196:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 197:
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'c') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(633);
      if (lookahead == 'h') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == 'u') ADVANCE(570);
      END_STATE();
    case 198:
      if (lookahead == 'a') ADVANCE(716);
      END_STATE();
    case 199:
      if (lookahead == 'a') ADVANCE(481);
      END_STATE();
    case 200:
      if (lookahead == 'a') ADVANCE(508);
      END_STATE();
    case 201:
      if (lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 202:
      if (lookahead == 'a') ADVANCE(512);
      END_STATE();
    case 203:
      if (lookahead == 'a') ADVANCE(499);
      END_STATE();
    case 204:
      if (lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 205:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 206:
      if (lookahead == 'a') ADVANCE(656);
      END_STATE();
    case 207:
      if (lookahead == 'a') ADVANCE(487);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 208:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 209:
      if (lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 210:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(609);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 211:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'c') ADVANCE(609);
      if (lookahead == 'e') ADVANCE(634);
      if (lookahead == 'h') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(312);
      if (lookahead == 's') ADVANCE(254);
      if (lookahead == 'u') ADVANCE(590);
      END_STATE();
    case 212:
      if (lookahead == 'a') ADVANCE(764);
      END_STATE();
    case 213:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 214:
      if (lookahead == 'a') ADVANCE(845);
      END_STATE();
    case 215:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 216:
      if (lookahead == 'a') ADVANCE(766);
      END_STATE();
    case 217:
      if (lookahead == 'a') ADVANCE(445);
      END_STATE();
    case 218:
      if (lookahead == 'a') ADVANCE(770);
      END_STATE();
    case 219:
      if (lookahead == 'a') ADVANCE(771);
      END_STATE();
    case 220:
      if (lookahead == 'a') ADVANCE(772);
      END_STATE();
    case 221:
      if (lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 222:
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 223:
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 224:
      if (lookahead == 'a') ADVANCE(777);
      END_STATE();
    case 225:
      if (lookahead == 'a') ADVANCE(778);
      END_STATE();
    case 226:
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 227:
      if (lookahead == 'a') ADVANCE(780);
      END_STATE();
    case 228:
      if (lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 229:
      if (lookahead == 'a') ADVANCE(782);
      END_STATE();
    case 230:
      if (lookahead == 'a') ADVANCE(783);
      END_STATE();
    case 231:
      if (lookahead == 'a') ADVANCE(784);
      END_STATE();
    case 232:
      if (lookahead == 'a') ADVANCE(818);
      END_STATE();
    case 233:
      if (lookahead == 'a') ADVANCE(697);
      END_STATE();
    case 234:
      if (lookahead == 'a') ADVANCE(820);
      END_STATE();
    case 235:
      if (lookahead == 'a') ADVANCE(630);
      END_STATE();
    case 236:
      if (lookahead == 'a') ADVANCE(735);
      END_STATE();
    case 237:
      if (lookahead == 'a') ADVANCE(519);
      END_STATE();
    case 238:
      if (lookahead == 'a') ADVANCE(821);
      END_STATE();
    case 239:
      if (lookahead == 'a') ADVANCE(489);
      END_STATE();
    case 240:
      if (lookahead == 'b') ADVANCE(760);
      END_STATE();
    case 241:
      if (lookahead == 'b') ADVANCE(156);
      END_STATE();
    case 242:
      if (lookahead == 'c') ADVANCE(249);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(429);
      END_STATE();
    case 244:
      if (lookahead == 'c') ADVANCE(627);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(599);
      END_STATE();
    case 246:
      if (lookahead == 'c') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 247:
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 248:
      if (lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 249:
      if (lookahead == 'c') ADVANCE(187);
      END_STATE();
    case 250:
      if (lookahead == 'c') ADVANCE(376);
      END_STATE();
    case 251:
      if (lookahead == 'c') ADVANCE(288);
      END_STATE();
    case 252:
      if (lookahead == 'c') ADVANCE(202);
      END_STATE();
    case 253:
      if (lookahead == 'c') ADVANCE(608);
      END_STATE();
    case 254:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 255:
      if (lookahead == 'c') ADVANCE(610);
      END_STATE();
    case 256:
      if (lookahead == 'c') ADVANCE(611);
      END_STATE();
    case 257:
      if (lookahead == 'c') ADVANCE(238);
      END_STATE();
    case 258:
      if (lookahead == 'c') ADVANCE(829);
      END_STATE();
    case 259:
      if (lookahead == 'c') ADVANCE(631);
      END_STATE();
    case 260:
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'n') ADVANCE(281);
      if (lookahead == 'p') ADVANCE(621);
      END_STATE();
    case 261:
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 262:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 263:
      if (lookahead == 'd') ADVANCE(105);
      END_STATE();
    case 264:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 265:
      if (lookahead == 'd') ADVANCE(957);
      END_STATE();
    case 266:
      if (lookahead == 'd') ADVANCE(964);
      END_STATE();
    case 267:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 268:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 269:
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 270:
      if (lookahead == 'd') ADVANCE(286);
      if (lookahead == 't') ADVANCE(351);
      END_STATE();
    case 271:
      if (lookahead == 'd') ADVANCE(728);
      END_STATE();
    case 272:
      if (lookahead == 'd') ADVANCE(265);
      END_STATE();
    case 273:
      if (lookahead == 'd') ADVANCE(266);
      END_STATE();
    case 274:
      if (lookahead == 'd') ADVANCE(290);
      END_STATE();
    case 275:
      if (lookahead == 'd') ADVANCE(358);
      END_STATE();
    case 276:
      if (lookahead == 'd') ADVANCE(309);
      END_STATE();
    case 277:
      if (lookahead == 'd') ADVANCE(326);
      END_STATE();
    case 278:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 279:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 280:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 281:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(537);
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(623);
      if (lookahead == 'o') ADVANCE(761);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(862);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(995);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(933);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(931);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(984);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(924);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(925);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(926);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(408);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(530);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(787);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(643);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(644);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(648);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(650);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(654);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 323:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 324:
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 325:
      if (lookahead == 'e') ADVANCE(693);
      END_STATE();
    case 326:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 327:
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 't') ADVANCE(660);
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 328:
      if (lookahead == 'e') ADVANCE(659);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == 'l') ADVANCE(475);
      if (lookahead == 'n') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(240);
      END_STATE();
    case 329:
      if (lookahead == 'e') ADVANCE(549);
      END_STATE();
    case 330:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 331:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 332:
      if (lookahead == 'e') ADVANCE(561);
      END_STATE();
    case 333:
      if (lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 334:
      if (lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 335:
      if (lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 336:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 337:
      if (lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 338:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 339:
      if (lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 340:
      if (lookahead == 'e') ADVANCE(723);
      END_STATE();
    case 341:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 342:
      if (lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 343:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 344:
      if (lookahead == 'e') ADVANCE(415);
      END_STATE();
    case 345:
      if (lookahead == 'e') ADVANCE(416);
      END_STATE();
    case 346:
      if (lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 347:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 348:
      if (lookahead == 'e') ADVANCE(419);
      END_STATE();
    case 349:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 350:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 351:
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 352:
      if (lookahead == 'e') ADVANCE(690);
      END_STATE();
    case 353:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 354:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 355:
      if (lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 356:
      if (lookahead == 'e') ADVANCE(734);
      END_STATE();
    case 357:
      if (lookahead == 'e') ADVANCE(819);
      END_STATE();
    case 358:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 359:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 360:
      if (lookahead == 'e') ADVANCE(534);
      END_STATE();
    case 361:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 362:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 363:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 364:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 365:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 366:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 367:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 368:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 369:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 370:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 371:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 372:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 373:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 374:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 375:
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(861);
      END_STATE();
    case 376:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 377:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 378:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 379:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 380:
      if (lookahead == 'f') ADVANCE(864);
      END_STATE();
    case 381:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 382:
      if (lookahead == 'f') ADVANCE(865);
      END_STATE();
    case 383:
      if (lookahead == 'f') ADVANCE(843);
      END_STATE();
    case 384:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 385:
      if (lookahead == 'g') ADVANCE(893);
      END_STATE();
    case 386:
      if (lookahead == 'g') ADVANCE(892);
      END_STATE();
    case 387:
      if (lookahead == 'g') ADVANCE(927);
      END_STATE();
    case 388:
      if (lookahead == 'g') ADVANCE(928);
      END_STATE();
    case 389:
      if (lookahead == 'g') ADVANCE(979);
      END_STATE();
    case 390:
      if (lookahead == 'g') ADVANCE(978);
      END_STATE();
    case 391:
      if (lookahead == 'g') ADVANCE(980);
      END_STATE();
    case 392:
      if (lookahead == 'g') ADVANCE(917);
      END_STATE();
    case 393:
      if (lookahead == 'g') ADVANCE(985);
      END_STATE();
    case 394:
      if (lookahead == 'g') ADVANCE(915);
      END_STATE();
    case 395:
      if (lookahead == 'g') ADVANCE(913);
      END_STATE();
    case 396:
      if (lookahead == 'g') ADVANCE(958);
      END_STATE();
    case 397:
      if (lookahead == 'g') ADVANCE(965);
      END_STATE();
    case 398:
      if (lookahead == 'g') ADVANCE(918);
      END_STATE();
    case 399:
      if (lookahead == 'g') ADVANCE(986);
      END_STATE();
    case 400:
      if (lookahead == 'g') ADVANCE(916);
      END_STATE();
    case 401:
      if (lookahead == 'g') ADVANCE(919);
      END_STATE();
    case 402:
      if (lookahead == 'g') ADVANCE(981);
      END_STATE();
    case 403:
      if (lookahead == 'g') ADVANCE(920);
      END_STATE();
    case 404:
      if (lookahead == 'g') ADVANCE(914);
      END_STATE();
    case 405:
      if (lookahead == 'g') ADVANCE(976);
      END_STATE();
    case 406:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 407:
      if (lookahead == 'g') ADVANCE(753);
      END_STATE();
    case 408:
      if (lookahead == 'g') ADVANCE(307);
      END_STATE();
    case 409:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 410:
      if (lookahead == 'g') ADVANCE(313);
      END_STATE();
    case 411:
      if (lookahead == 'g') ADVANCE(314);
      END_STATE();
    case 412:
      if (lookahead == 'g') ADVANCE(315);
      END_STATE();
    case 413:
      if (lookahead == 'g') ADVANCE(571);
      END_STATE();
    case 414:
      if (lookahead == 'g') ADVANCE(316);
      END_STATE();
    case 415:
      if (lookahead == 'g') ADVANCE(317);
      END_STATE();
    case 416:
      if (lookahead == 'g') ADVANCE(318);
      END_STATE();
    case 417:
      if (lookahead == 'g') ADVANCE(319);
      END_STATE();
    case 418:
      if (lookahead == 'g') ADVANCE(320);
      END_STATE();
    case 419:
      if (lookahead == 'g') ADVANCE(322);
      END_STATE();
    case 420:
      if (lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 421:
      if (lookahead == 'g') ADVANCE(324);
      END_STATE();
    case 422:
      if (lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 423:
      if (lookahead == 'g') ADVANCE(588);
      END_STATE();
    case 424:
      if (lookahead == 'g') ADVANCE(589);
      END_STATE();
    case 425:
      if (lookahead == 'h') ADVANCE(112);
      END_STATE();
    case 426:
      if (lookahead == 'h') ADVANCE(597);
      if (lookahead == 'o') ADVANCE(526);
      END_STATE();
    case 427:
      if (lookahead == 'h') ADVANCE(304);
      END_STATE();
    case 428:
      if (lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 429:
      if (lookahead == 'h') ADVANCE(554);
      END_STATE();
    case 430:
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 431:
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead == 'o') ADVANCE(655);
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead == 's') ADVANCE(738);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(380);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(542);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(496);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(539);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(698);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(696);
      END_STATE();
    case 441:
      if (lookahead == 'i') ADVANCE(639);
      END_STATE();
    case 442:
      if (lookahead == 'i') ADVANCE(544);
      END_STATE();
    case 443:
      if (lookahead == 'i') ADVANCE(546);
      END_STATE();
    case 444:
      if (lookahead == 'i') ADVANCE(742);
      END_STATE();
    case 445:
      if (lookahead == 'i') ADVANCE(641);
      END_STATE();
    case 446:
      if (lookahead == 'i') ADVANCE(547);
      END_STATE();
    case 447:
      if (lookahead == 'i') ADVANCE(548);
      END_STATE();
    case 448:
      if (lookahead == 'i') ADVANCE(551);
      END_STATE();
    case 449:
      if (lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 450:
      if (lookahead == 'i') ADVANCE(553);
      END_STATE();
    case 451:
      if (lookahead == 'i') ADVANCE(413);
      END_STATE();
    case 452:
      if (lookahead == 'i') ADVANCE(575);
      END_STATE();
    case 453:
      if (lookahead == 'i') ADVANCE(555);
      END_STATE();
    case 454:
      if (lookahead == 'i') ADVANCE(759);
      END_STATE();
    case 455:
      if (lookahead == 'i') ADVANCE(332);
      END_STATE();
    case 456:
      if (lookahead == 'i') ADVANCE(556);
      END_STATE();
    case 457:
      if (lookahead == 'i') ADVANCE(557);
      END_STATE();
    case 458:
      if (lookahead == 'i') ADVANCE(747);
      END_STATE();
    case 459:
      if (lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 460:
      if (lookahead == 'i') ADVANCE(762);
      END_STATE();
    case 461:
      if (lookahead == 'i') ADVANCE(748);
      END_STATE();
    case 462:
      if (lookahead == 'i') ADVANCE(559);
      END_STATE();
    case 463:
      if (lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 464:
      if (lookahead == 'i') ADVANCE(562);
      END_STATE();
    case 465:
      if (lookahead == 'i') ADVANCE(563);
      END_STATE();
    case 466:
      if (lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 467:
      if (lookahead == 'i') ADVANCE(565);
      END_STATE();
    case 468:
      if (lookahead == 'i') ADVANCE(566);
      END_STATE();
    case 469:
      if (lookahead == 'i') ADVANCE(567);
      END_STATE();
    case 470:
      if (lookahead == 'i') ADVANCE(769);
      END_STATE();
    case 471:
      if (lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 472:
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'l') ADVANCE(680);
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 473:
      if (lookahead == 'i') ADVANCE(516);
      if (lookahead == 'u') ADVANCE(503);
      END_STATE();
    case 474:
      if (lookahead == 'i') ADVANCE(382);
      END_STATE();
    case 475:
      if (lookahead == 'i') ADVANCE(250);
      END_STATE();
    case 476:
      if (lookahead == 'i') ADVANCE(624);
      END_STATE();
    case 477:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 478:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 479:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 480:
      if (lookahead == 'i') ADVANCE(729);
      END_STATE();
    case 481:
      if (lookahead == 'i') ADVANCE(574);
      END_STATE();
    case 482:
      if (lookahead == 'i') ADVANCE(724);
      END_STATE();
    case 483:
      if (lookahead == 'i') ADVANCE(725);
      END_STATE();
    case 484:
      if (lookahead == 'i') ADVANCE(726);
      END_STATE();
    case 485:
      if (lookahead == 'i') ADVANCE(727);
      END_STATE();
    case 486:
      if (lookahead == 'i') ADVANCE(517);
      END_STATE();
    case 487:
      if (lookahead == 'i') ADVANCE(522);
      END_STATE();
    case 488:
      if (lookahead == 'i') ADVANCE(423);
      END_STATE();
    case 489:
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 490:
      if (lookahead == 'i') ADVANCE(424);
      END_STATE();
    case 491:
      if (lookahead == 'k') ADVANCE(12);
      END_STATE();
    case 492:
      if (lookahead == 'k') ADVANCE(299);
      END_STATE();
    case 493:
      if (lookahead == 'k') ADVANCE(160);
      END_STATE();
    case 494:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 495:
      if (lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 496:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 497:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 498:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 499:
      if (lookahead == 'l') ADVANCE(960);
      END_STATE();
    case 500:
      if (lookahead == 'l') ADVANCE(967);
      END_STATE();
    case 501:
      if (lookahead == 'l') ADVANCE(959);
      END_STATE();
    case 502:
      if (lookahead == 'l') ADVANCE(966);
      END_STATE();
    case 503:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 504:
      if (lookahead == 'l') ADVANCE(705);
      END_STATE();
    case 505:
      if (lookahead == 'l') ADVANCE(520);
      END_STATE();
    case 506:
      if (lookahead == 'l') ADVANCE(871);
      END_STATE();
    case 507:
      if (lookahead == 'l') ADVANCE(765);
      END_STATE();
    case 508:
      if (lookahead == 'l') ADVANCE(709);
      END_STATE();
    case 509:
      if (lookahead == 'l') ADVANCE(480);
      END_STATE();
    case 510:
      if (lookahead == 'l') ADVANCE(302);
      END_STATE();
    case 511:
      if (lookahead == 'l') ADVANCE(749);
      END_STATE();
    case 512:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 513:
      if (lookahead == 'l') ADVANCE(752);
      END_STATE();
    case 514:
      if (lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 515:
      if (lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 516:
      if (lookahead == 'l') ADVANCE(514);
      END_STATE();
    case 517:
      if (lookahead == 'l') ADVANCE(768);
      END_STATE();
    case 518:
      if (lookahead == 'l') ADVANCE(730);
      END_STATE();
    case 519:
      if (lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 520:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 521:
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'q') ADVANCE(856);
      END_STATE();
    case 522:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 523:
      if (lookahead == 'l') ADVANCE(360);
      if (lookahead == 'q') ADVANCE(858);
      END_STATE();
    case 524:
      if (lookahead == 'm') ADVANCE(991);
      END_STATE();
    case 525:
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(887);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 526:
      if (lookahead == 'm') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(714);
      if (lookahead == 'u') ADVANCE(550);
      END_STATE();
    case 527:
      if (lookahead == 'm') ADVANCE(625);
      END_STATE();
    case 528:
      if (lookahead == 'm') ADVANCE(268);
      END_STATE();
    case 529:
      if (lookahead == 'm') ADVANCE(626);
      END_STATE();
    case 530:
      if (lookahead == 'm') ADVANCE(335);
      END_STATE();
    case 531:
      if (lookahead == 'm') ADVANCE(628);
      END_STATE();
    case 532:
      if (lookahead == 'm') ADVANCE(339);
      END_STATE();
    case 533:
      if (lookahead == 'm') ADVANCE(629);
      END_STATE();
    case 534:
      if (lookahead == 'm') ADVANCE(342);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 'q') ADVANCE(848);
      if (lookahead == 'x') ADVANCE(616);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(407);
      if (lookahead == 's') ADVANCE(732);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(902);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(706);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(389);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(390);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(391);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(604);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(392);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(393);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(398);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(399);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(826);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(400);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(401);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(402);
      END_STATE();
    case 565:
      if (lookahead == 'n') ADVANCE(403);
      END_STATE();
    case 566:
      if (lookahead == 'n') ADVANCE(404);
      END_STATE();
    case 567:
      if (lookahead == 'n') ADVANCE(405);
      END_STATE();
    case 568:
      if (lookahead == 'n') ADVANCE(750);
      END_STATE();
    case 569:
      if (lookahead == 'n') ADVANCE(751);
      END_STATE();
    case 570:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 571:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 572:
      if (lookahead == 'n') ADVANCE(458);
      END_STATE();
    case 573:
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 574:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 575:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 576:
      if (lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 577:
      if (lookahead == 'n') ADVANCE(788);
      END_STATE();
    case 578:
      if (lookahead == 'n') ADVANCE(789);
      END_STATE();
    case 579:
      if (lookahead == 'n') ADVANCE(791);
      END_STATE();
    case 580:
      if (lookahead == 'n') ADVANCE(793);
      END_STATE();
    case 581:
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 582:
      if (lookahead == 'n') ADVANCE(797);
      END_STATE();
    case 583:
      if (lookahead == 'n') ADVANCE(799);
      END_STATE();
    case 584:
      if (lookahead == 'n') ADVANCE(801);
      END_STATE();
    case 585:
      if (lookahead == 'n') ADVANCE(803);
      END_STATE();
    case 586:
      if (lookahead == 'n') ADVANCE(805);
      END_STATE();
    case 587:
      if (lookahead == 'n') ADVANCE(807);
      END_STATE();
    case 588:
      if (lookahead == 'n') ADVANCE(232);
      END_STATE();
    case 589:
      if (lookahead == 'n') ADVANCE(234);
      END_STATE();
    case 590:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 591:
      if (lookahead == 'n') ADVANCE(844);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(495);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(527);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(849);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(545);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(274);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(618);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(637);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(600);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(722);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(670);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(850);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(767);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(277);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(529);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(531);
      END_STATE();
    case 611:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 612:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 613:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 614:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 615:
      if (lookahead == 'o') ADVANCE(703);
      END_STATE();
    case 616:
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 617:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 618:
      if (lookahead == 'p') ADVANCE(971);
      END_STATE();
    case 619:
      if (lookahead == 'p') ADVANCE(961);
      END_STATE();
    case 620:
      if (lookahead == 'p') ADVANCE(968);
      END_STATE();
    case 621:
      if (lookahead == 'p') ADVANCE(329);
      END_STATE();
    case 622:
      if (lookahead == 'p') ADVANCE(510);
      END_STATE();
    case 623:
      if (lookahead == 'p') ADVANCE(297);
      END_STATE();
    case 624:
      if (lookahead == 'p') ADVANCE(506);
      END_STATE();
    case 625:
      if (lookahead == 'p') ADVANCE(686);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(692);
      END_STATE();
    case 627:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 628:
      if (lookahead == 'p') ADVANCE(694);
      END_STATE();
    case 629:
      if (lookahead == 'p') ADVANCE(695);
      END_STATE();
    case 630:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 631:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 632:
      if (lookahead == 'q') ADVANCE(855);
      END_STATE();
    case 633:
      if (lookahead == 'q') ADVANCE(856);
      END_STATE();
    case 634:
      if (lookahead == 'q') ADVANCE(858);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(897);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(2);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(997);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(934);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(891);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(935);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(903);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(909);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(906);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(910);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(990);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(907);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(904);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(977);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(248);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(470);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(478);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(436);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(601);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(434);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(442);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(443);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(446);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(447);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(448);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(449);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(450);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(453);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(457);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(459);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(462);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(463);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(305);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(465);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(466);
      END_STATE();
    case 683:
      if (lookahead == 'r') ADVANCE(467);
      END_STATE();
    case 684:
      if (lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 685:
      if (lookahead == 'r') ADVANCE(469);
      END_STATE();
    case 686:
      if (lookahead == 'r') ADVANCE(306);
      END_STATE();
    case 687:
      if (lookahead == 'r') ADVANCE(293);
      END_STATE();
    case 688:
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 689:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 690:
      if (lookahead == 'r') ADVANCE(474);
      END_STATE();
    case 691:
      if (lookahead == 'r') ADVANCE(605);
      END_STATE();
    case 692:
      if (lookahead == 'r') ADVANCE(333);
      END_STATE();
    case 693:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 694:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 695:
      if (lookahead == 'r') ADVANCE(340);
      END_STATE();
    case 696:
      if (lookahead == 'r') ADVANCE(736);
      END_STATE();
    case 697:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 698:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 699:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 700:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 701:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 702:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 703:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 704:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(937);
      END_STATE();
    case 707:
      if (lookahead == 's') ADVANCE(983);
      END_STATE();
    case 708:
      if (lookahead == 's') ADVANCE(987);
      END_STATE();
    case 709:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 710:
      if (lookahead == 's') ADVANCE(962);
      END_STATE();
    case 711:
      if (lookahead == 's') ADVANCE(969);
      END_STATE();
    case 712:
      if (lookahead == 's') ADVANCE(963);
      END_STATE();
    case 713:
      if (lookahead == 's') ADVANCE(970);
      END_STATE();
    case 714:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 715:
      if (lookahead == 's') ADVANCE(739);
      END_STATE();
    case 716:
      if (lookahead == 's') ADVANCE(430);
      END_STATE();
    case 717:
      if (lookahead == 's') ADVANCE(285);
      END_STATE();
    case 718:
      if (lookahead == 's') ADVANCE(827);
      END_STATE();
    case 719:
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 720:
      if (lookahead == 's') ADVANCE(711);
      END_STATE();
    case 721:
      if (lookahead == 's') ADVANCE(712);
      END_STATE();
    case 722:
      if (lookahead == 's') ADVANCE(289);
      END_STATE();
    case 723:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 724:
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 725:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 726:
      if (lookahead == 's') ADVANCE(745);
      END_STATE();
    case 727:
      if (lookahead == 's') ADVANCE(746);
      END_STATE();
    case 728:
      if (lookahead == 's') ADVANCE(208);
      END_STATE();
    case 729:
      if (lookahead == 's') ADVANCE(366);
      END_STATE();
    case 730:
      if (lookahead == 's') ADVANCE(291);
      END_STATE();
    case 731:
      if (lookahead == 's') ADVANCE(853);
      END_STATE();
    case 732:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 733:
      if (lookahead == 's') ADVANCE(842);
      END_STATE();
    case 734:
      if (lookahead == 's') ADVANCE(854);
      END_STATE();
    case 735:
      if (lookahead == 's') ADVANCE(431);
      END_STATE();
    case 736:
      if (lookahead == 's') ADVANCE(841);
      END_STATE();
    case 737:
      if (lookahead == 's') ADVANCE(833);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(896);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(894);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(982);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(938);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(940);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(939);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(936);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(932);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(988);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(901);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(899);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(900);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(972);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(425);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(857);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(381);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(707);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(663);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(708);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 765:
      if (lookahead == 't') ADVANCE(476);
      END_STATE();
    case 766:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 767:
      if (lookahead == 't') ADVANCE(455);
      END_STATE();
    case 768:
      if (lookahead == 't') ADVANCE(438);
      END_STATE();
    case 769:
      if (lookahead == 't') ADVANCE(330);
      END_STATE();
    case 770:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 771:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 772:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 773:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 774:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 775:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 776:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 777:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 778:
      if (lookahead == 't') ADVANCE(178);
      END_STATE();
    case 779:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 780:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 781:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 782:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 783:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 784:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 785:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 786:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 787:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 788:
      if (lookahead == 't') ADVANCE(334);
      END_STATE();
    case 789:
      if (lookahead == 't') ADVANCE(338);
      END_STATE();
    case 790:
      if (lookahead == 't') ADVANCE(665);
      END_STATE();
    case 791:
      if (lookahead == 't') ADVANCE(341);
      END_STATE();
    case 792:
      if (lookahead == 't') ADVANCE(666);
      END_STATE();
    case 793:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 794:
      if (lookahead == 't') ADVANCE(667);
      END_STATE();
    case 795:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 796:
      if (lookahead == 't') ADVANCE(668);
      END_STATE();
    case 797:
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 798:
      if (lookahead == 't') ADVANCE(669);
      END_STATE();
    case 799:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 800:
      if (lookahead == 't') ADVANCE(671);
      END_STATE();
    case 801:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 802:
      if (lookahead == 't') ADVANCE(672);
      END_STATE();
    case 803:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 804:
      if (lookahead == 't') ADVANCE(673);
      END_STATE();
    case 805:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 806:
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 807:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 808:
      if (lookahead == 't') ADVANCE(675);
      END_STATE();
    case 809:
      if (lookahead == 't') ADVANCE(676);
      END_STATE();
    case 810:
      if (lookahead == 't') ADVANCE(677);
      END_STATE();
    case 811:
      if (lookahead == 't') ADVANCE(678);
      END_STATE();
    case 812:
      if (lookahead == 't') ADVANCE(679);
      END_STATE();
    case 813:
      if (lookahead == 't') ADVANCE(681);
      END_STATE();
    case 814:
      if (lookahead == 't') ADVANCE(682);
      END_STATE();
    case 815:
      if (lookahead == 't') ADVANCE(683);
      END_STATE();
    case 816:
      if (lookahead == 't') ADVANCE(684);
      END_STATE();
    case 817:
      if (lookahead == 't') ADVANCE(685);
      END_STATE();
    case 818:
      if (lookahead == 't') ADVANCE(859);
      END_STATE();
    case 819:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 820:
      if (lookahead == 't') ADVANCE(860);
      END_STATE();
    case 821:
      if (lookahead == 't') ADVANCE(353);
      END_STATE();
    case 822:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 823:
      if (lookahead == 't') ADVANCE(359);
      END_STATE();
    case 824:
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 825:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 826:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 827:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 828:
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 829:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 830:
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 831:
      if (lookahead == 't') ADVANCE(365);
      END_STATE();
    case 832:
      if (lookahead == 't') ADVANCE(367);
      END_STATE();
    case 833:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 834:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 835:
      if (lookahead == 't') ADVANCE(369);
      END_STATE();
    case 836:
      if (lookahead == 't') ADVANCE(370);
      END_STATE();
    case 837:
      if (lookahead == 't') ADVANCE(371);
      END_STATE();
    case 838:
      if (lookahead == 't') ADVANCE(372);
      END_STATE();
    case 839:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 840:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 841:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 842:
      if (lookahead == 't') ADVANCE(699);
      END_STATE();
    case 843:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 844:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 845:
      if (lookahead == 't') ADVANCE(377);
      END_STATE();
    case 846:
      if (lookahead == 'u') ADVANCE(505);
      END_STATE();
    case 847:
      if (lookahead == 'u') ADVANCE(606);
      END_STATE();
    case 848:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 849:
      if (lookahead == 'u') ADVANCE(619);
      END_STATE();
    case 850:
      if (lookahead == 'u') ADVANCE(620);
      END_STATE();
    case 851:
      if (lookahead == 'u') ADVANCE(501);
      END_STATE();
    case 852:
      if (lookahead == 'u') ADVANCE(502);
      END_STATE();
    case 853:
      if (lookahead == 'u') ADVANCE(511);
      END_STATE();
    case 854:
      if (lookahead == 'u') ADVANCE(513);
      END_STATE();
    case 855:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 856:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 857:
      if (lookahead == 'u') ADVANCE(687);
      END_STATE();
    case 858:
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 859:
      if (lookahead == 'u') ADVANCE(688);
      END_STATE();
    case 860:
      if (lookahead == 'u') ADVANCE(689);
      END_STATE();
    case 861:
      if (lookahead == 'v') ADVANCE(479);
      END_STATE();
    case 862:
      if (lookahead == 'x') ADVANCE(58);
      END_STATE();
    case 863:
      if (lookahead == 'y') ADVANCE(994);
      END_STATE();
    case 864:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 865:
      if (lookahead == 'y') ADVANCE(973);
      END_STATE();
    case 866:
      if (lookahead == 'y') ADVANCE(776);
      END_STATE();
    case 867:
      if (lookahead == 'y') ADVANCE(785);
      END_STATE();
    case 868:
      if (lookahead == 'y') ADVANCE(822);
      END_STATE();
    case 869:
      if (lookahead == 'y') ADVANCE(823);
      END_STATE();
    case 870:
      if (lookahead == 'y') ADVANCE(824);
      END_STATE();
    case 871:
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 872:
      if (lookahead == 'y') ADVANCE(825);
      END_STATE();
    case 873:
      if (lookahead == 'y') ADVANCE(828);
      END_STATE();
    case 874:
      if (lookahead == 'y') ADVANCE(830);
      END_STATE();
    case 875:
      if (lookahead == 'y') ADVANCE(831);
      END_STATE();
    case 876:
      if (lookahead == 'y') ADVANCE(832);
      END_STATE();
    case 877:
      if (lookahead == 'y') ADVANCE(834);
      END_STATE();
    case 878:
      if (lookahead == 'y') ADVANCE(835);
      END_STATE();
    case 879:
      if (lookahead == 'y') ADVANCE(836);
      END_STATE();
    case 880:
      if (lookahead == 'y') ADVANCE(837);
      END_STATE();
    case 881:
      if (lookahead == 'y') ADVANCE(839);
      END_STATE();
    case 882:
      if (lookahead == 'y') ADVANCE(840);
      END_STATE();
    case 883:
      if (eof) ADVANCE(884);
      if (lookahead == '(') ADVANCE(886);
      if (lookahead == ')') ADVANCE(888);
      if (lookahead == '[') ADVANCE(992);
      if (lookahead == ']') ADVANCE(993);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(883);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(885);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_con);
      if (lookahead == 's') ADVANCE(763);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_builtinValue_token1);
      if (lookahead == '\n') ADVANCE(889);
      if (set_contains(aux_sym_builtinValue_token1_character_set_1, 10, lookahead)) ADVANCE(890);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_builtinValue_token1);
      if (set_contains(aux_sym_builtinValue_token1_character_set_1, 10, lookahead)) ADVANCE(890);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(anon_sym_bytestring);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(anon_sym_pair);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(anon_sym_data);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_element);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_element);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(anon_sym_bls12_381_mlresult);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(anon_sym_builtin);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(anon_sym_addInteger);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(anon_sym_subtractInteger);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(anon_sym_multiplyInteger);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(anon_sym_divideInteger);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_quotientInteger);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(anon_sym_remainderInteger);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(anon_sym_modInteger);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(anon_sym_equalsInteger);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(anon_sym_lessThanInteger);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(anon_sym_lessThanEqualsInteger);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(anon_sym_appendByteString);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(anon_sym_consByteString);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(anon_sym_sliceByteString);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(anon_sym_lengthOfByteString);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(anon_sym_indexByteString);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(anon_sym_equalsByteString);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(anon_sym_lessThanByteString);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(anon_sym_lessThanEqualsByteString);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(anon_sym_sha2_256);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(anon_sym_sha3_256);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_blake2b_256);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(anon_sym_verifyEd25519Signature);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(anon_sym_verifyEcdsaSecp256k1Signature);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(anon_sym_verifySchnorrSecp256k1Signature);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(anon_sym_appendString);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(anon_sym_equalsString);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(anon_sym_encodeUtf8);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(anon_sym_decodeUtf8);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(anon_sym_ifThenElse);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(anon_sym_chooseUnit);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(anon_sym_trace);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(anon_sym_fstPair);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(anon_sym_sndPair);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(anon_sym_chooseList);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_mkCons);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(anon_sym_headList);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(anon_sym_tailList);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(anon_sym_nullList);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(anon_sym_chooseData);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(anon_sym_constrData);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(anon_sym_mapData);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(anon_sym_listData);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(anon_sym_iData);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(anon_sym_bData);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(anon_sym_unConstrData);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(anon_sym_unMapData);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(anon_sym_unListData);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(anon_sym_unIData);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(anon_sym_unBData);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(anon_sym_equalsData);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(anon_sym_serialiseData);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(anon_sym_mkPairData);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(anon_sym_mkNilData);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(anon_sym_mkNilPairData);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_add);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_neg);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_scalarMul);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_equal);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_hashToGroup);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_compress);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(anon_sym_bls12_381_G1_uncompress);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_add);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_neg);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_scalarMul);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_equal);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_hashToGroup);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_compress);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(anon_sym_bls12_381_G2_uncompress);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(anon_sym_bls12_381_millerLoop);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(anon_sym_bls12_381_mulMlResult);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(anon_sym_bls12_381_finalVerify);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(anon_sym_keccak_256);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(anon_sym_blake2b_224);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(anon_sym_integerToByteString);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(anon_sym_byteStringToInteger);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(anon_sym_andByteString);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(anon_sym_orByteString);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(anon_sym_xorByteString);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(anon_sym_complementByteString);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(anon_sym_readBit);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(anon_sym_writeBits);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(anon_sym_replicateByte);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(anon_sym_shiftByteString);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_rotateByteString);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(anon_sym_countSetBits);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(anon_sym_findFirstSetBit);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(anon_sym_ripemd_160);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(anon_sym_expModInteger);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(anon_sym_lam);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(anon_sym_delay);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(anon_sym_force);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(anon_sym_constr);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_constr_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(998);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 883},
  [2] = {.lex_state = 162},
  [3] = {.lex_state = 883},
  [4] = {.lex_state = 883},
  [5] = {.lex_state = 883},
  [6] = {.lex_state = 883},
  [7] = {.lex_state = 883},
  [8] = {.lex_state = 883},
  [9] = {.lex_state = 883},
  [10] = {.lex_state = 883},
  [11] = {.lex_state = 883},
  [12] = {.lex_state = 883},
  [13] = {.lex_state = 883},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 883},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 883},
  [18] = {.lex_state = 883},
  [19] = {.lex_state = 883},
  [20] = {.lex_state = 883},
  [21] = {.lex_state = 883},
  [22] = {.lex_state = 883},
  [23] = {.lex_state = 883},
  [24] = {.lex_state = 883},
  [25] = {.lex_state = 883},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_con] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_bytestring] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_pair] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_bls12_381_G1_element] = ACTIONS(1),
    [anon_sym_bls12_381_G2_element] = ACTIONS(1),
    [anon_sym_bls12_381_mlresult] = ACTIONS(1),
    [anon_sym_builtin] = ACTIONS(1),
    [anon_sym_addInteger] = ACTIONS(1),
    [anon_sym_subtractInteger] = ACTIONS(1),
    [anon_sym_multiplyInteger] = ACTIONS(1),
    [anon_sym_divideInteger] = ACTIONS(1),
    [anon_sym_quotientInteger] = ACTIONS(1),
    [anon_sym_remainderInteger] = ACTIONS(1),
    [anon_sym_modInteger] = ACTIONS(1),
    [anon_sym_equalsInteger] = ACTIONS(1),
    [anon_sym_lessThanInteger] = ACTIONS(1),
    [anon_sym_lessThanEqualsInteger] = ACTIONS(1),
    [anon_sym_appendByteString] = ACTIONS(1),
    [anon_sym_sliceByteString] = ACTIONS(1),
    [anon_sym_lengthOfByteString] = ACTIONS(1),
    [anon_sym_indexByteString] = ACTIONS(1),
    [anon_sym_equalsByteString] = ACTIONS(1),
    [anon_sym_lessThanByteString] = ACTIONS(1),
    [anon_sym_lessThanEqualsByteString] = ACTIONS(1),
    [anon_sym_sha2_256] = ACTIONS(1),
    [anon_sym_sha3_256] = ACTIONS(1),
    [anon_sym_blake2b_256] = ACTIONS(1),
    [anon_sym_verifyEd25519Signature] = ACTIONS(1),
    [anon_sym_verifyEcdsaSecp256k1Signature] = ACTIONS(1),
    [anon_sym_verifySchnorrSecp256k1Signature] = ACTIONS(1),
    [anon_sym_appendString] = ACTIONS(1),
    [anon_sym_equalsString] = ACTIONS(1),
    [anon_sym_encodeUtf8] = ACTIONS(1),
    [anon_sym_decodeUtf8] = ACTIONS(1),
    [anon_sym_ifThenElse] = ACTIONS(1),
    [anon_sym_chooseUnit] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_fstPair] = ACTIONS(1),
    [anon_sym_sndPair] = ACTIONS(1),
    [anon_sym_chooseList] = ACTIONS(1),
    [anon_sym_mkCons] = ACTIONS(1),
    [anon_sym_headList] = ACTIONS(1),
    [anon_sym_tailList] = ACTIONS(1),
    [anon_sym_nullList] = ACTIONS(1),
    [anon_sym_chooseData] = ACTIONS(1),
    [anon_sym_mapData] = ACTIONS(1),
    [anon_sym_iData] = ACTIONS(1),
    [anon_sym_bData] = ACTIONS(1),
    [anon_sym_unConstrData] = ACTIONS(1),
    [anon_sym_unMapData] = ACTIONS(1),
    [anon_sym_unListData] = ACTIONS(1),
    [anon_sym_unIData] = ACTIONS(1),
    [anon_sym_unBData] = ACTIONS(1),
    [anon_sym_equalsData] = ACTIONS(1),
    [anon_sym_serialiseData] = ACTIONS(1),
    [anon_sym_mkPairData] = ACTIONS(1),
    [anon_sym_mkNilData] = ACTIONS(1),
    [anon_sym_mkNilPairData] = ACTIONS(1),
    [anon_sym_bls12_381_G1_add] = ACTIONS(1),
    [anon_sym_bls12_381_G1_neg] = ACTIONS(1),
    [anon_sym_bls12_381_G1_scalarMul] = ACTIONS(1),
    [anon_sym_bls12_381_G1_equal] = ACTIONS(1),
    [anon_sym_bls12_381_G1_hashToGroup] = ACTIONS(1),
    [anon_sym_bls12_381_G1_compress] = ACTIONS(1),
    [anon_sym_bls12_381_G1_uncompress] = ACTIONS(1),
    [anon_sym_bls12_381_G2_add] = ACTIONS(1),
    [anon_sym_bls12_381_G2_neg] = ACTIONS(1),
    [anon_sym_bls12_381_G2_scalarMul] = ACTIONS(1),
    [anon_sym_bls12_381_G2_equal] = ACTIONS(1),
    [anon_sym_bls12_381_G2_hashToGroup] = ACTIONS(1),
    [anon_sym_bls12_381_G2_compress] = ACTIONS(1),
    [anon_sym_bls12_381_G2_uncompress] = ACTIONS(1),
    [anon_sym_bls12_381_millerLoop] = ACTIONS(1),
    [anon_sym_bls12_381_mulMlResult] = ACTIONS(1),
    [anon_sym_bls12_381_finalVerify] = ACTIONS(1),
    [anon_sym_keccak_256] = ACTIONS(1),
    [anon_sym_blake2b_224] = ACTIONS(1),
    [anon_sym_byteStringToInteger] = ACTIONS(1),
    [anon_sym_andByteString] = ACTIONS(1),
    [anon_sym_orByteString] = ACTIONS(1),
    [anon_sym_xorByteString] = ACTIONS(1),
    [anon_sym_complementByteString] = ACTIONS(1),
    [anon_sym_readBit] = ACTIONS(1),
    [anon_sym_writeBits] = ACTIONS(1),
    [anon_sym_replicateByte] = ACTIONS(1),
    [anon_sym_shiftByteString] = ACTIONS(1),
    [anon_sym_rotateByteString] = ACTIONS(1),
    [anon_sym_countSetBits] = ACTIONS(1),
    [anon_sym_findFirstSetBit] = ACTIONS(1),
    [anon_sym_ripemd_160] = ACTIONS(1),
    [anon_sym_expModInteger] = ACTIONS(1),
    [anon_sym_lam] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_delay] = ACTIONS(1),
    [anon_sym_force] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
    [anon_sym_constr] = ACTIONS(1),
    [aux_sym_constr_token1] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
  },
  [1] = {
    [sym_uplc] = STATE(32),
    [sym_con] = STATE(15),
    [sym_builtin] = STATE(15),
    [sym_lam] = STATE(15),
    [sym_app] = STATE(15),
    [sym_delay] = STATE(15),
    [sym_force] = STATE(15),
    [sym_constr] = STATE(15),
    [sym_case] = STATE(15),
    [sym_variable] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_error] = ACTIONS(3),
  },
  [2] = {
    [sym_defaultFun] = STATE(37),
    [anon_sym_addInteger] = ACTIONS(9),
    [anon_sym_subtractInteger] = ACTIONS(9),
    [anon_sym_multiplyInteger] = ACTIONS(9),
    [anon_sym_divideInteger] = ACTIONS(9),
    [anon_sym_quotientInteger] = ACTIONS(9),
    [anon_sym_remainderInteger] = ACTIONS(9),
    [anon_sym_modInteger] = ACTIONS(9),
    [anon_sym_equalsInteger] = ACTIONS(9),
    [anon_sym_lessThanInteger] = ACTIONS(9),
    [anon_sym_lessThanEqualsInteger] = ACTIONS(9),
    [anon_sym_appendByteString] = ACTIONS(9),
    [anon_sym_consByteString] = ACTIONS(9),
    [anon_sym_sliceByteString] = ACTIONS(9),
    [anon_sym_lengthOfByteString] = ACTIONS(9),
    [anon_sym_indexByteString] = ACTIONS(9),
    [anon_sym_equalsByteString] = ACTIONS(9),
    [anon_sym_lessThanByteString] = ACTIONS(9),
    [anon_sym_lessThanEqualsByteString] = ACTIONS(9),
    [anon_sym_sha2_256] = ACTIONS(9),
    [anon_sym_sha3_256] = ACTIONS(9),
    [anon_sym_blake2b_256] = ACTIONS(9),
    [anon_sym_verifyEd25519Signature] = ACTIONS(9),
    [anon_sym_verifyEcdsaSecp256k1Signature] = ACTIONS(9),
    [anon_sym_verifySchnorrSecp256k1Signature] = ACTIONS(9),
    [anon_sym_appendString] = ACTIONS(9),
    [anon_sym_equalsString] = ACTIONS(9),
    [anon_sym_encodeUtf8] = ACTIONS(9),
    [anon_sym_decodeUtf8] = ACTIONS(9),
    [anon_sym_ifThenElse] = ACTIONS(9),
    [anon_sym_chooseUnit] = ACTIONS(9),
    [anon_sym_trace] = ACTIONS(9),
    [anon_sym_fstPair] = ACTIONS(9),
    [anon_sym_sndPair] = ACTIONS(9),
    [anon_sym_chooseList] = ACTIONS(9),
    [anon_sym_mkCons] = ACTIONS(9),
    [anon_sym_headList] = ACTIONS(9),
    [anon_sym_tailList] = ACTIONS(9),
    [anon_sym_nullList] = ACTIONS(9),
    [anon_sym_chooseData] = ACTIONS(9),
    [anon_sym_constrData] = ACTIONS(9),
    [anon_sym_mapData] = ACTIONS(9),
    [anon_sym_listData] = ACTIONS(9),
    [anon_sym_iData] = ACTIONS(9),
    [anon_sym_bData] = ACTIONS(9),
    [anon_sym_unConstrData] = ACTIONS(9),
    [anon_sym_unMapData] = ACTIONS(9),
    [anon_sym_unListData] = ACTIONS(9),
    [anon_sym_unIData] = ACTIONS(9),
    [anon_sym_unBData] = ACTIONS(9),
    [anon_sym_equalsData] = ACTIONS(9),
    [anon_sym_serialiseData] = ACTIONS(9),
    [anon_sym_mkPairData] = ACTIONS(9),
    [anon_sym_mkNilData] = ACTIONS(9),
    [anon_sym_mkNilPairData] = ACTIONS(9),
    [anon_sym_bls12_381_G1_add] = ACTIONS(9),
    [anon_sym_bls12_381_G1_neg] = ACTIONS(9),
    [anon_sym_bls12_381_G1_scalarMul] = ACTIONS(9),
    [anon_sym_bls12_381_G1_equal] = ACTIONS(9),
    [anon_sym_bls12_381_G1_hashToGroup] = ACTIONS(9),
    [anon_sym_bls12_381_G1_compress] = ACTIONS(9),
    [anon_sym_bls12_381_G1_uncompress] = ACTIONS(9),
    [anon_sym_bls12_381_G2_add] = ACTIONS(9),
    [anon_sym_bls12_381_G2_neg] = ACTIONS(9),
    [anon_sym_bls12_381_G2_scalarMul] = ACTIONS(9),
    [anon_sym_bls12_381_G2_equal] = ACTIONS(9),
    [anon_sym_bls12_381_G2_hashToGroup] = ACTIONS(9),
    [anon_sym_bls12_381_G2_compress] = ACTIONS(9),
    [anon_sym_bls12_381_G2_uncompress] = ACTIONS(9),
    [anon_sym_bls12_381_millerLoop] = ACTIONS(9),
    [anon_sym_bls12_381_mulMlResult] = ACTIONS(9),
    [anon_sym_bls12_381_finalVerify] = ACTIONS(9),
    [anon_sym_keccak_256] = ACTIONS(9),
    [anon_sym_blake2b_224] = ACTIONS(9),
    [anon_sym_integerToByteString] = ACTIONS(9),
    [anon_sym_byteStringToInteger] = ACTIONS(9),
    [anon_sym_andByteString] = ACTIONS(9),
    [anon_sym_orByteString] = ACTIONS(9),
    [anon_sym_xorByteString] = ACTIONS(9),
    [anon_sym_complementByteString] = ACTIONS(9),
    [anon_sym_readBit] = ACTIONS(9),
    [anon_sym_writeBits] = ACTIONS(9),
    [anon_sym_replicateByte] = ACTIONS(9),
    [anon_sym_shiftByteString] = ACTIONS(9),
    [anon_sym_rotateByteString] = ACTIONS(9),
    [anon_sym_countSetBits] = ACTIONS(9),
    [anon_sym_findFirstSetBit] = ACTIONS(9),
    [anon_sym_ripemd_160] = ACTIONS(9),
    [anon_sym_expModInteger] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(14), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 2,
      sym_variable,
      sym_error,
    STATE(3), 2,
      sym_uplc,
      aux_sym_constr_repeat1,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [28] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(22), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(3), 2,
      sym_uplc,
      aux_sym_constr_repeat1,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [56] = 6,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(3), 2,
      sym_uplc,
      aux_sym_constr_repeat1,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [84] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(5), 2,
      sym_uplc,
      aux_sym_constr_repeat1,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [109] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(4), 2,
      sym_uplc,
      aux_sym_constr_repeat1,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [134] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_uplc,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [158] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      sym_uplc,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [182] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_uplc,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [206] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_uplc,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [230] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_uplc,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [254] = 5,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_uplc,
    ACTIONS(3), 2,
      sym_variable,
      sym_error,
    STATE(15), 8,
      sym_con,
      sym_builtin,
      sym_lam,
      sym_app,
      sym_delay,
      sym_force,
      sym_constr,
      sym_case,
  [278] = 2,
    STATE(27), 1,
      sym_defaultUniTypes,
    ACTIONS(26), 11,
      anon_sym_integer,
      anon_sym_bytestring,
      anon_sym_string,
      anon_sym_unit,
      anon_sym_bool,
      anon_sym_list,
      anon_sym_pair,
      anon_sym_data,
      anon_sym_bls12_381_G1_element,
      anon_sym_bls12_381_G2_element,
      anon_sym_bls12_381_mlresult,
  [295] = 2,
    ACTIONS(30), 1,
      anon_sym_LPAREN,
    ACTIONS(28), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [307] = 7,
    ACTIONS(32), 1,
      anon_sym_con,
    ACTIONS(34), 1,
      anon_sym_builtin,
    ACTIONS(36), 1,
      anon_sym_lam,
    ACTIONS(38), 1,
      anon_sym_delay,
    ACTIONS(40), 1,
      anon_sym_force,
    ACTIONS(42), 1,
      anon_sym_constr,
    ACTIONS(44), 1,
      anon_sym_case,
  [329] = 2,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [341] = 2,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [353] = 2,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [365] = 2,
    ACTIONS(60), 1,
      anon_sym_LPAREN,
    ACTIONS(58), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [377] = 2,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [389] = 2,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [401] = 2,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [413] = 2,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      sym_variable,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_error,
  [425] = 2,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 3,
      sym_variable,
      anon_sym_LBRACK,
      sym_error,
  [434] = 2,
    ACTIONS(82), 1,
      aux_sym_builtinValue_token1,
    STATE(13), 1,
      sym_lamName,
  [441] = 2,
    ACTIONS(84), 1,
      aux_sym_builtinValue_token1,
    STATE(36), 1,
      sym_builtinValue,
  [448] = 1,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
  [452] = 1,
    ACTIONS(88), 1,
      aux_sym_builtinValue_token1,
  [456] = 1,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
  [460] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [464] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [468] = 1,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [472] = 1,
    ACTIONS(98), 1,
      anon_sym_RBRACK,
  [476] = 1,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
  [480] = 1,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
  [484] = 1,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
  [488] = 1,
    ACTIONS(106), 1,
      aux_sym_constr_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 182,
  [SMALL_STATE(11)] = 206,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 295,
  [SMALL_STATE(16)] = 307,
  [SMALL_STATE(17)] = 329,
  [SMALL_STATE(18)] = 341,
  [SMALL_STATE(19)] = 353,
  [SMALL_STATE(20)] = 365,
  [SMALL_STATE(21)] = 377,
  [SMALL_STATE(22)] = 389,
  [SMALL_STATE(23)] = 401,
  [SMALL_STATE(24)] = 413,
  [SMALL_STATE(25)] = 425,
  [SMALL_STATE(26)] = 434,
  [SMALL_STATE(27)] = 441,
  [SMALL_STATE(28)] = 448,
  [SMALL_STATE(29)] = 452,
  [SMALL_STATE(30)] = 456,
  [SMALL_STATE(31)] = 460,
  [SMALL_STATE(32)] = 464,
  [SMALL_STATE(33)] = 468,
  [SMALL_STATE(34)] = 472,
  [SMALL_STATE(35)] = 476,
  [SMALL_STATE(36)] = 480,
  [SMALL_STATE(37)] = 484,
  [SMALL_STATE(38)] = 488,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constr_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constr_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constr_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constr_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uplc, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uplc, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 4, 0, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 4, 0, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_force, 4, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_force, 4, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delay, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delay, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_con, 5, 0, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_con, 5, 0, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lam, 5, 0, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lam, 5, 0, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app, 4, 0, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app, 4, 0, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constr, 5, 0, 5),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constr, 5, 0, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 5, 0, 6),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 5, 0, 6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lamName, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lamName, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defaultUniTypes, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defaultFun, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtinValue, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_uplc(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

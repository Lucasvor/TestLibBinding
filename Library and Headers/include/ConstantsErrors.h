//
//  BRTSMAPI_CONSTANTES_ERROS.h
//  SafeMOBILEAPI
//
//  Created by Otávio Silva on 30/07/14.
//  Copyright (c) 2014 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>

static const int SUCCESS = 0;

/**********************************************************************************************/

static const int ERROR_SERVER_TOKEN_INACTIVE                    = 1000; // Status invalido. Token inativo ou desativado.
static const int ERROR_SERVER_TOKEN_BLOCKED                     = 1001; // Status invalido. Token bloqueado.
static const int ERROR_SERVER_TOKEN_BLOCKED_BY_PIN              = 1002; // Status invalido. Token bloqueado por excesso de erros de PIN (senha de acesso ao aplicativo SafeMOBILE)
static const int ERROR_SERVER_TOKEN_INITIAL_STATE               = 1003; // Status invalido. Token aguardando ativacao.
static const int ERROR_SERVER_TOKEN_MIGRATED                    = 1004; // Status invalido. Token migrado.
static const int ERROR_SERVER_TOKEN_ACTIVE                      = 1005; // Status invalido. Token ativo.
static const int ERROR_SERVER_TOKEN_ALREADY_ACTIVE              = 1006; // Status invalido. Token ja esta ativo.
static const int ERROR_SERVER_OLD_TOKEN                         = 1007; // Instalacao SafeMOBILE antiga.
static const int ERROR_SERVER_ACTIVATING_TOKEN                  = 1008; // Erro ao ativar.
static const int ERROR_SERVER_MIGRATING_TOKEN                   = 1009; // Erro ao migrar.
static const int ERROR_SERVER_SYNCHRONIZING_TOKEN               = 1010; // Erro ao sincronizar.
static const int ERROR_SERVER_BLOCKING_TOKEN                    = 1011; // Erro ao bloquear.
static const int ERROR_SERVER_UNLOCKING_TOKEN                   = 1012; // Erro ao desbloquear.
static const int ERROR_SERVER_DISABLING_TOKEN                   = 1013; // Erro ao desativar.
static const int ERROR_SERVER_READING_TOKEN_INFO                = 1014; // Blob inconsistente ou invalido. A Chave do Cliente pode estar incorreta.
static const int ERROR_SERVER_ASSEMBLE_COMMUNICATION_PACKAGE    = 1015; // Erro ao montar pacote de comunicacao.
static const int ERROR_SERVER_DISASSEMBLE_COMMUNICATION_PACKAGE = 1016; // Erro ao desmontar pacote de comunicacao.
static const int ERROR_SERVER_INVALID_CLIENT_KEY                = 1017; // Chave do cliente invalida.
static const int ERROR_SERVER_SETTING_STATUS_BO                 = 1018; // Erro ao atualizar o status do token.
static const int ERROR_SERVER_ASSEMBLE_MANAGEMENT               = 1019; // Erro ao montar A informacao de resposta. A informação enviada pelo SafeMOBILE pode estar expirada ou inválida.

static const int ERROR_DEFAULT_KEY = 1046;

/**********************************************************************************************/

static const int ERROR_SERVER_DEFAULT                           = 1100; // Ocorreu um erro no servidor.
static const int ERROR_SERVER_INVALID_PARAM                     = 1101; // Parametro(s) invalido(s).
static const int ERROR_SERVER_INVALID_PARAM_ACTIV_CRED          = 1102; // Credenciais de ativacao incorretas ou invalidas.
static const int ERROR_SERVER_INVALID_PARAM_SERIAL_NUMBER       = 1103; // Parametro Número de serie invalido.
static const int ERROR_SERVER_OTP_AUTHENTICATION                = 1104; // Erro de autenticacao.
static const int ERROR_SERVER_INVALID_TOKEN                     = 1105; // Token invalido.
static const int ERROR_SERVER_INVALID_USER                      = 1106; // Usuario invalido.
static const int ERROR_SERVER_TOKEN_UNAVAILABLE                 = 1107; // Token indisponivel.
static const int ERROR_SERVER_INVALID_DNA                       = 1108; // Parametro DNA invalido.
static const int ERROR_SERVER_INCORRECT_UNBLOCK_PASSWORD        = 1109;

/**********************************************************************************************/

static const int ERROR_EXTRACTING_DATA                              = 1200;
static const int ERROR_ASSEMBLE_COMMUNICATION_PACKAGE               = 1201;
static const int ERROR_ENCRYPTING_DATA                              = 1202;
static const int ERROR_DECRYPTING_DATA                              = 1203;
static const int ERROR_SECURITY_FAILING_GENERATE_RANDOM             = 1204;
static const int ERROR_SECURITY_FAILING_GENERATE_COMMUNICATION_KEY  = 1205;
static const int ERROR_NOT_AT_GEN_RANDOM                            = 1206; // ???
static const int ERROR_SECURITY_FAILING_GENERATE_VERIFYING_DIGIT    = 1207;

/**********************************************************************************************/

static const int ERROR_OPERATION_FAILED                                     = 1300;
static const int ERROR_FUNCTION_NOT_IMPLEMENTED                             = 1301;

static const int ERROR_BLOB                                                 = 1310;
static const int ERROR_STATUS_TOKEN_INACTIVE                                = 1311;
static const int ERROR_STATUS_TOKEN_BLOCKED                                 = 1312;
static const int ERROR_STATUS_INVALID                                       = 1313;
static const int ERROR_OUTPUT_PARAM_NOT_INITIALIZED                         = 1314;
static const int ERROR_INVALID_SECURITY                                     = 1315;
static const int ERROR_SECURITY_EXCEPTION                                   = 1316;
static const int ERROR_BLOB_FAILING_TO_CREATE                               = 1317;

static const int ERROR_QRCODE_INVALID_INFO                                  = 1318;
static const int ERROR_QRCODE_INVALID_PATTERN                               = 1319;

static const int ERROR_INFO_FUNCTIONALITY_NOT_AVAILABLE                     = 1320;
static const int ERROR_INFO_INVALID_MANAGEMENT                              = 1321;
static const int ERROR_INFO_INVALID_MANAGEMENT_INCORRECT_SERIAL_NUMBER      = 1322;
static const int ERROR_INFO_INVALID_MANAGEMENT_INCORRECT_FICHAMOB           = 1323;
static const int ERROR_INFO_INVALID_MANAGEMENT_INCORRECT_FICHACOM           = 1324;
static const int ERROR_INFO_INVALID_MANAGEMENT_INCONSISTENT_ACTION          = 1325;
static const int ERROR_INFO_INVALID_MANAGEMENT_EXCEPTION                    = 1326;
static const int ERROR_INFO_READ_FUNCTION                                   = 1327;

/**********************************************************************************************/

static const int ERROR_INITIALIZING_LIB                         = 1400;
static const int ERROR_SAVING_TOKEN_DATA                        = 1401;
static const int ERROR_INVALID_DATA                             = 1402;
static const int ERROR_READING_INFO                             = 1403;
static const int ERROR_INVALID_TOKEN_STATUS                     = 1404; // error status invalid
static const int ERROR_STATUS_UNKOWN                            = 1405;
static const int ERROR_LOADING_DATA                             = 1406;
static const int ERROR_INVALID_SECURITY_CREDENTIALS             = 1407;
static const int ERROR_ACTIVATION                               = 1408;
static const int ERROR_GENERATING_OTP                           = 1409;
static const int ERROR_FAIL_GETTING_DNA                         = 1410;
static const int ERROR_INVALID_RESPONSE_INVALID_SIZE            = 1411;
static const int ERROR_INVALID_RESPONSE_INVALID_MOBILE_ID       = 1412;
static const int ERROR_INVALID_RESPONSE_INVALID_SERVER_ID       = 1413;
static const int ERROR_SYNCHRONIZING_TOKEN                      = 1415;
static const int ERROR_SYNCHRONIZING_TOKEN_BY_TIME              = 1416;
static const int ERROR_INVALID_RESPONSE_INVALID_STATUS          = 1417;
static const int ERROR_BLOCKING_TOKEN                           = 1418;
static const int ERROR_UNLOCKING_TOKEN                          = 1419;
static const int ERROR_MIGRATING_TOKEN                          = 1420;
static const int ERROR_DISASSEMBLE_COMMUNICATION_PACKAGE        = 1421;
static const int ERROR_INVALID_RESPONSE_INVALID_PACKAGE         = 1423;
static const int ERROR_ACTIVATION_EXCEPTION                     = 1424;
static const int ERROR_DISASSEMBLE_MESSAGE_PACKAGE_BO           = 1425;
static const int ERROR_DISASSEMBLE_PACKAGE_BO                   = 1426;
static const int ERROR_DISASSEMBLE_DEVELOPMENT_PACKAGE          = 1427;
static const int ERROR_DISASSEMBLE_MANAGEMENT_PACKAGE           = 1428;
static const int ERROR_DISASSEMBLE_PACKAGE_UNKNOWN              = 1429;
static const int ERROR_DISASSEMBLE_PACKAGE_UNKNOWN_HEADER       = 1430;
static const int ERROR_ACTIVATION_RECEIVE_MANAGEMENT            = 1431;
static const int ERROR_IN_PIN_REGISTER                          = 1432;
static const int ERROR_IN_PIN_VALIDATE                          = 1433;
static const int ERROR_PIN_INVALID                              = 1434;
static const int ERROR_PIN_INVALID_SIZE                         = 1435;
static const int ERROR_PIN_INCORRECT                            = 1436;
static const int ERROR_PIN_MAXIMUM_NUMBER_ERROR_EXCEEDED        = 1437;
static const int ERROR_PIN_LIMIT_ERROR_PIN_IS_NEXT              = 1438;
static const int ERROR_PIN_THIS_TOKEN_HAS_NO_OPTION_OF_PIN      = 1439;
static const int ERROR_INVALID_LABEL                            = 1440;
static const int ERROR_IN_SET_LABEL                             = 1441;
static const int ERROR_PIN_INVALID_CHARACTER                    = 1442;
static const int ERROR_PIN_NOT_REGISTERED                       = 1443;
static const int ERROR_TOKEN_WAS_BLOCKED_BY_SERVER              = 1444;
static const int ERROR_TOKEN_WAS_DISABLED_BY_SERVER             = 1445;
static const int ERROR_INVALID_PARAM                            = 1446;
static const int ERROR_PUK_INCORRECT                            = 1447;
static const int ERROR_IN_PUK_VALIDATE                          = 1448; // Exception when trying to validate PUK
static const int ERROR_PUK_INVALID                              = 1449; // NULL or with length 0
static const int ERROR_LIB_NOT_INITIALIZED                      = 1450;
static const int ERROR_ASSEMBLING_PACKAGE                       = 1451;
static const int ERROR_INVALID_URL                              = 1452;
static const int ERROR_INVALID_CUSTOM_DATA                      = 1453;

/**********************************************************************************************/

static const int ERROR_INVALID_BLOB                         = 1700;
static const int ERROR_GENERATE_BLOB                        = 1701;
static const int ERROR_GENERATE_ACTIVATION_STEP1_PACKAGE    = 1702;
static const int ERROR_GENERATE_ACTIVATION_STEP2_PACKAGE    = 1703;
static const int ERROR_GENERATE_SYNC_PACKAGE                = 1704;
static const int ERROR_GENERATE_MIGRATION_PACKAGE           = 1705;
static const int ERROR_TOKEN_INACTIVE                       = 1706;
static const int ERROR_GENERATE_BLOCKING_PACKAGE            = 1707;
static const int ERROR_GENERATE_UNLOCK_PACKAGE              = 1708;

/**********************************************************************************************/

static const int ERROR_QRCODE_INVALID_SIZE = 1710;
static const int ERROR_INVALID_QRCODE_COMMAND = 1711;
static const int ERROR_QRCODE_CIPHER_TRANSACTION_DATA = 1712;
static const int ERROR_DISASSEMBLE_TRANSACTION_DATA = 1713;
static const int ERROR_QRCODE_GENERATE_QRCODE_INFO = 1714;
static const int ERROR_QRCODE_DISASSEMBLE_MESSAGE_PACKAGE_BO = 1716;
static const int ERROR_QRCODE_INVALID_OUTPUT_PARAMS = 1719;
static const int ERROR_PUSH_ID_INVALID = 1720;
static const int ERROR_GENERATE_PUSH_SIGN_VALIDATION_PACKAGE = 1721;
static const int ERROR_GENERATE_GENERIC_PACKAGE = 1722;
static const int ERROR_DISASSEMBLING_GENERIC_PACKAGE = 1723;

/**********************************************************************************************/

static const int ERROR_PUSH_INVALID_SIZE = 1810;
static const int ERROR_INVALID_PUSH_COMMAND = 1811;
static const int ERROR_PUSH_CIPHER_TRANSACTION_DATA = 1812;
static const int ERROR_PUSH_DISASSEMBLE_TRANSACTION_DATA = 1813;
static const int ERROR_PUSH_GENERATE_PUSH_INFO = 1814;
static const int ERROR_PUSH_DISASSEMBLE_MESSAGE_PACKAGE_BO = 1816;
static const int ERROR_PUSH_INVALID_OUTPUT_PARAMS = 1819;

/**********************************************************************************************/

/***********************************
 * ERROS DE BLOB DETALHADOS
 ***********************************/

// STARTERS
static const int ERROR_SERIALIZAR_EXCEPTION                     = 2000;
static const int ERROR_BLOB_TSMAPI_SECURITY_EXCEPTION           = 2001;

// NULL-CHECK ERRORS
static const int ERROR_BLOB_NULL_OTP                            = 2002;
static const int ERROR_BLOB_STRING_NULL_OTP                     = 2003;
static const int ERROR_BLOB_STRING_EMPTY_OTP                    = 2004;

static const int ERROR_BLOB_NULL_SIGNATURE                      = 2005;
static const int ERROR_BLOB_STRING_NULL_SIGNATURE               = 2006;
static const int ERROR_BLOB_STRING_EMPTY_SIGNATURE              = 2007;

static const int ERROR_BLOB_NULL_CHALLENGE                      = 2008;
static const int ERROR_BLOB_STRING_NULL_CHALLENGE               = 2009;
static const int ERROR_BLOB_STRING_EMPTY_CHALLENGE              = 2010;

static const int ERROR_BLOB_NULL_SIGNATURE_QRCODE               = 2011;
static const int ERROR_BLOB_STRING_NULL_SIGNATURE_QRCODE        = 2012;
static const int ERROR_BLOB_STRING_EMPTY_SIGNATURE_QRCODE       = 2013;

static const int ERROR_BLOB_NULL_CHALLENGE_QRCODE               = 2014;
static const int ERROR_BLOB_STRING_NULL_CHALLENGE_QRCODE        = 2015;
static const int ERROR_BLOB_STRING_EMPTY_CHALLENGE_QRCODE       = 2016;

static const int ERROR_BLOB_NULL_GET_DADOS_QRCODE               = 2017;
static const int ERROR_BLOB_STRING_NULL_GET_DADOS_QRCODE        = 2018;
static const int ERROR_BLOB_STRING_EMPTY_GET_DADOS_QRCODE       = 2019;

static const int ERROR_BLOB_NULL_SYNC                           = 2020;
static const int ERROR_BLOB_STRING_NULL_SYNC                    = 2021;
static const int ERROR_BLOB_STRING_EMPTY_SYNC                   = 2022;

static const int ERROR_BLOB_NULL_PKG_SYNC                       = 2023;
static const int ERROR_BLOB_STRING_NULL_PKG_SYNC                = 2024;
static const int ERROR_BLOB_STRING_EMPTY_PKG_SYNC               = 2025;

static const int ERROR_BLOB_NULL_PKG_SYNC_TIME                  = 2026;
static const int ERROR_BLOB_STRING_NULL_PKG_SYNC_TIME           = 2027;
static const int ERROR_BLOB_STRING_EMPTY_PKG_SYNC_TIME          = 2028;

static const int ERROR_BLOB_NULL_PIN_VALIDATE                    = 2029;
static const int ERROR_BLOB_STRING_NULL_PIN_VALIDATE            = 2030;
static const int ERROR_BLOB_STRING_EMPTY_PIN_VALIDATE            = 2031;

static const int ERROR_BLOB_NULL_STEP_1                         = 2032;
static const int ERROR_BLOB_STRING_NULL_STEP_1                  = 2033;
static const int ERROR_BLOB_STRING_EMPTY_STEP_1                 = 2034;

static const int ERROR_BLOB_NULL_STEP_2                         = 2035;
static const int ERROR_BLOB_STRING_NULL_STEP_2                  = 2036;
static const int ERROR_BLOB_STRING_EMPTY_STEP_2                 = 2037;

static const int ERROR_BLOB_NULL_SET_TOKEN_URL                  = 2038;
static const int ERROR_BLOB_STRING_NULL_SET_TOKEN_URL           = 2039;
static const int ERROR_BLOB_STRING_EMPTY_SET_TOKEN_URL          = 2040;

static const int ERROR_BLOB_NULL_SET_LABEL                      = 2041;
static const int ERROR_BLOB_STRING_NULL_SET_LABEL               = 2042;
static const int ERROR_BLOB_STRING_EMPTY_SET_LABEL              = 2043;

static const int ERROR_BLOB_NULL_DISABLE_PIN                    = 2044;
static const int ERROR_BLOB_STRING_NULL_DISABLE_PIN             = 2045;
static const int ERROR_BLOB_STRING_EMPTY_DISABLE_PIN            = 2046;

static const int ERROR_BLOB_NULL_PIN_REGISTER                   = 2047;
static const int ERROR_BLOB_STRING_NULL_PIN_REGISTER            = 2048;
static const int ERROR_BLOB_STRING_EMPTY_PIN_REGISTER           = 2049;

static const int ERROR_BLOB_NULL_LIFE_TIME                      = 2050;
static const int ERROR_BLOB_STRING_NULL_LIFE_TIME               = 2051;
static const int ERROR_BLOB_STRING_EMPTY_LIFE_TIME              = 2052;

static const int ERROR_BLOB_NULL_SET_APP_INFO                   = 2053;
static const int ERROR_BLOB_STRING_NULL_SET_APP_INFO            = 2054;
static const int ERROR_BLOB_STRING_EMPTY_SET_APP_INFO           = 2055;
static const int ERROR_APP_INFO_INVALIDO                        = 2056;

static const int ERROR_BLOB_NULL_PUSH_VALIDATE                  = 2057;
static const int ERROR_BLOB_STRING_NULL_PUSH_VALIDATE           = 2058;
static const int ERROR_BLOB_STRING_EMPTY_PUSH_VALIDATE          = 2059;

static const int ERROR_BLOB_NULL_PUSH_REGISTER                  = 2060;
static const int ERROR_BLOB_STRING_NULL_PUSH_REGISTER           = 2061;
static const int ERROR_BLOB_STRING_EMPTY_PUSH_REGISTER          = 2062;

static const int ERROR_BLOB_NULL_GET_PUSH_DATA                  = 2063;
static const int ERROR_BLOB_STRING_NULL_GET_PUSH_DATA           = 2064;
static const int ERROR_BLOB_STRING_EMPTY_GET_PUSH_DATA          = 2065;

static const int ERROR_BLOB_NULL_GEN_PKG_UNBLOCK                = 2066;
static const int ERROR_BLOB_STRING_NULL_GEN_PKG_UNBLOCK         = 2067;
static const int ERROR_BLOB_STRING_EMPTY_GEN_PKG_UNBLOCK        = 2068;

static const int ERROR_BLOB_NULL_GEN_PKG_BLOCK_PIN              = 2069;
static const int ERROR_BLOB_STRING_NULL_GEN_PKG_BLOCK_PIN       = 2070;
static const int ERROR_BLOB_STRING_EMPTY_GEN_PKG_BLOCK_PIN      = 2071;

static const int ERROR_BLOB_NULL_GEN_PKG_MIGRATE                = 2072;
static const int ERROR_BLOB_STRING_NULL_GEN_PKG_MIGRATE         = 2073;
static const int ERROR_BLOB_STRING_EMPTY_GEN_PKG_MIGRATE        = 2074;

static const int ERROR_BLOB_NULL_SET_HIGH_LEVEL                 = 2075;
static const int ERROR_BLOB_STRING_NULL_SET_HIGH_LEVEL          = 2076;
static const int ERROR_BLOB_STRING_EMPTY_SET_HIGH_LEVEL         = 2077;

static const int ERROR_BLOB_NULL_SET_PUSHID                     = 2078;
static const int ERROR_BLOB_STRING_NULL_SET_PUSHID              = 2079;
static const int ERROR_BLOB_STRING_EMPTY_SET_PUSHID             = 2080;

static const int ERROR_BLOB_NULL_GEN_INFO_COM                   = 2081;
static const int ERROR_BLOB_STRING_NULL_GEN_INFO_COM            = 2082;
static const int ERROR_BLOB_STRING_EMPTY_GEN_INFO_COM           = 2083;

static const int ERROR_BLOB_NULL_GET_INFO                       = 2084;
static const int ERROR_BLOB_STRING_NULL_GET_INFO                = 2085;
static const int ERROR_BLOB_STRING_EMPTY_GET_INFO               = 2086;

static const int ERROR_BLOB_NULL_SET_PIN                        = 2087;
static const int ERROR_BLOB_STRING_NULL_SET_PIN                 = 2088;
static const int ERROR_BLOB_STRING_EMPTY_SET_PIN                = 2089;

static const int ERROR_BLOB_NULL_CHECK_PIN                      = 2090;
static const int ERROR_BLOB_STRING_NULL_CHECK_PIN               = 2091;
static const int ERROR_BLOB_STRING_EMPTY_CHECK_PIN              = 2092;

static const int ERROR_BLOB_NOT_NULL_GEN_NEW_BLOB               = 2093;

static const int ERROR_BLOB_NULL_RECEIVE_GER                    = 2094;
static const int ERROR_BLOB_STRING_NULL_RECEIVE_GER             = 2095;
static const int ERROR_BLOB_STRING_EMPTY_RECEIVE_GER            = 2096;

static const int ERROR_BLOB_NULL_SIMPLE_CHALLENGE               = 2097;
static const int ERROR_BLOB_STRING_NULL_SIMPLE_CHALLENGE        = 2098;
static const int ERROR_BLOB_STRING_EMPTY_SIMPLE_CHALLENGE       = 2099;

static const int ERROR_BLOB_NULL_MIGRATE                        = 2100;
static const int ERROR_BLOB_STRING_NULL_MIGRATE                 = 2101;
static const int ERROR_BLOB_STRING_EMPTY_MIGRATE                = 2102;

static const int ERROR_BLOB_NULL_BLOCK_PIN                      = 2103;
static const int ERROR_BLOB_STRING_NULL_BLOCK_PIN               = 2104;
static const int ERROR_BLOB_STRING_EMPTY_BLOCK_PIN              = 2105;

static const int ERROR_BLOB_NULL_UNBLOCK_PIN                    = 2106;
static const int ERROR_BLOB_STRING_NULL_UNBLOCK_PIN             = 2107;
static const int ERROR_BLOB_STRING_EMPTY_UNBLOCK_PIN            = 2108;

static const int ERROR_PUSH_INFO_NULL_OR_EMPTY                  = 2109;
static const int ERROR_TRANSACTION_ID_NULL                      = 2110;
static const int ERROR_PUSH_COMMAND_TYPE_NULL                   = 2111;

static const int ERROR_BLOB_NULL_DISABLE_BLOB                   = 2112;
static const int ERROR_BLOB_STRING_NULL_DISABLE_BLOB            = 2113;
static const int ERROR_BLOB_EMPTY_DISABLE_BLOB                  = 2114;

static const int ERROR_BLOB_NOT_NULL_CREATE_BLOB                = 2115;

static const int ERROR_PACKET_EMPTY                             = 2116;
static const int ERROR_PACKET_NULL                              = 2117;

static const int ERROR_CRED_ACTIVATION_NULL                     = 2118;
static const int ERROR_CRED_ACTIVATION_EMPTY                    = 2119;

static const int ERROR_QRCODE_NULL                              = 2120;
static const int ERROR_QRCODE_EMPTY                             = 2121;

static const int ERROR_PIN_NULL                                 = 2122;

/// desearializar
static const int ERROR_DESERIALIZE_ENCODED_NULL_CHECK           = 2123;
static const int ERROR_DESERIALIZE_EST_QT_DATA                  = 2124;
static const int ERROR_DESERIALIZE_EST_QT_DATA_2                = 2125;
static const int ERROR_DESERIALIZE_EST_QT_DATA_3                = 2126;

static const int ERROR_DESERIALIZE_EST_TKN_SEED_HEXA            = 2127;
static const int ERROR_DESERIALIZE_EST_TKN_SEED_HEXA_2          = 2128;

static const int ERROR_DESERIALIZE_EXCEPTION                    = 2129;
static const int ERROR_DESERIALIZE_EOF                          = 2130;

/// BlobV1
static const int ERROR_BLOB_TSMAPI_BN_BLOBV1_EOL                = 2131;
static const int ERROR_BLOB_TSMAPI_BN_BLOBV1_DESERIALIZE_1      = 2132;
static const int ERROR_BLOB_TSMAPI_BN_BLOBV1_EXCEPTION          = 2133;

static const int ERROR_BLOB_NULL_CHECK_PUK                      = 2134;
static const int ERROR_BLOB_STRING_NULL_CHECK_PUK               = 2135;
static const int ERROR_BLOB_STRING_EMPTY_CHECK_PUK              = 2136;

static const int ERROR_BLOB_NULL_SET_CUSTOM                     = 2137;
static const int ERROR_BLOB_STRING_NULL_SET_CUSTOM              = 2138;
static const int ERROR_BLOB_STRING_EMPTY_SET_CUSTOM             = 2139;

static const int ERROR_BLOB_NULL_DISABLE_APP_PIN                = 2140;
static const int ERROR_BLOB_STRING_NULL_DISABLE_APP_PIN         = 2141;
static const int ERROR_BLOB_STRING_EMPTY_DISABLE_APP_PIN        = 2142;

static const int ERROR_PUSH_ID_EMPTY                            = 2149;
static const int ERROR_PUSH_ID_NULL                             = 2150;

static const int ERROR_SECURITY_NULL                            = 2151;

static const int ERROR_BLOB_NULL_PKG_ACTIVATE                  = 2152;
static const int ERROR_BLOB_STRING_NULL_PKG_ACTIVATE           = 2153;
static const int ERROR_BLOB_STRING_EMPTY_PKG_ACTIVATE          = 2154;


static const int ERROR_CONN_INVALID_URL                         = 2301;
static const int ERROR_CONN_OPENING_CONNECTION                  = 2302;
static const int ERROR_CONN_PROTOCOL_NOT_SUPPORTED              = 2303;
static const int ERROR_CONN_CONNECTION_FAILED                   = 2304;
static const int ERROR_CONN_FAILED_GET_RESPONSE_CODE            = 2305;
static const int ERROR_CONN_CONNECTION_WITH_ERROR               = 2306;
static const int ERROR_CONN_RECEIVE_DATA                        = 2307;
static const int ERROR_CONN_RECEIVE_DATA_2                      = 2308;
static const int ERROR_CONN_SECURITY_EXCEPTION                  = 2309;
static const int ERROR_CONN_TIMEOUT                             = 2310;
static const int ERROR_CONN_INTERNET_UNAVAILABLE                = 2314;
static const int ERROR_CONN_HOST_NOT_FOUND                      = 2315;

static const int ERROR_UNKNOWN                                  = 2800;

@protocol ConstantsErrors <NSObject>
@end

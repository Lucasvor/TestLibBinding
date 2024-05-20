//
//  BRTSafeMOBILEAPI_CONSTANTES.h
//  SafeMOBILEAPI
//
//  Created by Otávio Silva on 30/07/14.
//  Copyright (c) 2014 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>

/***************************************************************************************************
 * STATUS DO TOKEN
 ***************************************************************************************************/
/* Token nao ativado. */
static const int STATUS_INACTIVE = 0;
/* Token ativado.Pin Cadastrado. Token habilitado para funcionar normalmente. */
static const int STATUS_ACTIVE = 2;
/* Token ativado.Porem necessita cadastrar um PIN */
static const int STATUS_PIN = 1;
/* Token bloqueado por erros de PIN. */
static const int STATUS_BLOCKED = 3;
/* Token bloqueado por erros de PIN. */
static const int STATUS_BLOCKED_AUTOMATICALLY = 4;
/* Token migrado. */
static const int STATUS_MIGRATED = 5;
/* Token bloqueado por erros de PIN. */
static const int STATUS_BLOCKING = 6;


/*************************************************
 * PIN
 ************************************************/
static const int PIN_MODE_OPTIONAL = 0;
static const int PIN_MODE_WITH_PIN = 1;
static const int PIN_MODE_WITHOUT_PIN = 2;

static const int PIN_TYPE_ANY = 0;
static const int PIN_TYPE_NUMERIC = 1;
static const int PIN_TYPE_ALPHANUMERIC = 2;

static const int PIN_QUALITY_NORMAL = 0;
static const int PIN_QUALITY_MEDIUM = 1;
static const int PIN_QUALITY_STRONG = 2;

static const int PIN_NOT_DEFINED = 0;
static const int PIN_DEFINED_AND_ENABLED = 1;
static const int PIN_DISABLED = 2;


static NSString* const COMMAND_OTP  = @"1";
static NSString* const COMMAND_SIGN  = @"2";
static NSString* const COMMAND_CHALLENGE_RESPONSE  = @"3";
static NSString* const COMMAND_AUTHORIZATION  = @"4";


@protocol Constants <NSObject>
@end


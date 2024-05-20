//
//  DatablinkMobile200EmbeddedApi.h
//  SafeMOBILEAPI
//
//  Created by Otávio Silva on 03/02/15.
//  Copyright (c) 2015 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Blob.h"
#import "LifeTime.h"
#import "Info.h"
#import "AppBlob.h"
#import "AppInfo.h"
#import "ConstantsErrors.h"
#import "Constants.h"

@interface EmbeddedSdk : NSObject

 - (NSString*) getVersion;

 - (int) init:(NSData*) customSecurityKey;

- (int) init:(NSData*) customSecurityKey customIdentifier:(NSString*) customIdentifier;

 - (int) getInfo:(Blob*) blob info:(Info*) info;

 - (int) getLifeTimeOtp:(Blob*) blob lifeTime:(LifeTime*) lifeTime;

 - (int) getLifeTimeSignature:(Blob*) blob lifeTime:(LifeTime*) lifeTime;

 - (int) getLifeTimeChallengeResponse:(Blob*) blob lifeTime:(LifeTime*) lifeTime;

 - (int) generateNewBlob:(Blob*) blob;

 - (int) generatePacketActivateStep1:(Blob*) blob parameters:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) generatePacketActivateStep2:(Blob*) blob responseStep1:(NSString*) responseStep1 parameters:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) activate:(Blob*) blob responseStep2:(NSString*) responseStep2;

 - (int) generatePacketSyncAndUpdate:(Blob*) blob parameters:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) generatePacketSyncTime:(Blob*) blob parameters:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) syncAndUpdate:(Blob*) blob responseSyncAndUpdate:(NSString*) responseSyncAndUpdate;

 - (int) syncTime:(Blob*) blob responseSyncTime:(NSString*) responseSyncTime;

 - (int) generatePacketMigrate:(Blob*) blob parameters:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) migrate:(Blob*) blob responseMigrate:(NSString*) responseMigrate;

 - (int) generateOtp:(Blob*) blob otp:(NSMutableString*) otp;

 - (int) setAccessPasswordPin:(Blob*) blob accessPasswordPin:(NSString*) accessPasswordPin;

 - (int) checkAccessPasswordPin:(Blob*) blob accessPasswordPin:(NSString*) accessPasswordPin;

 - (int) setLabel:(Blob*) blob label:(NSString*) label;

 - (int) generatePacketBlock:(Blob*) blob parameters:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) block:(Blob*) blob reponseBlock:(NSString*) reponseBlock;

 - (int) unblock:(Blob*) blob  responseUnblock:(NSString*) responseUnblock;

 - (int) generatePacketUnblock:(Blob*) blob parameters:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) parseQrCodeData:(Blob*) blob qrCodeInfo:(NSString*) qrCodeInfo qrCodeCommandType:(NSMutableString*) qrCodeCommandType dataList:(NSMutableArray<NSString*>*) dataList;

 - (int) generateSignatureByQrCode:(Blob*) blob qrCodeInfo:(NSString*) qrCodeInfo signature:(NSMutableString*) signature;

 - (int) generateChallengeResponse:(Blob*) ioBlob challenge:(NSString*) challenge response:(NSMutableString*) response;

 - (int) generateChallengeResponseByQrCode:(Blob*) blob qrCodeInfo:(NSString*) qrCodeInfo response:(NSMutableString*) response;

 - (int) parsePushData:(Blob*) blob pushComand:(NSString*) pushComand pushCommandType:(NSMutableString*) pushCommandType transactionId:(NSMutableString*) transactionId dataList:(NSMutableArray<NSString*>*) dataList;

 - (int) generatePacketPushValidate:(Blob*) blob operationRefused:(BOOL) operationRefused pushInfo:(NSString*) pushInfo pushCommandType:(NSMutableString*) pushCommandType packet:(NSMutableString*) packet;

 - (int) generatePacketPushRegister:(Blob*) blob pushId:(NSString*) pushId platform:(NSString*) platform language:(NSString*) language packet:(NSMutableString*) packet;

 - (int) disableAccessPasswordPin:(Blob*) blob;

 - (int) parseResultPacketPushValidate:(NSString*) responsePushValidate dataList:(NSMutableArray<NSString*>*) dataList;

 - (int) parseResultPacketPushRegister:(NSString*) responsePushRegister dataList:(NSMutableArray<NSString*>*) dataList;

 - (int) getActivationCredentialsQrCode:(NSString*) qrCode activationCredentials:(NSMutableArray<NSString*>*) activationCredentials;

 - (int) extractAdditionalDataCommunication:(NSString*) responseDataCommunication dataList:(NSMutableArray<NSString*>*) dataList;

 - (int) generateNewAppBlob:(AppBlob*) blob __deprecated;

 - (int) checkAccessPasswordPinApp:(AppBlob*) blob accessPasswordPin:(NSString*) accessPasswordPin __deprecated;

 - (int) setAccessPasswordPinApp:(AppBlob*) blob accessPasswordPin:(NSString*) accessPasswordPin __deprecated;

 - (int) getInfoApp:(AppBlob*) blob info:(AppInfo*) info __deprecated;

 - (int) generatePacketGenericRequest:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) parseGenericResponse:(NSString*) responseGenericRequest parameters:(NSMutableArray<NSString*>*) params;

 - (int) generateActivationCredentialsQrCode:(NSArray*) activationCredentials qrCode:(NSMutableString*) qrCode;

 - (int) setActivationUrl:(Blob*) blob activationUrl:(NSString*) activationUrl;

 - (int) setPushId:(Blob*) blob pushId:(NSString*) pushId;

 - (int) generatePacketSyncConfig:(NSMutableArray<NSString*>*) params packet:(NSMutableString*) packet;

 - (int) parseSyncConfigResponse:(NSString*) responseSyncResponseRequest dataListConfig:(NSMutableArray<NSString*>*) dataListConfig;

 - (int) genZta:(Blob*) blob ese:(NSString*) ese authorizationData:(NSString*) authorizationData packet:(NSMutableString*) packet;
 
 - (int) generateSignature:(Blob*) iBlob iDataList:(NSMutableArray<NSString*>*) iDataList oSignature:(NSMutableString*) oSignature;

@end

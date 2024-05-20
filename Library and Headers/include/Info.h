//
//  DatablinkMobile200EmbeddedApi_INFO.h
//  SafeMOBILEAPI
//
//  Created by Otávio Silva on 03/02/15.
//  Copyright (c) 2015 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Info : NSObject

- (int) getStatus;
- (NSString*) getConfigVersion;
- (NSString*) getInstallationId;
- (int) getDeviationTime;
- (NSString*) getSerialNumber;
- (int) getPinSize;
- (int) getPinErrors;
- (int) getMaxPinErrors;
- (int) getOtpSize;
- (int) getOtpTimestep;
- (int) getSignatureTimestep;
- (int) getSignatureSize;
- (int) getResponseTimestep;
- (int) getResponseSize;
- (NSString*) getLabel;
- (int) getPinContentType;
- (int) getPinMode;
- (int) getPinValidationType;
- (int) getPinDefined;
- (NSString*) getActivationUrl;
- (NSString*) getPushId;
- (void) setPinSize:(int) pinSize;
- (void) setPinMode:(int) pinMode;
- (void) setPinValidationType:(int) pinQuality;
- (void) setPinErrors:(int) pinTotalErrors;
- (void) setPinContentType:(int) pinType;
- (void) setMaxPinErrors:(int) maxSuccessivePinErrors;
- (void) setOtpSize:(int) otpSize;
- (void) setOtpTimestep:(int) timestepOtp;
- (void) setDeviationTime:(int) deviationTime;
- (void) setSignatureTimestep:(int) signatureTimestep;
- (void) setSignatureSize:(int) signatureSize;
- (void) setStatus:(int) status;
- (void) setConfigVersion:(NSString*) configVersion;
- (void) setSerialNumber:(NSString*) serialNumber;
- (void) setLabel:(NSString*) tokenLabel;
- (void) setPushId:(NSString*) pushId;
- (void) setActivationUrl:(NSString*) urlActivation;
- (void) setInstallationId:(NSString*) installationId;
- (void) setResponseTimestep:(int) responseTimestep;
- (void) setResponseSize:(int) responseSize;
- (void) setPinDefined:(int) definedPin;

@end

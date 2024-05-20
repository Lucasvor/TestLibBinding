//
//  DatablinkMobile200EmbeddedApi_Exception.h
//  SafeMOBILEAPI
//
//  Created by Otávio Silva on 03/02/15.
//  Copyright (c) 2015 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EmbeddedSdkException : NSException

- (id) initWithType:(int)type code:(int) code message:(NSString*) msg;
- (int) getErrorType;
- (int) getErrorCode;
- (NSString*) getErrorMessage;

@end

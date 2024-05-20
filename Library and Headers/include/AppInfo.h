//
//  DatablinkMobile200EmbeddedApi_AppInfo.h
//  DatablinkMobile200EmbeddedApi
//
//  Created by Otávio Silva on 19/03/15.
//  Copyright (c) 2015 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>
__deprecated
@interface AppInfo : NSObject

- (int) getPinErrors;
- (void) setPinErrors:(int) pinErrors;
- (int) getDefinedPin;
- (void) setPinDefined:(int) definedPin;

@end

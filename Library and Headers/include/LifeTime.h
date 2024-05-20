//
//  DatablinkMobile200EmbeddedApi_LifeTime.h
//  SafeMOBILEAPI
//
//  Created by Otávio Silva on 03/02/15.
//  Copyright (c) 2015 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LifeTime : NSObject

- (id) initWithPercentage:(float) percentage;
- (float) getPercentage;
- (void) setPercentage:(float) percentage;

@end

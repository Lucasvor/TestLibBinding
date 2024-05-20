//
//  DatablinkMobile200EmbeddedApi_BlobApp.h
//  DatablinkMobile200EmbeddedApi
//
//  Created by Otávio Silva on 25/02/15.
//  Copyright (c) 2015 Datablink. All rights reserved.
//

#import <Foundation/Foundation.h>
__deprecated
@interface AppBlob : NSObject

- (id) initWithBlob:(NSString*) blob;
- (void) setBlob:(NSString*) blob;
- (NSString*) getBlob;

@end

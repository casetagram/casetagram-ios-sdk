//
//  CTGLayoutContainer.h
//  CasetagramSDK
//
//  Created by Wang on 23/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CTGObject.h"

@interface CTGLayoutContainer : CTGObject

@property (nonatomic, assign) int containerID;
@property (nonatomic, assign) int top;
@property (nonatomic, assign) int left;
@property (nonatomic, assign) int width;
@property (nonatomic, assign) int height;

+ (CTGLayoutContainer *)newContainerWithDictionary:(NSDictionary *)containerDict;

@end

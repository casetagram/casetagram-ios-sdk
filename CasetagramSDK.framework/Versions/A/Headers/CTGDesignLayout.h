//
//  CTGDesignLayout.h
//  CasetagramSDK
//
//  Created by Wang on 23/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CTGObject.h"

@interface CTGDesignLayout : CTGObject

@property (nonatomic, strong) NSString *templateName;
@property (nonatomic, strong) NSString *layoutName;
@property (nonatomic, strong) NSString *baseImageURL;
@property (nonatomic, strong) NSString *maskImageURL;
@property (nonatomic, strong) NSString *overlayImageURL;
@property (nonatomic, assign) int width;
@property (nonatomic, assign) int height;
@property (nonatomic, strong) NSArray *containers;

+ (CTGDesignLayout *)newDesignLayoutWithDictionary:(NSDictionary *)layoutDict;

@end

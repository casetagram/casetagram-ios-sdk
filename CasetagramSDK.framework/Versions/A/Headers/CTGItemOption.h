//
//  CTGItemOption.h
//  CasetagramSDK
//
//  Created by Wang on 23/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CTGObject.h"

@interface CTGItemOption : CTGObject

@property (nonatomic, assign) int itemOptionID;
@property (nonatomic, strong) NSString *itemOptionName;
@property (nonatomic, strong) NSString *longDescription;
@property (nonatomic, strong) NSString *colorDescription;
@property (nonatomic, strong) NSNumber *price;
@property (nonatomic, strong) NSArray *designLayouts;

+ (CTGItemOption *)newItemOptionWithDictionary:(NSDictionary *)itemOptionDict;

@end

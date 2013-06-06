//
//  CTGCountry.h
//  CasetagramSDK
//
//  Created by Wang on 24/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CTGObject.h"

@interface CTGCountry : CTGObject

@property (nonatomic, assign) int countryID;
@property (nonatomic, strong) NSString *countryName;
@property (nonatomic, assign) BOOL requiresPostalCode;
@property (nonatomic, strong) NSArray *states;

+ (CTGCountry *)newCountryWithDictionary:(NSDictionary *)countryDict;

@end

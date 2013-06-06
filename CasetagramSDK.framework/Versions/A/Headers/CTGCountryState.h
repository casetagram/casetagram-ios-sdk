//
//  CTGCountryState.h
//  CasetagramSDK
//
//  Created by Wang on 3/6/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CTGObject.h"

@interface CTGCountryState : CTGObject

@property (nonatomic, strong) NSString *stateCode;
@property (nonatomic, strong) NSString *stateName;

+ (CTGCountryState *)newStateWithDictionary:(NSDictionary *)stateDict;

@end

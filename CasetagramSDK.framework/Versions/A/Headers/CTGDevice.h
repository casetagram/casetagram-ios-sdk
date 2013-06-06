//
//  CTGDevice.h
//  CasetagramSDK
//
//  Created by Wang on 23/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CTGObject.h"

@interface CTGDevice : CTGObject

@property (nonatomic, assign) int deviceID;
@property (nonatomic, strong) NSString *deviceName;
@property (nonatomic, strong) NSString *longDescription;
@property (nonatomic, strong) NSString *shortName;
@property (nonatomic, strong) NSString *appIconURL;
@property (nonatomic, strong) NSArray *itemOptions;

+ (CTGDevice *)newDeviceWithDictionary:(NSDictionary *)deviceDict;

@end

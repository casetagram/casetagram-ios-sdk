//
//  CTGObject.h
//  CasetagramSDK
//
//  Created by Wang on 24/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CTGObject : NSObject

- (NSString *)description;
- (NSString *)descriptionWithLocale:(id)locale indent:(NSUInteger)level;

@end

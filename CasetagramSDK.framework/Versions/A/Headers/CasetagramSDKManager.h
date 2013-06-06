//
//  CasetagramSDKManager.h
//  CasetagramSDK
//
//  Created by Wang on 22/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CasetagramSDKDelegate <NSObject>

- (void)casetagramSDKOrderCompleted;
- (void)casetagramSDKUserCancelled;

@end

#define CTGManager [CasetagramSDKManager defaultManager]

@interface CasetagramSDKManager : NSObject

@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *clientSecret;
@property (nonatomic, strong) NSString *redirectURI;

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *imagePath;
@property (nonatomic, strong) NSURL *imageURL;

@property (nonatomic, strong) NSString *caseName;

@property (nonatomic, assign) BOOL skipMoveAndScale;

@property (nonatomic, weak) id<CasetagramSDKDelegate> delegate;

+ (CasetagramSDKManager *)defaultManager;

- (UIViewController *)newCasetagramViewController;

@end

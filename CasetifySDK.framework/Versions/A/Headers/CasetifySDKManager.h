//
//  CasetifySDKManager.h
//  CasetifySDK
//
//  Created by Wang on 22/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CasetifySDKDelegate <NSObject>

- (void)casetifySDKOrderCompleted;
- (void)casetifySDKUserCancelled;

@end

#define CTFManager [CasetifySDKManager defaultManager]
#define CTGManager [CasetifySDKManager defaultManager]

@interface CasetifySDKManager : NSObject

@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *clientSecret;
@property (nonatomic, strong) NSString *redirectURI;

@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *imagePath;
@property (nonatomic, strong) NSURL *imageURL;

@property (nonatomic, strong) NSString *caseName;

@property (nonatomic, assign) BOOL skipMoveAndScale;

@property (nonatomic, weak) id<CasetifySDKDelegate> delegate;

+ (CasetifySDKManager *)defaultManager;

- (UIViewController *)newCasetifyViewController;
- (UIViewController *)newCasetagramViewController;

@end

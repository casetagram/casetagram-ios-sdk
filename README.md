Casetagram iOS SDK
==================

Casetagram is a social design service where you can create custom tech cases by using your Instagram, Facebook and directly uploaded photos. We turn your designs into high quality cases with our patent pending technology, then we print it and ship it to you. 

The Casetagram iOS SDK is a static framework that can be integrated into your iOS apps easily, adding the ability of making custom cases in just a few minutes.

Add the SDK to your Xcode project
---------------------------------

1. Drag both `CasetagramSDK.framework` and `CasetagramSDK.bundle` to your project.
	![sdkinstall_step1.png](http://casetagram.github.io/casetagram-ios-sdk/images/sdkinstall_step1.png)
	![sdkinstall_step2.png](http://casetagram.github.io/casetagram-ios-sdk/images/sdkinstall_step2.png)
2. Verify that `CasetagramSDK.framework` appears in the "Link Binary With Libraries" section in your target's Build Phases. If it didn't, you can add it by dragging the `CasetagramSDK.framework` from your Project Navigator to the "Link Binary With Libraries" section.
3. Verify that `CasetagramSDK.bundle` appears in the "Copy Bundle Resources" section in your target's Build Phases. If it didn't, you can add it by dragging the `CasetagramSDK.bundle` from your Project Navigator to the "Copy Bundle Resources" section.
	![sdkinstall_step3.png](http://casetagram.github.io/casetagram-ios-sdk/images/sdkinstall_step3.png)
4. Under the "Link Binary With Libraries" section in your target's Build Phases, press the plus (+) button. Add the following system frameworks:  
    * CoreImage.framework
	* ImageIO.framework
	* MessageUI.framework
	* MobileCoreServices.framework
	* QuartzCore.framework
	* Social.framework
	* Twitter.framework
	![sdkinstall_step4.png](http://casetagram.github.io/casetagram-ios-sdk/images/sdkinstall_step4.png)
5. If you want to have your app works on iOS 5.0, you should set `Social.framework` as *optional*.
	![sdkinstall_step5.png](http://casetagram.github.io/casetagram-ios-sdk/images/sdkinstall_step5.png)
6. That's it!

Integrate with the SDK
----------------------

1. Import the `CasetagramSDK.h` header file:
	
	```
	#import <CasetagramSDK/CasetagramSDK.h>
	```

2. Configure with your client id and client secret, also specify your redirect URI if you are going to share your client id with your web application. Otherwise just use `myapp://redirect` as follows:
	
	```
	[CTGManager setClientID:@"MyAppClientIDxxxxxxx"];
	[CTGManager setClientSecret:@"MyAppClientSecretxxxxxxxxxxxxxxxxxxxxxxx"];
	[CTGManager setRedirectURI:@"myapp://redirect"];
	```
	
3. Implement the `CasetagramSDKDelegate` protocol methods:  
	
	```
	- (void)casetagramSDKOrderCompleted
	{
		[self dismissModalViewControllerAnimated:YES];
	}
	- (void)casetagramSDKUserCancelled
	{
		[self dismissModalViewControllerAnimated:YES];
	}
	```
	
4. And assign your view controller as a delegate:
	
	```
	[CTGManager setDelegate:self];
	```
	
5. *Optional:* You can disable the move and scale page:
	
	```
	[CTGManager setSkipMoveAndScale:YES];
	```
	
6. Pass the image to the SDK:
	
	```
	[CTGManager setImage:[UIImage imageNamed:@"photo.jpg"]];
	```
	
7. Finally present the CasetagramViewController:
	
	```
	UIViewController *vc = [CTGManager newCasetagramViewController];
	[self presentModalViewController:vc animated:YES];
	```

Requirements
------------

* Xcode 4.6 and iOS SDK 5.0 or above
* iPhone, iPad and iOS Simulator are supported
* iOS 5.0 or above, retina display preferred

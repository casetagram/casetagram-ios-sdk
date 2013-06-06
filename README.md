Casetagram iOS SDK
==================

Casetagram is a social design service where you can create custom tech cases by using your Instagram, Facebook and directly uploaded photos. We turn your designs into high quality cases with our patent pending technology, then we print it and ship it to you. 

Add the SDK to your Xcode project
---------------------------------

1. Drag both `CasetagramSDK.framework` and `CasetagramSDK.bundle` to your project.
2. Verify that `CasetagramSDK.framework` appears in the "Link Binary With Libraries" section in your target's Build Phases. If it didn't, you can add it by dragging the `CasetagramSDK.framework` from your Project Navigator to the "Link Binary With Libraries" section.
3. Verify that `CasetagramSDK.bundle` appears in the "Copy Bundle Resources" section in your target's Build Phases. If it didn't, you can add it by dragging the `CasetagramSDK.bundle` from your Project Navigator to the "Copy Bundle Resources" section.
4. Under the "Link Binary With Libraries" section in your target's Build Phases, press the plus (+) button. Add the following system frameworks:  
    * CoreImage.framework
	* ImageIO.framework
	* MessageUI.framework
	* MobileCoreServices.framework
	* QuartzCore.framework
	* Social.framework
	* Twitter.framework
5. That's it!

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

5. If you wish, you can optionally disable the move and scale page:

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


//
//  CTGImageUtilities.h
//  CasetagramSDK
//
//  Created by Wang on 24/4/13.
//  Copyright (c) 2013 Casetagram. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AssetsLibrary/AssetsLibrary.h>

typedef enum {
	CTGImageFileTypeUnknown = 0x0,
	CTGImageFileTypePNG = 0x1,
	CTGImageFileTypeJPEG = 0x2,
	CTGImageFileTypeGIF = 0x3,
	CTGImageFileTypeTIFF = 0x4,
} CTGImageFileType;

typedef enum {
	CTGImageWatermarkPositionTypeTopLeft = 0x0,
	CTGImageWatermarkPositionTypeTopRight = 0x1,
	CTGImageWatermarkPositionTypeBottomLeft = 0x2,
	CTGImageWatermarkPositionTypeBottomRight = 0x3,
} CTGImageWatermarkPositionType;

@interface CTGImageUtilities : NSObject

#pragma mark -
#pragma mark Image resize and rotate

+ (UIImage *)processImage:(UIImage *)image maxResolution:(CGFloat)resolution;
+ (UIImage *)processImage:(UIImage *)image maxResolution:(CGFloat)resolution orientation:(UIImageOrientation)orientation;
+ (UIImage *)processImage:(UIImage *)image maxResolution:(CGFloat)resolution rotationDegree:(float)rotationDegree;
+ (UIImage *)processImage:(UIImage *)image targetSize:(CGSize)targetSize;
+ (UIImage *)processImage:(UIImage *)image rotationDegree:(float)rotationDegree;
+ (UIImage *)processImage:(UIImage *)image orientation:(UIImageOrientation)orientation;
+ (UIImage *)fixImageRotation:(UIImage *)image;

+ (UIImage *)processImage:(UIImage *)image targetSize:(CGSize)targetSize orientation:(UIImageOrientation)orientation;
+ (UIImage *)processImage:(UIImage *)image padToSize:(CGSize)targetSize backgroundColor:(UIColor *)color;
+ (UIImage *)processImage:(UIImage *)image cropToRect:(CGRect)rect;
+ (UIImage *)processImage:(UIImage *)image addWatermark:(UIImage *)watermarkImage position:(CTGImageWatermarkPositionType)positionType;

#pragma mark -
#pragma mark Image File Type detection

+ (CTGImageFileType)detectImageFileTypeAtPath:(NSString *)imagePath;
+ (CTGImageFileType)detectImageFileTypeWithData:(NSData *)imageData;

#pragma mark -
#pragma mark Image Creation

+ (UIImage *)imageWithColor:(UIColor *)color andSize:(CGSize)targetSize;

#pragma mark -
#pragma mark Saving Image

+ (void)saveImage:(UIImage *)image toPath:(NSString *)path;
+ (NSString *)generateCacheFilePath;

#pragma mark -
#pragma mark ALAssetOrientation and UIImageOrientation conversion

+ (UIImageOrientation)imageOrientationFromAssetOrientation:(ALAssetOrientation)assetOrientation;
+ (ALAssetOrientation)assetOrientationFromImageOrientation:(UIImageOrientation)imageOrientation;

#pragma mark -
#pragma mark Auto Enhance Image

+ (UIImage *)autoEnhanceImage:(UIImage *)image;

@end

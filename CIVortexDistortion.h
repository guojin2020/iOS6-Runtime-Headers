/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIVortexDistortion : CIFilter  {
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputAngle;
}

@property(retain) CIImage * inputImage;
@property(copy) CIVector * inputCenter;
@property(copy) NSNumber * inputRadius;
@property(copy) NSNumber * inputAngle;

+ (id)customAttributes;

- (id)inputCenter;
- (void)setInputCenter:(id)arg1;
- (id)inputRadius;
- (void)setInputRadius:(id)arg1;
- (void)setInputAngle:(id)arg1;
- (id)inputAngle;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (bool)_isIdentity;
- (id)outputImage;
- (void)setDefaults;

@end

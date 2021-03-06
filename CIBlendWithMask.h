/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage;

@interface CIBlendWithMask : CIFilter  {
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
    CIImage *inputMaskImage;
}

@property(retain) CIImage * inputImage;
@property(retain) CIImage * inputBackgroundImage;
@property(retain) CIImage * inputMaskImage;

+ (id)customAttributes;

- (void)setInputMaskImage:(id)arg1;
- (id)inputMaskImage;
- (id)_kernelNoB;
- (id)_kernelNoF;
- (void)setInputBackgroundImage:(id)arg1;
- (id)inputBackgroundImage;
- (id)_kernel;
- (void)setInputImage:(id)arg1;
- (id)inputImage;
- (id)outputImage;

@end

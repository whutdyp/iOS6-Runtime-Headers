/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction  {
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(retain) struct CGColor { }* backgroundColor;
@property(copy) NSArray * layerInstructions;
@property BOOL enablePostProcessing;

+ (id)videoCompositionInstruction;

- (void)setLayerInstructions:(id)arg1;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (BOOL)enablePostProcessing;
- (id)layerInstructions;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)backgroundColor;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVPlayerItemOutputInternal;

@interface AVPlayerItemOutput : NSObject  {
    AVPlayerItemOutputInternal *_outputInternal;
}

@property BOOL suppressesPlayerRendering;


- (void)setSuppressesPlayerRendering:(BOOL)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForMachAbsoluteTime:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })itemTimeForHostTime:(double)arg1;
- (void)_detachFromPlayerItem;
- (void)_attachToPlayerItem:(id)arg1;
- (void)_setTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (BOOL)suppressesPlayerRendering;
- (id)_weakReference;
- (id)init;
- (void)dealloc;

@end

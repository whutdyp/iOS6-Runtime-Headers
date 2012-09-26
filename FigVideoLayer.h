/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer  {
    FigVideoLayerInternal *_videoLayer;
}


- (void)_sendVideoLayerIsBeingServicedNotification;
- (BOOL)isVideoLayerBeingServiced;
- (void)notificationBarrier;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)finalize;

@end
/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class AVConferenceXPCClient, VideoAttributes, NSObject<OS_dispatch_queue>, CALayer, NSObject<AVConferencePreviewClientDelegate>;

@interface AVConferencePreview : NSObject  {
    BOOL clientWantsPreview;
    AVConferenceXPCClient *connection;
    CALayer *caLayerFront;
    CALayer *caLayerBack;
    VideoAttributes *localVideoAttributes;
    NSObject<AVConferencePreviewClientDelegate> *delegate;
    NSObject<OS_dispatch_queue> *avConferencePreviewQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewNotificationQueue;
}

@property(retain) NSObject<AVConferencePreviewClientDelegate> * delegate;

+ (id)AVConferencePreviewSingleton;

- (void)endPIPToPreviewAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2;
- (id)localVideoLayer:(BOOL)arg1;
- (void)setLocalVideoAttributes:(id)arg1;
- (id)localVideoAttributes;
- (BOOL)isPreviewRunning;
- (void)startPreview;
- (void)stopPreview;
- (unsigned int)localCamera;
- (void)setLocalCamera:(unsigned int)arg1;
- (void)connectLayer:(id)arg1 withSlot:(unsigned int)arg2;
- (void)didReceiveCommError;
- (void)didReceiveErrorFromCamera:(unsigned int)arg1 error:(id)arg2;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveFirstPreviewFrameFromCamera:(unsigned int)arg1;
- (void)didStopPreview;
- (void)didStartPreview;
- (id)init;
- (void)dealloc;
- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end
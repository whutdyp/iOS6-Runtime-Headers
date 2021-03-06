/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class UINavigationBar, MPDetailSlider, <MPVideoOverlayDelegate>, MPAVItem, <MPVideoControllerProtocol>, MPAVController, NSMutableDictionary;

@interface MPVideoOverlay : UIView <MPVideoOverlay, MPDetailSliderDelegate> {
    <MPVideoControllerProtocol> *_videoViewController;
    <MPVideoOverlayDelegate> *_delegate;
    MPAVItem *_item;
    MPAVController *_player;
    MPDetailSlider *_scrubControl;
    int _interfaceOrientation;
    BOOL _controlsAutohideDisabled;
    BOOL _wantsTick;
    unsigned long long _desiredParts;
    unsigned long long _visibleParts;
    unsigned long long _disabledParts;
    NSMutableDictionary *_tickTimeEvents;
    double _lastTickTime;
}

@property <MPVideoControllerProtocol> * videoViewController;
@property BOOL allowsWirelessPlayback;
@property(retain) MPAVItem * item;
@property int interfaceOrientation;
@property unsigned long long desiredParts;
@property unsigned long long visibleParts;
@property unsigned long long disabledParts;
@property(retain) MPAVController * player;
@property(readonly) UINavigationBar * navigationBar;
@property <MPVideoOverlayDelegate> * delegate;


- (double)_playableDuration;
- (void)_endSliderTracking;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (void)performSelector:(SEL)arg1 whenTickingPastTime:(double)arg2;
- (void)cancelPreviousPerformTickEventsForSelector:(SEL)arg1;
- (id)videoViewController;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (BOOL)updateTimeBasedValues;
- (void)showAlternateTracks;
- (void)hideAlternateTracks;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (unsigned long long)disabledParts;
- (void)stopTicking;
- (void)startTicking;
- (void)setVideoViewController:(id)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)_tickNotification:(id)arg1;
- (void)setDisabledParts:(unsigned long long)arg1;
- (void)setVisibleParts:(unsigned long long)arg1;
- (void)setDesiredParts:(unsigned long long)arg1;
- (unsigned long long)desiredParts;
- (unsigned long long)visibleParts;
- (void)setItem:(id)arg1;
- (BOOL)allowsWirelessPlayback;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (double)_duration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (void)dealloc;
- (id)item;
- (void)setInterfaceOrientation:(int)arg1;
- (id)navigationBar;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

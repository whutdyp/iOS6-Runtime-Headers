/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//MediaPlayer.framework/MediaPlayer
 */

@class NSURL, <MPNowPlayingItemQueueInfoButtonDelegate>, UIImage;

@interface MPNowPlayingItemQueueInfoButton : UIButton  {
    UIImage *_infoCircleImage;
    NSURL *_infoURL;
    BOOL _infoURLIsTimed;
    unsigned int _infoFeederCount;
    float _minSizingTextWidth;
    unsigned int _minSizingPositionInQueue;
    int _layoutDisabledCount;
    unsigned int _allowedDisplayTypes;
    int _infoTypeForLayout;
    <MPNowPlayingItemQueueInfoButtonDelegate> *_delegate;
}

@property(retain) NSURL * infoURL;
@property(readonly) int infoDisplayType;
@property unsigned int allowedDisplayTypes;
@property <MPNowPlayingItemQueueInfoButtonDelegate> * delegate;


- (void)setInfoURL:(id)arg1;
- (id)infoURL;
- (void)updateForItemCrossedTimeMarkerNotification:(id)arg1 currentTime:(double)arg2;
- (void)configureForItem:(id)arg1;
- (BOOL)_shouldDisplaysInfoCircleImage;
- (void)_updateFeederCountInfo:(id)arg1;
- (unsigned int)allowedDisplayTypes;
- (int)_activeDisplayType;
- (int)infoDisplayType;
- (float)_minSizingTextWidth;
- (int)_infoDisplayTypeForURL:(id)arg1 urlIsTimed:(BOOL)arg2 feederCount:(unsigned int)arg3 askDelegate:(BOOL)arg4;
- (void)clicked:(id)arg1;
- (BOOL)configureForItem:(id)arg1 atTime:(double)arg2;
- (void)setAllowedDisplayTypes:(unsigned int)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (id)init;
- (void)dealloc;
- (int)buttonType;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

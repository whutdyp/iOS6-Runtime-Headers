/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKAchievementCellContent : GKMultilineCellContentView  {
    BOOL _highlighted;
    BOOL _offsetImage;
    UIImage *_highlightedImage;
    BOOL _largeIcons;
}

@property(getter=isHighlighted) BOOL highlighted;
@property BOOL offsetImage;
@property(readonly) BOOL largeIcons;
@property(retain) UIImage * highlightedImage;


- (BOOL)largeIcons;
- (BOOL)offsetImage;
- (void)drawLineIndex:(unsigned int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 highlighted:(BOOL)arg3;
- (void)adjustLineRects:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 forLines:(id)arg2 inTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_gkPopoverPresentationRect;
- (id)initWithLargeIcons:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_gkPopoverPresentationInsets;
- (void)setOffsetImage:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (id)image;
- (void)dealloc;
- (void)setHighlightedImage:(id)arg1;
- (void)prepareForReuse;
- (id)highlightedImage;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;

@end
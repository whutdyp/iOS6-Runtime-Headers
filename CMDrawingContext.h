/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSAffineTransform, CMDrawableMapper, NSMutableArray;

@interface CMDrawingContext : NSObject  {
    CMDrawableMapper *_mapper;
    NSMutableArray *_actions;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _finalFrame;
    struct __CFData { } *_data;
    struct CGDataConsumer { } *_dataConsumer;
    struct CGContext { } *_cgContext;
    NSAffineTransform *_currentTransform;
    NSMutableArray *_transforms;
    struct CGImage { } *_fillImage;
}


- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRectToPage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addPath:(struct CGPath { }*)arg1;
- (void)addDebugPath:(struct CGPath { }*)arg1;
- (void)setLineDash:(id)arg1;
- (float)currentScaleFactor;
- (id)mapper;
- (void)setMapper:(id)arg1;
- (struct CGContext { }*)_cgContext;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTransform:(id)arg2;
- (void)_restoreLastTransform;
- (void)_addTransform:(id)arg1;
- (void)_closeContext;
- (void)_playbackActions;
- (void)_copyCGContext;
- (void)_applyTransform:(id)arg1;
- (id)copyPDF;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pdfFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRectToGroup:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })currentTransform;
- (void)restoreLastTransform;
- (void)addTransform:(id)arg1;
- (void)setFillImage:(struct CGImage { }*)arg1;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id).cxx_construct;
- (void)setLineWidth:(float)arg1;

@end
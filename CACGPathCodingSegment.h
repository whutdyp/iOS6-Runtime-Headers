/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CACGPathCodingSegment : NSObject <NSCoding> {
    int _type;
    struct CGPoint { 
        float x; 
        float y; 
    } _points[3];
}


- (void)addToCGPath:(struct CGPath { }*)arg1;
- (id)initWithCGPathElement:(const struct CGPathElement { int x1; struct CGPoint {} *x2; }*)arg1;
- (id).cxx_construct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
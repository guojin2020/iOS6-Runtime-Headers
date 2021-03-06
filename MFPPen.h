/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class MFPCustomLineCap, MFPBrush;

@interface MFPPen : NSObject  {
    MFPBrush *mBrush;
    float mWidth;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mTransform;
    int mStartCap;
    int mEndCap;
    int mLineJoin;
    float mMiterLimit;
    int mDashStyle;
    int mDashCap;
    float mDashOffset;
    int mDashPatternCount;
    float *mDashPattern;
    int mAlignment;
    int mCompoundArrayCount;
    float *mCompoundArray;
    MFPCustomLineCap *mCustomStartCap;
    MFPCustomLineCap *mCustomEndCap;
}


- (void)setCustomEndCap:(id)arg1;
- (id)customEndCap;
- (void)setCustomStartCap:(id)arg1;
- (id)customStartCap;
- (const float*)compoundArray;
- (int)compoundArrayCount;
- (const float*)dashPattern;
- (int)dashPatternCount;
- (float)dashOffset;
- (int)dashCap;
- (int)dashStyle;
- (int)endCap;
- (int)startCap;
- (void)applyDashPattern;
- (void)applyLineJoin;
- (void)applyDashCap;
- (void)applyLineCap;
- (void)applyDashPattern:(const float*)arg1 count:(int)arg2;
- (void)strokePath:(struct CGPath { }*)arg1;
- (void)setCompoundArray:(const float*)arg1 count:(int)arg2;
- (void)setDashPattern:(const float*)arg1 count:(int)arg2;
- (void)setDashOffset:(float)arg1;
- (void)setDashCap:(int)arg1;
- (void)setDashStyle:(int)arg1;
- (void)setEndCap:(int)arg1;
- (void)setStartCap:(int)arg1;
- (void)setBrush:(id)arg1;
- (id)brush;
- (void)setWidth:(float)arg1;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)setLineJoin:(int)arg1;
- (void)setMiterLimit:(float)arg1;
- (float)miterLimit;
- (int)lineJoin;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;
- (float)width;
- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end

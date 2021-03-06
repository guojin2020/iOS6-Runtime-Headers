/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMediaTimingFunction : NSObject <NSCoding> {
    struct CAMediaTimingFunctionPrivate { float x1[2]; float x2[2]; } *_priv;
}

+ (id)functionWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
+ (id)functionWithName:(id)arg1;
+ (id)uiFunctionWithControlPoints:(const struct CGPoint { float x1; float x2; }*)arg1;

- (void)getControlPointAtIndex:(unsigned long)arg1 values:(float[2])arg2;
- (id)initWithControlPoints:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4;
- (float)_solveForInput:(float)arg1;
- (void)_getPoints:(double*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

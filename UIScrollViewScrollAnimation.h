/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewScrollAnimation : UIAnimation  {
    struct CGPoint { 
        float x; 
        float y; 
    } _originalOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _targetOffset;
    float _accuracy;
    BOOL _adjustsForContentOffsetDelta;
}


- (void)dealloc;
- (void)setProgress:(float)arg1;
- (void)adjustForContentOffsetDelta:(struct CGPoint { float x1; float x2; })arg1;

@end
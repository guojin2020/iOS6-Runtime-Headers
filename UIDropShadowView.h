/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDictionary, UIView;

@interface UIDropShadowView : UIView  {
    float _cornerRadius;
    UIView *_contentView;
    UIView *_backgroundImage;
    NSDictionary *_preservedLayerValues;
}

@property float cornerRadius;
@property UIView * contentView;


- (float)cornerRadius;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)updateShadowPath;
- (void)setCornerRadius:(float)arg1;
- (void)didFinishRotation;
- (void)willBeginRotationWithOriginalBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 newBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIImage;

@interface UIImageView : UIView  {
    id _storage;
    UIImage *_decompressingImage;
    UIImage *_decompressingHighlightedImage;
}

@property int drawMode;
@property(retain) UIImage * image;
@property(retain) UIImage * highlightedImage;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(copy) NSArray * animationImages;
@property(copy) NSArray * highlightedAnimationImages;
@property double animationDuration;
@property int animationRepeatCount;


- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)animationDuration;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)setDrawMode:(int)arg1;
- (int)animationRepeatCount;
- (void)startAnimating;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setAnimationImages:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (int)drawMode;
- (void)_setViewGeometry:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forMetric:(int)arg2;
- (BOOL)_recomputePretilingState;
- (void)_updatePretiledImageCacheForImage:(id)arg1;
- (void)_clearPretiledImageCacheForImage:(id)arg1;
- (void)stopAnimating;
- (void)_updateState;
- (BOOL)_setImageViewContents:(id)arg1;
- (BOOL)isAnimating;
- (id)_cachedPretiledImageForImage:(id)arg1;
- (BOOL)_shouldDrawImage:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setAnimating:(BOOL)arg1;
- (id)highlightedImage;
- (id)highlightedAnimationImages;
- (id)animationImages;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setAnimationRepeatCount:(int)arg1;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_canDrawContent;
- (BOOL)useBlockyMagnificationInClassic;
- (struct CGImage { }*)imageRef;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
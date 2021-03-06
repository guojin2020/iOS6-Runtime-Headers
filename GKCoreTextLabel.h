/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKCoreTextRenderer, NSAttributedString;

@interface GKCoreTextLabel : UILabel  {
    struct { 
        struct CGSize { 
            float width; 
            float height; 
        } constraints; 
        struct CGSize { 
            float width; 
            float height; 
        } sizeThatFit; 
        float fontSize; 
    } _sizeThatFitsCache;
    NSAttributedString *_attributedString;
    float _leading;
    BOOL _shouldDrawEmoji;
    BOOL _shouldSizeToTextImageBounds;
    NSAttributedString *_gkAttributedText;
    BOOL _forceNaturalAlignment;
    GKCoreTextRenderer *_coreTextRenderer;
}

@property(retain) id contentPath;
@property(copy) NSAttributedString * attributedText;
@property float leading;
@property BOOL shouldDrawEmoji;
@property(readonly) float baselineYOffset;
@property BOOL shouldSizeToTextImageBounds;
@property BOOL forceNaturalAlignment;
@property(copy) NSString * truncationSymbol;
@property(readonly) unsigned int actualLineCount;
@property(readonly) NSAttributedString * attributedString;
@property(retain) GKCoreTextRenderer * coreTextRenderer;


- (float)preferredHeightForWidth:(float)arg1;
- (void)setForceNaturalAlignment:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 calculatedFontSize:(float*)arg2;
- (BOOL)forceNaturalAlignment;
- (id)attributedStringForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct __CTParagraphStyle { }*)paragraphStyleWithLineHeight:(float)arg1;
- (void)invalidateAttributedString;
- (id)coreTextRenderer;
- (void)setCoreTextRenderer:(id)arg1;
- (void)setTruncationSymbol:(id)arg1;
- (void)setShouldSizeToTextImageBounds:(BOOL)arg1;
- (float)baselineYOffset;
- (unsigned int)actualLineCount;
- (void)setContentPath:(id)arg1;
- (BOOL)shouldDrawEmoji;
- (id)truncationSymbol;
- (id)contentPath;
- (BOOL)shouldSizeToTextImageBounds;
- (void)setShouldDrawEmoji:(BOOL)arg1;
- (void)setLeading:(float)arg1;
- (void)setLineBreakMode:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setMinimumScaleFactor:(float)arg1;
- (float)minimumScaleFactor;
- (id)attributedString;
- (void)dealloc;
- (void)setNumberOfLines:(int)arg1;
- (float)leading;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setTextColor:(id)arg1;
- (id)attributedText;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTextAlignment:(int)arg1;
- (void)sizeToFit;
- (void)setBaselineAdjustment:(int)arg1;
- (int)baselineAdjustment;
- (void)setFont:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)layoutSubviews;

@end

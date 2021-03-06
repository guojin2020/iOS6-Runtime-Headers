/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, GKCoreTextLabel, NSString, UILabel;

@interface GKSignInHeaderView : UIView <GKTableViewCellContents> {
    NSString *_title;
    NSString *_message;
    UILabel *_titleLabel;
    GKCoreTextLabel *_messageLabel;
    UIImageView *_iconView;
    float _adjustYOffset;
}

@property(retain) NSString * title;
@property(retain) NSString * message;
@property(retain) UILabel * titleLabel;
@property(retain) GKCoreTextLabel * messageLabel;
@property(retain) UIImageView * iconView;
@property float adjustYOffset;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;


- (void)setIconView:(id)arg1;
- (void)setAdjustYOffset:(float)arg1;
- (float)adjustYOffset;
- (void)layoutSubviewsWithYOffset:(float)arg1;
- (id)iconView;
- (void)setMessageLabel:(id)arg1;
- (id)messageLabel;
- (void)layoutSubviewsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTitleLabel:(id)arg1;
- (float)preferredHeightForOrientation:(int)arg1;
- (id)theme;
- (id)message;
- (id)init;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)prepareForReuse;
- (id)titleLabel;
- (void)layoutSubviews;

@end

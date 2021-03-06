/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    BOOL _selected;
    DOMHTMLOptionElement *_node;
}

@property(retain) DOMHTMLOptionElement * _node;


- (void)dealloc;
- (id)_node;
- (void)unselect;
- (BOOL)isGroup;
- (void)set_node:(id)arg1;
- (BOOL)selected;
- (id)initWithHTMLOptionNode:(id)arg1;
- (id)node;
- (void)setSelected:(BOOL)arg1;

@end

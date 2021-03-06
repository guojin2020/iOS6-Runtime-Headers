/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSURL;

@interface UIWebClipIcon : NSObject  {
    BOOL _precomposed;
    BOOL _siteWide;
    struct CGSize { 
        float width; 
        float height; 
    } _bestSize;
    NSURL *_url;
}

@property(getter=isPrecomposed) BOOL precomposed;
@property(getter=isSiteWide) BOOL siteWide;
@property struct CGSize { float x1; float x2; } bestSize;
@property(retain) NSURL * url;


- (void)dealloc;
- (void)setUrl:(id)arg1;
- (void)setBestSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSiteWide:(BOOL)arg1;
- (void)setPrecomposed:(BOOL)arg1;
- (int)compare:(id)arg1 preferringDeviceIconSizes:(BOOL)arg2;
- (BOOL)isPrecomposed;
- (struct CGSize { float x1; float x2; })bestSize;
- (BOOL)isSiteWide;
- (id)url;

@end

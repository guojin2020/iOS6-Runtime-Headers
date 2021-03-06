/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation  {
    NSDictionary *_mismatches;
    id _requiredCapabilities;
}

@property(readonly) NSDictionary * mismatches;
@property(readonly) id requiredCapabilities;


- (id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2;
- (id)mismatches;
- (id)requiredCapabilities;
- (void)_postDefaultDialog;
- (void)dealloc;
- (void)run;

@end

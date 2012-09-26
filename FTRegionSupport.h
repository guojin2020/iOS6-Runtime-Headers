/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTMessageDelivery, NSArray;

@interface FTRegionSupport : NSObject  {
    NSArray *_regions;
    FTMessageDelivery *_delivery;
}

@property(readonly) BOOL isLoaded;
@property(readonly) BOOL isLoading;
@property(readonly) NSArray * regions;
@property(retain) FTMessageDelivery * _delivery;
@property(retain) NSArray * _regions;

+ (id)sharedInstance;

- (void)set_delivery:(id)arg1;
- (id)_delivery;
- (void)set_regions:(id)arg1;
- (id)_regions;
- (id)regionForID:(id)arg1;
- (void)flushRegions;
- (id)regions;
- (void)_buildMessageDeliveryIfNeeded;
- (BOOL)isLoading;
- (void)dealloc;
- (void)startLoading;
- (BOOL)isLoaded;

@end
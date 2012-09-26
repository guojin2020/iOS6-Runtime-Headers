/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface ISDevice : NSObject <ISSingleton> {
    unsigned int _daemonLaunchCount;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_guid;
    double _lastFreeSpaceRequest;
}

@property(readonly) NSString * deviceName;
@property(readonly) NSString * guid;
@property(readonly) NSString * hardwareName;
@property(readonly) NSString * serialNumber;
@property(readonly) NSString * systemName;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (id)supportedOfferDeviceForDevices:(id)arg1;
- (void)requestFreeSpace:(unsigned long long)arg1 atPath:(id)arg2 withOptions:(id)arg3 completionBlock:(id)arg4;
- (id)hardwareName;
- (id)copyPurchaseValidationContext;
- (id)copyProtocolConditionalContext;
- (BOOL)checkCapabilities:(id)arg1 withMismatches:(id*)arg2;
- (BOOL)takePowerAssertion:(id)arg1;
- (BOOL)releasePowerAssertion:(id)arg1;
- (id)serialNumber;
- (int)_deviceClass;
- (id)guid;
- (id)deviceName;
- (id)init;
- (void)dealloc;
- (id)systemName;

@end
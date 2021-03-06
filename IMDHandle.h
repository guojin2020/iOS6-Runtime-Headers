/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class NSString, NSDictionary;

@interface IMDHandle : NSObject  {
    NSString *_id;
    NSString *_unformattedID;
    NSString *_countryCode;
}

@property(retain) NSString * ID;
@property(retain) NSString * unformattedID;
@property(retain) NSString * countryCode;
@property(readonly) NSDictionary * handleInfo;


- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;
- (id)handleInfo;
- (BOOL)isBetterDefinedThan:(id)arg1;
- (void)setID:(id)arg1;
- (id)ID;
- (int)compareIDs:(id)arg1;
- (void)setUnformattedID:(id)arg1;
- (id)unformattedID;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;

@end

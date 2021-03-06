/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_principalURL;
    BOOL _useSSL;
    int _port;
    NSString *_accountPersistentUUID;
}

@property(readonly) NSString * accountDescription;
@property(readonly) NSString * hostname;
@property(copy) NSString * username;
@property(copy) NSString * password;
@property(readonly) NSString * principalURL;
@property(readonly) BOOL useSSL;
@property(readonly) int port;
@property(copy) NSString * accountPersistentUUID;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)principalURL;
- (BOOL)useSSL;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)accountPersistentUUID;
- (id)accountDescription;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)hostname;
- (id)title;
- (id)password;
- (int)port;
- (void).cxx_destruct;
- (id)description;

@end

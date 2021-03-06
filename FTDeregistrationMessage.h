/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSString;

@interface FTDeregistrationMessage : FTIDSMessage <NSCopying> {
    NSData *_validationData;
    NSString *_protocolVersion;
}

@property(copy) NSData * validationData;
@property(copy) NSString * protocolVersion;


- (void)setValidationData:(id)arg1;
- (id)validationData;
- (void)setProtocolVersion:(id)arg1;
- (id)protocolVersion;
- (id)additionalMessageHeaders;
- (id)bagKey;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (id)requiredKeys;
- (id)messageBody;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

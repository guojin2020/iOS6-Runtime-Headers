/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup  {
    NSSet *_addressBookHomes;
    NSSet *_directoryGatewayURLs;
}

@property(readonly) NSSet * addressBookHomes;
@property(readonly) NSSet * directoryGatewayURLs;


- (id)directoryGatewayURLs;
- (id)addressBookHomes;
- (id)directoryGatewayURL;
- (id)homeSet;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)_copyAccountPropertiesPropFindElements;
- (void)dealloc;
- (id)description;

@end

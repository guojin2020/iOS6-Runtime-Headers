/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSArray;

@interface GEOSearchAttributionInfo : NSObject  {
    NSString *_identifier;
    unsigned int _version;
    NSString *_logoPath;
    NSString *_snippetLogoPath;
    NSString *_displayName;
    NSArray *_attributionApps;
    unsigned int _attributionRequirementsMask;
}

@property(retain) NSString * identifier;
@property unsigned int version;
@property unsigned int requirementsMask;
@property(retain) NSString * logoPath;
@property(retain) NSString * snippetLogoPath;
@property(retain) NSString * displayName;
@property(retain) NSArray * attributionApps;


- (void)setRequirementsMask:(unsigned int)arg1;
- (unsigned int)requirementsMask;
- (void)setSnippetLogoPath:(id)arg1;
- (id)snippetLogoPath;
- (void)setLogoPath:(id)arg1;
- (id)logoPath;
- (BOOL)hasAttributionRequirement:(int)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPath:(id)arg3 snippetLogoPath:(id)arg4;
- (id)attributionApps;
- (void)setAttributionApps:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)dealloc;
- (id)description;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (void)setVersion:(unsigned int)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)version;

@end
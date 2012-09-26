/* Generated by RuntimeBrowser.
   Image: /Users/steipete/Library/Application Support/iPhone Simulator/6.0/Applications/169BE991-A55A-4056-B56F-2FCCE879D4E7/OCRuntime.app/OCRuntime
 */

@class NSMutableDictionary, NSMutableSet;

@interface ClassDisplay : NSObject  {
    Class representedClass;
    NSMutableSet *refdClasses;
    NSMutableDictionary *namedStructs;
    const char *ivT;
    int structDepth;
    int structPart;
    BOOL currentWarning;
    BOOL methodWarning;
    BOOL showUnhandledWarning;
    BOOL showFunctionSignatureNote;
    BOOL displayPropertiesDefaultValues;
}

@property(retain) NSMutableSet * refdClasses;
@property(retain) NSMutableDictionary * namedStructs;
@property BOOL displayPropertiesDefaultValues;

+ (void)thisClassIsPartOfTheRuntimeBrowser;
+ (id)classDisplayWithClass:(Class)arg1;

- (void)dealloc;
- (void)setDisplayPropertiesDefaultValues:(BOOL)arg1;
- (BOOL)displayPropertiesDefaultValues;
- (id)namedStructs;
- (id)refdClasses;
- (id)ivarsTypeTokens;
- (id)ivarCTypeDeclForEncType:(const char *)arg1;
- (id)atClasses;
- (id)propertyDescription:(struct objc_property { }*)arg1;
- (void)setNamedStructs:(id)arg1;
- (void)setRefdClasses:(id)arg1;
- (id)flatCTypeDeclForEncType:(const char *)arg1;
- (id)ivarCTypeDeclForEncType;
- (id)flatCTypeDeclForEncType;
- (BOOL)hasClassName;
- (void)advanceIVTPast:(BOOL)arg1;
- (id)typeForFilerCode:(BOOL)arg1 spaceAfter:(BOOL)arg2;
- (id)typeEncParseStructOrUnionWithEncType:(id)arg1 endCh:(BOOL)arg2 depth:(int*)arg3 sPart:(int)arg4 inLine:(BOOL)arg5 inParam:(BOOL)arg6 spaceAfter:(BOOL)arg7;
- (id)typeEncParseArrayOf:(int*)arg1 sPart:(int)arg2 inLine:(BOOL)arg3 inParam:(BOOL)arg4 spaceAfter:(BOOL)arg5;
- (id)typeEncParseObjectRefInStruct:(BOOL)arg1 spaceAfter:(BOOL)arg2;
- (id)typeEncParseBitField:(BOOL)arg1;
- (id)typeEncParsePointerTo:(int*)arg1 sPart:(int)arg2 inLine:(BOOL)arg3 inParam:(BOOL)arg4 spaceAfter:(BOOL)arg5;
- (id)_parseUnnamedStructOrUnionVarEndCh:(BOOL)arg1 depth:(int*)arg2 sPart:(int)arg3 inLine:(BOOL)arg4 inParam:(BOOL)arg5;
- (id)parseStructOrUnionEndCh:(BOOL)arg1 depth:(int*)arg2 sPart:(int)arg3 inLine:(BOOL)arg4 inParam:(BOOL)arg5 spaceAfter:(BOOL)arg6;
- (id)cTypeDeclForEncTypeDepth:(int*)arg1 sPart:(int)arg2 inStruct:(BOOL)arg3 inLine:(BOOL)arg4 inParam:(BOOL)arg5 spaceAfter:(BOOL)arg6;
- (id)typeEncWarning:(id)arg1 startingIVT:(const char *)arg2 origResult:(id)arg3;
- (void)setRepresentedClass:(Class)arg1;
- (id)methodLinesWithSign:(BOOL)arg1;
- (id)header;

@end
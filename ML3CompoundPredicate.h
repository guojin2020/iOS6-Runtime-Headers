/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSArray;

@interface ML3CompoundPredicate : ML3Predicate  {
    NSArray *_predicates;
}

@property(retain) NSArray * predicates;
@property(readonly) NSString * compoundOperatorJoiner;

+ (id)predicateMatchingPredicates:(id)arg1;

- (id)initWithPredicates:(id)arg1;
- (id)predicates;
- (void)setPredicates:(id)arg1;
- (BOOL)isDynamicForEntityClass:(Class)arg1;
- (void)bindToStatement:(id)arg1 bindingIndex:(inout int*)arg2;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

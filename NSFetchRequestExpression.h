/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks//CoreData.framework/CoreData
 */

@class NSExpression;

@interface NSFetchRequestExpression : NSExpression  {
    void *_reserved1;
    void *_reserved2;
    void *_reserved3;
    void *_reserved4;
    NSExpression *_fetchRequest;
    NSExpression *_managedObjectContext;
    struct _fetchExpressionFlags { 
        unsigned int isCountOnly : 1; 
        unsigned int _RESERVED : 31; 
    } _flags;
}

+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;

- (id)contextExpression;
- (id)requestExpression;
- (BOOL)isCountOnlyRequest;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(BOOL)arg3;
- (unsigned int)expressionType;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

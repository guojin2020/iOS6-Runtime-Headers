/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSExpression;

@interface NSSetExpression : NSExpression  {
    NSExpression *_left;
    NSExpression *_right;
}


- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithType:(unsigned int)arg1 leftExpression:(id)arg2 rightExpression:(id)arg3;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)rightExpression;
- (id)leftExpression;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)minimalFormInContext:(id)arg1;

@end
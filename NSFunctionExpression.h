/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSExpression;

@interface NSFunctionExpression : NSExpression  {
    NSExpression *_operand;
    SEL _selector;
    NSArray *_arguments;
}


- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (SEL)selector;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)binaryOperatorForSelector;
- (id)initWithExpressionType:(unsigned int)arg1 operand:(id)arg2 selector:(SEL)arg3 argumentArray:(id)arg4;
- (BOOL)_shouldUseParensWithDescription;
- (id)operand;
- (id)function;
- (id)initWithSelector:(SEL)arg1 argumentArray:(id)arg2;
- (id)initWithTarget:(id)arg1 selectorName:(id)arg2 arguments:(id)arg3;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned int)arg2;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (id)arguments;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_mapKVCOperatorsToFunctionsInContext:(id)arg1;
- (id)minimalFormInContext:(id)arg1;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class ODDPointPropertySet, OADShapeProperties, OADTextBody;

@interface ODDPoint : NSObject  {
    int mType;
    ODDPointPropertySet *mPropertySet;
    OADShapeProperties *mShapeProperties;
    OADTextBody *mText;
}

+ (void)addConnectionToPoint:(id)arg1 order:(unsigned long)arg2 array:(id*)arg3;

- (id)propertySet;
- (id)shapeProperties;
- (id)text;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)setText:(id)arg1;
- (int)type;

@end

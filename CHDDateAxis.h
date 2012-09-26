/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDateAxis : CHDAxis  {
    boolmAutomatic;
    double mMajorUnitValue;
    double mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}


- (int)baseTimeUnit;
- (int)minorTimeUnit;
- (int)majorTimeUnit;
- (void)setAutomatic:(bool)arg1;
- (bool)isAutomatic;
- (bool)isDate;
- (double)majorUnitValue;
- (double)minorUnitValue;
- (void)setBaseTimeUnit:(int)arg1;
- (void)setMajorTimeUnit:(int)arg1;
- (void)setMinorTimeUnit:(int)arg1;
- (void)setMinorUnitValue:(double)arg1;
- (void)setMajorUnitValue:(double)arg1;
- (id)initWithResources:(id)arg1;

@end
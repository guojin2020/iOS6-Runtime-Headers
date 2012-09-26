/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADAngleArcPathElement : OADPathElement  {
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mCenter;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mSemiaxes;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mStartAngle;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mAngleLength;
    BOOL mConnectedToPrevious;
}


- (BOOL)connectedToPrevious;
- (struct OADAdjustCoord { BOOL x1; int x2; })angleLength;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })semiaxes;
- (id)initWithCenter:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg1 semiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg2 startAngle:(struct OADAdjustCoord { BOOL x1; int x2; })arg3 angleLength:(struct OADAdjustCoord { BOOL x1; int x2; })arg4 connectedToPrevious:(BOOL)arg5;
- (struct OADAdjustCoord { BOOL x1; int x2; })startAngle;
- (id).cxx_construct;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })center;

@end
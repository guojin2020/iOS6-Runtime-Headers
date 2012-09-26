/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextTab : NSObject <NSCopying, NSCoding> {
    struct { 
        unsigned int alignment : 4; 
        unsigned int refCount : 24; 
        unsigned int unused : 4; 
    } _flags;
    float _location;
    id _reserved;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (float)location;
- (int)alignment;
- (id)accessibilityRulerMarkerTypeDescription;
- (id)accessibilityRulerMarkerType;
- (unsigned int)tabStopType;
- (id)initWithType:(unsigned int)arg1 location:(float)arg2;
- (id)initWithTextAlignment:(int)arg1 location:(float)arg2 options:(id)arg3;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)options;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
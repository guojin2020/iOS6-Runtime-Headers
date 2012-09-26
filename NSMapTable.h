/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMapTable : NSObject <NSCopying, NSCoding, NSFastEnumeration> {
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)alloc;
+ (id)weakToWeakObjectsMapTable;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithWeakToWeakObjects;
+ (id)strongToWeakObjectsMapTable;
+ (id)weakToStrongObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2;
+ (id)mapTableWithWeakToStrongObjects;

- (id)init;
- (id)allValues;
- (id)allKeys;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (unsigned int)count;
- (id)copy;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)mutableDictionary;
- (unsigned int)getKeys:(const void**)arg1 values:(const void**)arg2;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKey:(const void*)arg2;
- (id)valuePointerFunctions;
- (id)keyPointerFunctions;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned int)arg3;
- (id)initWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2 capacity:(unsigned int)arg3;
- (id)enumerator;
- (void)removeAllItems;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
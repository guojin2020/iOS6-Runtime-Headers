/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPersonTableViewDataSource;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {
    struct __CFDictionary { } *_currentImageData;
    void *_personForImageData;
    BOOL _hasImageChanges;
    BOOL _didChangePreferredPersonForImage;
    ABPersonTableViewDataSource *_dataSource;
}

@property ABPersonTableViewDataSource * dataSource;


- (void)setCurrentImageData:(struct __CFDictionary { }*)arg1;
- (void*)personForImageDataExcludingPeople:(id)arg1;
- (void)markImagesWith:(id)arg1 forPerson:(void*)arg2;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3 isRemoved:(BOOL*)arg4;
- (struct __CFDictionary { }*)currentImageData;
- (void)updateRecordImages;
- (void)resetImageData;
- (BOOL)didChangePreferredPersonForImage;
- (void)reloadImageData;
- (BOOL)hasImageChanges;
- (void)setImageData:(id)arg1 withFormat:(int)arg2 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 forPerson:(void*)arg4;
- (void)removeImageDataForPerson:(void*)arg1;
- (void)setPersonForImageData:(void*)arg1;
- (void)refreshImageData;
- (void)imageWillSave;
- (id)writablePeople;
- (BOOL)hasImageDataForPerson:(void*)arg1;
- (void*)personForImageData;
- (id)imageDataWithFormat:(int)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forPerson:(void*)arg3;
- (id)people;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (void)dealloc;

@end

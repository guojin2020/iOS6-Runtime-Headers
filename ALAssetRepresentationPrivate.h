/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class PLSidecarFile, NSString, ALAssetsLibrary, PLPhotoLibrary, PLManagedAsset;

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {
    ALAssetsLibrary *_library;
    PLManagedAsset *_photo;
    PLSidecarFile *_sidecar;
    NSString *_extension;
    BOOL _isValid;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain) PLSidecarFile * sidecar;
@property(copy) NSString * extension;
@property ALAssetsLibrary * library;
@property BOOL isValid;
@property(retain) PLManagedAsset * photo;
@property(retain) PLPhotoLibrary * _photoLibrary;

+ (void)_setupFileDescriptorQueue;
+ (void)_clearFileDescriptorQueue;
+ (int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2;
+ (int)_fileDescriptorForPersistentURL:(id)arg1;

- (id)library;
- (void)setLibrary:(id)arg1;
- (void)_performBlockAndWait:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)set_photoLibrary:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setSidecar:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)libraryWillDisappear;
- (id)_photoLibrary;
- (void)libraryDidChange;
- (id)sidecar;
- (id)extension;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;
- (id)photo;
- (void)dealloc;
- (BOOL)isValid;
- (BOOL)_isImage;
- (BOOL)_isVideo;

@end
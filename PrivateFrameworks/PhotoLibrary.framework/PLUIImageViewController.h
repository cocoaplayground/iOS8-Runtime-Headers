/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLImageLoadingQueue, NSString, NSURL, UIImage, PLManagedAsset, PLVideoRemaker, PLCropOverlay, PLVideoView, PLImageSource, PLImageCache, PLPhotoTileViewController;

@interface PLUIImageViewController : UIViewController <PLVideoViewDelegate, PLImageLoadingQueueDelegate, PLPhotoTileViewControllerDelegate> {
    PLManagedAsset *_photo;
    struct CGImage { } *_imageRef;
    UIImage *_image;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _cropRect;
    PLCropOverlay *_cropOverlay;
    PLPhotoTileViewController *_imageTile;
    PLVideoView *_videoView;
    PLVideoRemaker *_remaker;
    NSURL *_videoURL;
    PLImageCache *_imageCache;
    PLImageLoadingQueue *_imageLoadingQueue;
    PLImageSource *_imageSource;
    long long _previousStatusBarStyle;
    long long _newStatusBarStyle;
    unsigned int _allowEditing : 1;
    unsigned int _statusBarWasHidden : 1;
    unsigned int _isVideo : 1;
    unsigned int _isDisappearing : 1;
    unsigned int _remaking : 1;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (void)videoViewDidPausePlayback:(id)arg1 didFinish:(bool)arg2;
- (void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (void)setCropOverlayDone;
- (id)cropOverlay;
- (id)initWithImage:(struct CGImage { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithPhoto:(id)arg1;
- (id)_trimMessage;
- (void)attachScrubberPalette;
- (void)_enableCropOverlayIfNecessary;
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;
- (long long)desiredStatusBarAnimation;
- (bool)wantsStatusBarVisible;
- (void)_editabilityChanged:(id)arg1;
- (void)_updateGestureSettings;
- (bool)clientIsWallpaper;
- (unsigned long long)_tileAutoresizingMask;
- (void)setupNavigationItem;
- (unsigned long long)_contentAutoresizingMask;
- (Class)_viewClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrame;
- (int)cropOverlayMode;
- (id)useButtonTitle;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (bool)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(bool)arg2;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (bool)videoViewCanBeginPlayback:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
- (bool)photoTileViewControllerAllowsEditing:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewController:(id)arg1 didDisappear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 didAppear:(bool)arg2;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (id)initWithVideoURL:(id)arg1;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4;
- (int)imageFormat;
- (void)dealloc;
- (void)setAllowsEditing:(bool)arg1;
- (bool)_displaysFullScreen;
- (id)initWithUIImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_removedAsTopViewController;
- (long long)_imagePickerStatusBarStyle;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)loadView;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSArray, NSObject<OS_xpc_object>;

@interface PLGatekeeperClient : NSObject  {
    NSObject<OS_dispatch_queue> *_serialReplyQueue;
    NSArray *_previewRenderedContentURLs;
    NSObject<OS_xpc_object> *connection;
    NSArray *_previewAssetLocalIdentifiers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _CPLDownloadTransactionsLostHandler;

}

@property(readonly) NSObject<OS_dispatch_queue> * replyQueue;
@property(readonly) unsigned long long previewRenderedContentURLCount;
@property(retain) NSArray * previewAssetLocalIdentifiers;
@property NSObject<OS_xpc_object> * connection;
@property(copy) id CPLDownloadTransactionsLostHandler;

+ (id)securityPolicyErrorForMissingEntitlement:(id)arg1;
+ (id)sharedInstance;

- (void)setCPLDownloadTransactionsLostHandler:(id)arg1;
- (id)getCPLState;
- (void)setPreviewAssetLocalIdentifiers:(id)arg1;
- (id)previewAssetLocalIdentifiers;
- (id)previewRenderedContentURLAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewRenderedContentURLCount;
- (void)setPreviewRenderedContentURLs:(id)arg1;
- (id)cacheDeleteDebug:(id)arg1;
- (void)privateDownloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3;
- (void)downloadCloudPhotoLibraryAsset:(id)arg1 resourceType:(unsigned long long)arg2 highPriority:(bool)arg3;
- (void)addLogMark:(id)arg1;
- (bool)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;
- (id)getKeywordsForAssetWithUUID:(id)arg1;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (void)removeLocalDuplicates;
- (void)dumpCloudPhotosStatusIncludingDaemon:(bool)arg1;
- (void)unpauseCloudPhotos;
- (void)pauseCloudPhotos;
- (void)enableCloudPhotos:(bool)arg1;
- (id)dictionaryWithContentsOfMediaFilePath:(id)arg1;
- (void)softResetSyncStatusWithCompletionHandler:(id)arg1;
- (void)syncWithCloudPhotoLibrary;
- (int)getCurrentModelVersion;
- (void)downloadAsset:(id)arg1 requestThumbnail:(bool)arg2 shouldPrioritize:(bool)arg3 shouldExtendTimer:(bool)arg4;
- (void)rebuildAllThumbnails;
- (void)resetDupesAnalysis;
- (void)rebuildCloudFeed;
- (void)getNonLocalResourceInfo:(id)arg1;
- (void)getSearchIndexProgress:(id)arg1;
- (void)setSearchIndexPaused:(bool)arg1 andWait:(bool)arg2;
- (void)dropSearchIndexWithCompletion:(id)arg1;
- (void)analyzeMomentListID:(id)arg1;
- (void)analyzeMomentID:(id)arg1;
- (void)analyzeInvalidMomentsAndDupesIfNeeded;
- (void)clearUserInfluencedMoments;
- (id)allMomentsMetadataWithOutputPath:(id)arg1;
- (id)dumpMetadataForMomentsWithOutputPath:(id)arg1;
- (void)analyzeAllMoments;
- (void)rebuildMomentLists;
- (void)rebuildMomentsIncremental:(bool)arg1;
- (void)reloadMomentGenerationOptions;
- (void)deleteExpiredTrashBinObjects;
- (void)automaticallyDeleteEmptyAlbum:(id)arg1;
- (void)setPersonInfoDictionary:(id)arg1 forPersonID:(id)arg2;
- (id)personInfoDictionaryForPersonID:(id)arg1;
- (id)emailAddressForKey:(int)arg1;
- (int)keyForEmailAddress:(id)arg1;
- (unsigned long long)attemptToPurgeSharedAssetsSpace:(unsigned long long)arg1;
- (unsigned long long)purgeableSharedAssetsSpace;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)sendDaemonJob:(id)arg1 replyHandler:(id)arg2;
- (void)cleanupForStoreDemoMode;
- (void)clearAllBulletinsWithLastClearedRecordID:(unsigned long long)arg1;
- (id)getThumbnailImageDataForBulletinWithRecordID:(unsigned long long)arg1;
- (long long)getCurrentApplicationBadgeCount;
- (id)getCurrentBulletins;
- (void)repairSingletonObjects;
- (void)createPhotostreamAlbumWithStreamID:(id)arg1;
- (void)enablePhotostreamsWithStreamID:(id)arg1;
- (void)recoverFromCrashIfNeeded;
- (void)clearChangeStore;
- (bool)hasCompletedMomentAnalysis;
- (id)incompleteRestoreProcesses;
- (bool)hasCompletedRestorePostProcessing;
- (void)recalculateCachedAlbumCounts;
- (void)notifyAboutTerminationDueToUncaughtException:(id)arg1;
- (void)writeDataInBackground:(id)arg1 toFileURL:(id)arg2;
- (void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2;
- (void)finalizeOTARestoreRecreatingAlbums:(bool)arg1;
- (void)updateModelAfterOTARestore;
- (void)updateCameraPreviewWellImage:(id)arg1;
- (void)updateThumbnailsForPhotos:(id)arg1 waitForReply:(bool)arg2 assignNewIndex:(bool)arg3 forceRefresh:(bool)arg4;
- (void)setLargePreviewImageForAssetWithURL:(id)arg1 imageData:(id)arg2 properties:(id)arg3 handler:(id)arg4;
- (void)launchAssetsd;
- (void)importFileSystemAssetsWaitingForReply:(bool)arg1;
- (void)createPhotoLibraryDatabase;
- (void)setExternalUsageIntent:(unsigned long long)arg1 forAssetWithURL:(id)arg2 handler:(id)arg3;
- (void)deleteAssetWithURL:(id)arg1 handler:(id)arg2;
- (void)addAssetWithURL:(id)arg1 toAlbumWithUUID:(id)arg2 handler:(id)arg3;
- (void)addGroupWithName:(id)arg1 handler:(id)arg2;
- (void)cancelCPLDownloadWithContext:(id)arg1;
- (void)updateStatusOfCPLDownloadWithContext:(id)arg1;
- (void)revertToOriginalForAsset:(id)arg1;
- (void)requestAdjustmentDataForAsset:(id)arg1 withDataBlob:(bool)arg2 networkAccessAllowed:(bool)arg3 trackCPLDownload:(bool)arg4 handler:(id)arg5;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(bool)arg3 streamingAllowed:(bool)arg4 trackCPLDownload:(bool)arg5 handler:(id)arg6;
- (void)requestImageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 handler:(id)arg7;
- (id)imageDataForAsset:(id)arg1 format:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8;
- (id)fileURLForNewAssetWithType:(unsigned int)arg1 extension:(id)arg2;
- (void)updateLocationDataForAssetUUID:(id)arg1;
- (void)batchSaveAssetsWithJobDictionaries:(id)arg1 handler:(id)arg2;
- (void)saveAssetWithJobDictionary:(id)arg1 handler:(id)arg2 imageSurface:(void*)arg3 previewImageSurface:(void*)arg4;
- (int)fileDescriptorForAssetURL:(id)arg1;
- (void)requestAccessWithHandler:(id)arg1;
- (void)waitUntilConnectionSendsAllMessages;
- (id)deviceSpecificReplyQueue;
- (int)fileDescriptorForAssetURL:(id)arg1 withAdjustments:(bool)arg2 outFileExtension:(id*)arg3;
- (id)CPLDownloadTransactionsLostHandler;
- (id)sendQueue;
- (id)replyQueue;
- (long long)estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
- (void)getLibrarySizes:(id)arg1;
- (void)dataMigrationWillFinish;
- (void)repairPotentialModelCorruption;
- (void)cleanupModelAfteriTunesRestore;
- (unsigned long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)getPhotosAndVideosCountWithHandler:(id)arg1;
- (id)fileURLForAssetURL:(id)arg1 withAdjustments:(bool)arg2;
- (id)connection;
- (id)init;
- (void)setConnection:(id)arg1;
- (void)dealloc;

@end

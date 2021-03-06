/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString, NSDate;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob  {
    bool_albumHasUnseenContent;
    bool_assetCollectionHasUnreadComments;
    long long _jobType;
    NSString *_albumGUID;
    long long _albumUnviewedAssetCount;
    NSString *_assetCollectionGUID;
    NSDate *_assetCollectionLastViewedCommentDate;
}

@property long long jobType;
@property(retain) NSString * albumGUID;
@property bool albumHasUnseenContent;
@property long long albumUnviewedAssetCount;
@property(retain) NSString * assetCollectionGUID;
@property bool assetCollectionHasUnreadComments;
@property(retain) NSDate * assetCollectionLastViewedCommentDate;

+ (void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3;
+ (void)markAssetCollection:(id)arg1 asHavingUnreadComments:(bool)arg2 inAlbum:(id)arg3;
+ (void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2;
+ (void)markAlbum:(id)arg1 asHavingUnseenContent:(bool)arg2;

- (void)setAlbumGUID:(id)arg1;
- (id)albumGUID;
- (void)setAssetCollectionGUID:(id)arg1;
- (id)assetCollectionGUID;
- (void)_executeAssetLastViewedCommentDateChangedWithGroup;
- (void)_executeAssetCommentsReadStateChangedWithGroup;
- (void)_executeAlbumUnviewedAssetCountChangedWithGroup;
- (void)_executeAlbumViewedStateChanged;
- (id)assetCollectionLastViewedCommentDate;
- (bool)assetCollectionHasUnreadComments;
- (long long)albumUnviewedAssetCount;
- (bool)albumHasUnseenContent;
- (void)setAssetCollectionLastViewedCommentDate:(id)arg1;
- (void)setAssetCollectionHasUnreadComments:(bool)arg1;
- (void)setAlbumUnviewedAssetCount:(long long)arg1;
- (void)setAlbumHasUnseenContent:(bool)arg1;
- (void)setJobType:(long long)arg1;
- (long long)jobType;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)run;
- (void)dealloc;
- (id)description;

@end

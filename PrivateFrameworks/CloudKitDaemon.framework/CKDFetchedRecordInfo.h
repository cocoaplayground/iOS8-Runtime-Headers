/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSError, CKRecord;

@interface CKDFetchedRecordInfo : NSObject  {
    CKRecord *_record;
    NSError *_error;
}

@property(retain) CKRecord * record;
@property(retain) NSError * error;

+ (id)infoWithRecord:(id)arg1;
+ (id)infoWithRecord:(id)arg1 error:(id)arg2;

- (void)setRecord:(id)arg1;
- (id)record;
- (void)setError:(id)arg1;
- (id)error;
- (void).cxx_destruct;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSThread, NSString;

@interface GEORequester : PBRequester  {
    bool_disableReplay;
    NSThread *_thread;
    bool_usePersistentConnection;
    bool_useBackgroundConnection;
    NSString *_debugRequestName;
}

@property bool disableReplay;
@property(retain) NSString * debugRequestName;

+ (void)stopAllRequests;
+ (void)replayRequests;
+ (void)setOSVersion:(id)arg1;
+ (void)setAppID:(id)arg1;
+ (void)enablePersistentConnection;
+ (void)setLogRequestResponseDirectory:(id)arg1;
+ (id)_logRequestResponseDirectory;

- (void)setDisableReplay:(bool)arg1;
- (id)persistentConnectionSession;
- (id)debugRequestName;
- (void)startWithConnectionProperties:(id)arg1;
- (void)_handleResumeOnThread;
- (bool)disableReplay;
- (void)_handleSuspendOnThread;
- (void)_applicationWantsToReplayRequests:(id)arg1;
- (void)_applicationDidStopAllRequests:(id)arg1;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2;
- (void)setDebugRequestName:(id)arg1;
- (id)initWithURL:(id)arg1 andDelegate:(id)arg2 useBackgroundConnection:(bool)arg3;
- (void)_logResponsesIfNecessary:(id)arg1;
- (id)logResponseToFile;
- (void)_logErrorIfNecessary:(id)arg1;
- (void)_logRequestsIfNecessary:(id)arg1;
- (id)logRequestToFile;
- (id)requestPreamble;
- (id)newConnectionWithCFURLRequest:(struct _CFURLRequest { }*)arg1 delegate:(id)arg2;
- (struct _CFURLRequest { }*)newCFMutableURLRequestWithURL:(id)arg1;
- (void)start;
- (void)dealloc;

@end

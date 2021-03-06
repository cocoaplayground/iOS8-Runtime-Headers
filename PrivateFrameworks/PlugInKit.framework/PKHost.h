/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class NSMutableDictionary, NSDictionary, PKDaemonClient, NSObject<OS_dispatch_queue>;

@interface PKHost : NSObject  {
    NSDictionary *_hostInfoPlist;
    NSMutableDictionary *_activePlugIns;
    NSObject<OS_dispatch_queue> *_hostQueue;
    PKDaemonClient *_client;
}

@property(retain) NSMutableDictionary * activePlugIns;
@property(retain) NSObject<OS_dispatch_queue> * hostQueue;
@property(retain) PKDaemonClient * client;
@property(readonly) NSDictionary * hostInfoPlist;

+ (id)defaultHost;

- (void)cancelPlugInDiscovery:(id)arg1;
- (id)continuouslyDiscoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id)arg3;
- (void)discoverPlugInsForAttributes:(id)arg1 flags:(unsigned long long)arg2 found:(id)arg3;
- (void)setClient:(id)arg1;
- (id)hostInfoPlist;
- (id)activePlugInForIdentifier:(id)arg1;
- (id)hostQueue;
- (id)activePlugIns;
- (id)rewriteDiscoveryAttributes:(id)arg1 flags:(unsigned long long)arg2;
- (void)setActivePlugIns:(id)arg1;
- (void)setHostQueue:(id)arg1;
- (void)deactivatePlugIn:(id)arg1;
- (void)readyPlugIns:(id)arg1 ready:(id)arg2;
- (void)accessPlugIns:(id)arg1 flags:(unsigned long long)arg2 extensions:(id)arg3;
- (void)activatePlugIn:(id)arg1;
- (void)setExtensionState:(id)arg1 forPlugIn:(id)arg2;
- (void)setElection:(long long)arg1 forPlugIn:(id)arg2;
- (id)init;
- (id)client;
- (void).cxx_destruct;

@end

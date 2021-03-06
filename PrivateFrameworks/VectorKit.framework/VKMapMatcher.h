/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <GEORoutePreloadSession>, NSString, GEOMapAccess;

@interface VKMapMatcher : NSObject <GEOMapAccessRestrictions> {
    GEOMapAccess *_map;
    <GEORoutePreloadSession> *_routePreloader;
}

@property(retain) <GEORoutePreloadSession> * routePreloader;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) bool allowsNetworkTileLoad;

+ (id)mapMatcherOfType:(id)arg1;

- (void)setRoutePreloader:(id)arg1;
- (id)routePreloader;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)tilesAround:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)allowsNetworkTileLoad;
- (id)init;
- (void)dealloc;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSTimer, NSData, <GEOETAUpdaterDelegate>, GEOComposedRoute, GEORouteAttributes, GEOETATrafficUpdateRequest, GEOComposedWaypoint, GEOLocation, GEORouteMatch;

@interface GEOETAUpdater : NSObject  {
    <GEOETAUpdaterDelegate> *_delegate;
    GEOETATrafficUpdateRequest *_currentETARequest;
    GEOLocation *_userLocation;
    GEORouteMatch *_routeMatch;
    GEOComposedRoute *_route;
    GEOComposedWaypoint *_destination;
    GEORouteAttributes *_routeAttributes;
    long long _etaState;
    bool_allowRequests;
    bool_shouldUseConditionalRequest;
    double _requestInterval;
    NSTimer *_etaIdleTimer;
    double _lastETARequestTime;
    double _debugTimeWindowDuration;
    NSData *_directionsResponseID;
}

@property <GEOETAUpdaterDelegate> * delegate;
@property(retain) GEOComposedRoute * route;
@property(retain) GEORouteMatch * routeMatch;
@property(retain) GEOLocation * userLocation;
@property(retain) GEOComposedWaypoint * destination;
@property(retain) GEORouteAttributes * routeAttributes;
@property(retain) NSData * directionsResponseID;
@property bool allowRequests;
@property bool shouldUseConditionalRequest;
@property double requestInterval;
@property double debugTimeWindowDuration;


- (id)userLocation;
- (void)setDebugTimeWindowDuration:(double)arg1;
- (double)debugTimeWindowDuration;
- (void)setRequestInterval:(double)arg1;
- (double)requestInterval;
- (void)setShouldUseConditionalRequest:(bool)arg1;
- (bool)shouldUseConditionalRequest;
- (void)setAllowRequests:(bool)arg1;
- (bool)allowRequests;
- (void)stopUpdateRequests;
- (void)startUpdateRequests;
- (id)initWithRoute:(id)arg1 destination:(id)arg2 routeAttributes:(id)arg3;
- (bool)_updateRouteWithETATrafficUpdateResponse:(id)arg1;
- (void)_startStateWaitingForBestTimeStart:(id)arg1;
- (double)_calculateNextTransitionTime;
- (bool)updateRouteWithETATrafficUpdateResponse:(id)arg1 step:(id)arg2 percentOfStepRemaining:(double)arg3;
- (bool)_updateETAResponse:(id)arg1 withRemainingDistanceFromRequest:(id)arg2;
- (id)routesForETAUpdateRequest;
- (double)percentageOfCurrentStepRemaining;
- (id)currentStep;
- (void)_startConditionalConnectionETARequest;
- (bool)_shouldStartConditionalETARequest;
- (void)_updateCurrentETARequest;
- (bool)_sendETARequest:(id)arg1 isUpdate:(bool)arg2;
- (void)_createETARequest;
- (void)_continueUpdateRequests;
- (void)_clearCurrentETARequest;
- (void)_clearTimer;
- (void)requestUpdate;
- (id)routeAttributes;
- (void)setRouteAttributes:(id)arg1;
- (id)routeMatch;
- (void)setRouteMatch:(id)arg1;
- (void)setUserLocation:(id)arg1;
- (id)directionsResponseID;
- (void)setDirectionsResponseID:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)destination;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)reset;
- (void)setDestination:(id)arg1;

@end

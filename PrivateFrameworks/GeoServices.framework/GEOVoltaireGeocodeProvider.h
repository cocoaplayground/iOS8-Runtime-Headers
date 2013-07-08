/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEORequester;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {
    GEORequester *_requester;
    BOOL _isForwardGeocodeRequest;
    BOOL _isBatchRequest;
    BOOL _cancelled;
}

+ (id)batchReverseGeocoderURL;
+ (id)reverseGeocoderURL;
+ (id)forwardGeocoderURL;
+ (id)providerName;
+ (unsigned short)provider;
+ (void)setUsePersistentConnection:(BOOL)arg1;

- (void)_singleRequesterDidFinish:(id)arg1;
- (void)_batchRequesterDidFinish:(id)arg1;
- (id)newRequester:(id)arg1;
- (void)batchReverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;
- (void)reverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)dealloc;
- (void)cancel;

@end
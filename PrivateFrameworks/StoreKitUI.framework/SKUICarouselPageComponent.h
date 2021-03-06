/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, SKUICarouselViewElement, NSString;

@interface SKUICarouselPageComponent : SKUIPageComponent <SSMetricsEventFieldProvider> {
    NSArray *_carouselItems;
    double _cycleInterval;
    long long _missingItemCount;
}

@property(readonly) SKUICarouselViewElement * viewElement;
@property(readonly) double cycleInterval;
@property(readonly) NSArray * carouselItems;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (double)cycleInterval;
- (id)carouselItems;
- (void)updateWithMissingItems:(id)arg1;
- (id)metricsElementName;
- (bool)isMissingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(long long)arg1 usingBlock:(id)arg2;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;
- (id)initWithViewElement:(id)arg1;
- (long long)componentType;
- (id)valueForMetricsField:(id)arg1;
- (void).cxx_destruct;

@end

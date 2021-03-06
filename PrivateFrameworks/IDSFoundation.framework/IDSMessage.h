/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class NSNumber, NSDictionary;

@interface IDSMessage : IDSBaseMessage <NSCopying> {
    NSNumber *_wantsDeliveryStatus;
    NSDictionary *_deliveryStatusContext;
    NSNumber *_version;
}

@property(copy) NSNumber * wantsDeliveryStatus;
@property(copy) NSDictionary * deliveryStatusContext;
@property(copy) NSNumber * version;


- (id)messageBody;
- (void)setDeliveryStatusContext:(id)arg1;
- (id)deliveryStatusContext;
- (void)setWantsDeliveryStatus:(id)arg1;
- (id)wantsDeliveryStatus;
- (id)userAgentHeaderString;
- (bool)wantsUserAgentInHeaders;
- (bool)wantsHTTPHeaders;
- (bool)wantsAPSRetries;
- (id)version;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVersion:(id)arg1;

@end

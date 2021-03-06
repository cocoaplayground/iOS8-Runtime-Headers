/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentCalendar, NSString, NSDate;

@interface EKPersistentInviteReplyNotification : EKPersistentObject  {
}

@property(readonly) EKPersistentCalendar * calendar;
@property(readonly) NSString * calendarName;
@property(readonly) NSString * shareeDisplayName;
@property(readonly) NSString * shareeAddress;
@property(readonly) NSString * shareeFirstName;
@property(readonly) NSString * shareeLastName;
@property(readonly) int status;
@property(readonly) NSDate * creationDate;
@property(readonly) bool alerted;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (id)shareeLastName;
- (id)shareeFirstName;
- (id)shareeAddress;
- (id)shareeDisplayName;
- (id)calendarName;
- (bool)alerted;
- (id)creationDate;
- (int)status;
- (id)calendar;

@end

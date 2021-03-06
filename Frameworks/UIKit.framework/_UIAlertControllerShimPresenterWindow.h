/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIWindow  {
    UIAlertController *_alertController;
}

@property(retain,readonly) UIAlertController * alertController;

+ (bool)_isSystemWindow;

- (id)init;
- (void)dealloc;
- (id)_presentationViewController;
- (void)presentAlertController:(id)arg1 animated:(bool)arg2 completionBlock:(id)arg3;
- (id)alertController;

@end

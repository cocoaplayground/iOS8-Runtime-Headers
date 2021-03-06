/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIPluginControllerHost>;

@interface SBUIPluginController : NSObject <SBPluginBundleController> {
    <SBUIPluginControllerHost> *_host;
    bool_isVisible;
}

@property <SBUIPluginControllerHost> * host;
@property(getter=isVisible) bool visible;


- (void)handleViewFullyRevealed;
- (void)viewPartiallyRevealedWithPercentRevealed:(double)arg1;
- (id)viewControllerForActivationContext:(id)arg1;
- (bool)handledButtonTapFromSource:(int)arg1;
- (bool)handledButtonUpEventFromSource:(int)arg1;
- (bool)handledButtonDownEventFromSource:(int)arg1;
- (bool)handledWiredMicButtonTap;
- (void)handlePreheatCommand;
- (void)handleBluetoothDismissal;
- (bool)handledPasscodeUnlockWithCompletion:(id)arg1;
- (bool)handleActivationEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3;
- (void)cancelPendingActivationEvent:(int)arg1;
- (void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3;
- (bool)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3;
- (bool)supportedAndEnabled;
- (void)registeredWithHost;
- (bool)handledMenuButtonTap;
- (bool)handledMenuButtonUpEvent;
- (bool)handledMenuButtonDownEvent;
- (bool)isVisible;
- (void)setHost:(id)arg1;
- (void)setVisible:(bool)arg1;
- (id)host;

@end

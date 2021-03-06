/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@class <TUAudioPlayerDelegateProtocol>;

@interface TUAudioPlayer : NSObject  {
    <TUAudioPlayerDelegateProtocol> *_delegate;
}

@property <TUAudioPlayerDelegateProtocol> * delegate;
@property(readonly) bool playingSound;


- (void)stop;
- (bool)playingSound;
- (void)playSound:(int)arg1 numOfLoops:(int)arg2 pauseDuration:(double)arg3;
- (void)playSelectedSound;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;

@end

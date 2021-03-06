/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, CADisplayLink, NSOperation, UITextRange;

@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory> {
    UITextRange *_range;
    id _placeholder;
    bool_didHaveText;
    bool_willInsertResult;
    double _angle;
    double _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    bool_shrinking;
    NSOperation *_afterShrinkCompletionInvocation;
}

@property bool willInsertResult;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)sharedInstance;
+ (double)diameterForLineHeight:(double)arg1;
+ (double)widthForLineHeight:(double)arg1;
+ (id)activeInstance;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (bool)willInsertResult;
- (void)errorShakeDidFinish;
- (void)shrinkWithCompletion:(id)arg1;
- (void)showCursor;
- (void)hideCursor;
- (void)startDisplayLinkIfNecessary;
- (void)advanceLanding:(id)arg1;
- (void)rotateBy:(double)arg1;
- (void)clearRotation;
- (void)setWillInsertResult:(bool)arg1;
- (void)stopLanding;
- (void)stopLandingForError;
- (void)startLandingIfNecessary;
- (void)updatePosition;
- (double)fadeOutDuration;
- (bool)delegateWasEmpty;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;

@end

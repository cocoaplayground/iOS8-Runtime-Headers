/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<SKButtonNodeDelegate>, SKAction;

@interface SKButtonNode : SKLabelNode  {
    NSObject<SKButtonNodeDelegate> *_delegate;
    SKAction *_downAction;
    SKAction *_upAction;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _downBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _upBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _upInsideBlock;

    int _touches;
}

@property NSObject<SKButtonNodeDelegate> * delegate;
@property(retain) SKAction * downAction;
@property(retain) SKAction * upAction;

+ (id)buttonWithFontNamed:(id)arg1;

- (id)upAction;
- (id)downAction;
- (void)onTouchDownInside:(id)arg1;
- (void)onTouchUp:(id)arg1;
- (void)onTouchUpInside:(id)arg1;
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (void)setUpAction:(id)arg1;
- (void)setDownAction:(id)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

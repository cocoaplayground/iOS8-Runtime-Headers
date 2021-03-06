/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class CALayer, _SLSheetMaskLayer, UIColor;

@interface SLSheetMasklayer : CALayer  {
    CALayer *_topLayer;
    CALayer *_leftLayer;
    CALayer *_bottomLayer;
    CALayer *_rightLayer;
    _SLSheetMaskLayer *_sheetMaskLayer;
    CALayer *_solidSheetMaskLayer;
    UIColor *_backgroundColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _lastBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _lastMaskRect;
    double _clipCornerRadius;
    UIColor *_clipBackgroundColor;
}

@property double clipCornerRadius;
@property(retain) UIColor * clipBackgroundColor;


- (void)animateSheetMaskFromOldSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toSheetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)restoreSheetCutout;
- (void)removeSheetCutout;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;
- (void)updateMaskWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 maskRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setClipBackgroundColor:(id)arg1;
- (void)setClipCornerRadius:(double)arg1;
- (id)clipBackgroundColor;
- (double)clipCornerRadius;
- (void)removeAllAnimations;
- (void).cxx_destruct;

@end

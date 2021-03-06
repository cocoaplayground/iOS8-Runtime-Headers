/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMultiPoint : MKShape  {
    struct { double x1; double x2; } *_points;
    unsigned long long _pointCount;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _boundingRect;
}

@property(readonly) unsigned long long pointCount;


- (void)getCoordinates:(struct { double x1; double x2; }*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_calculateBounds;
- (void)_setBounds:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setCoordinates:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)_setPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (bool)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (void)_assignPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (struct { double x1; double x2; }*)points;
- (unsigned long long)pointCount;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;

@end

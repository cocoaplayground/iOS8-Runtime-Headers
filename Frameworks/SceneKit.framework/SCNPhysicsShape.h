/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDictionary, NSArray;

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding> {
    id _reserved;
    id _referenceObject;
    NSDictionary *_options;
    NSArray *_transforms;
    void *_cachedObject;
    struct btCollisionShape { int (**x1)(); int x2; void *x3; } *_collisionShape;
}

+ (id)defaultShapeForGeometry:(id)arg1;
+ (id)shapeWithShapes:(id)arg1 transforms:(id)arg2;
+ (id)shapeWithNode:(id)arg1 options:(id)arg2;
+ (id)shapeWithGeometry:(id)arg1 options:(id)arg2;
+ (id)SCNJSExportProtocol;
+ (bool)supportsSecureCoding;

- (id)initWithCachedObject:(void*)arg1 options:(id)arg2;
- (void)_setTransforms:(id)arg1;
- (id)initWithContent:(id)arg1 options:(id)arg2;
- (struct btCollisionShape { int (**x1)(); int x2; void *x3; }*)_handle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

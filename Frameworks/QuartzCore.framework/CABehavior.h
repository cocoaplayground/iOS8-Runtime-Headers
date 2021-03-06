/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSCoding, NSCopying> {
    void *_attr;
    unsigned int _refcount;
    unsigned int _uid;
    void *_priv;
}

@property(getter=isEnabled) bool enabled;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;

+ (int (*)())CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (int (*)())CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x1; SEL x2[2]; unsigned int x3 : 16; unsigned int x4 : 16; char *x5; struct __CFString {} *x6; }*)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)behavior;

- (void)setName:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (bool)isEnabled;
- (void)setStyle:(id)arg1;
- (void)_setCARenderBehavior:(struct Behavior { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Ref<CA::Render::String> { struct String {} *x_4_1_1; } x4; unsigned int x5; unsigned int x6; unsigned int x7 : 8; unsigned int x8 : 8; struct Ref<const CA::Render::Behavior> { struct Behavior {} *x_9_1_1; } x9; }*)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)style;
- (id)init;
- (id)debugDescription;
- (void)setDelegate:(id)arg1;
- (id)name;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)allowsWeakReference;
- (bool)retainWeakReference;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end

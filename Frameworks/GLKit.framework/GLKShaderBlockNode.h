/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/GLKit.framework/GLKit
 */

@class NSString, GLKShaderBlockNode, NSMutableString;

@interface GLKShaderBlockNode : NSObject <NSXMLParserDelegate, NSCopying> {
    struct GLKBigInt_s { 
        unsigned long long n0; 
        unsigned long long n1; 
    } _mask;
    GLKShaderBlockNode *_parent;
    GLKShaderBlockNode *_next;
    GLKShaderBlockNode *_children;
    NSString *_label;
    NSString *_loopVar;
    int _type;
    int _unrollCt;
    unsigned int _index;
    NSMutableString *_blockText;
    int _propertyClass;
    bool_indexedMask;
}

@property(copy) NSString * label;
@property(copy) NSString * loopVar;
@property(retain) NSMutableString * blockText;
@property GLKShaderBlockNode * parent;
@property GLKShaderBlockNode * next;
@property GLKShaderBlockNode * children;
@property int type;
@property struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; } mask;
@property int unrollCt;
@property unsigned int index;
@property int propertyClass;
@property bool indexedMask;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (void)printTreeVerbose:(id)arg1;
+ (void)printTree:(id)arg1;
+ (unsigned int)nodeCt:(id)arg1 nodeCt:(unsigned int*)arg2;
+ (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })maskForLabel:(id)arg1 root:(id)arg2 index:(int)arg3;
+ (void)insertNode:(id)arg1 afterSibling:(id)arg2;
+ (void)setIndicesForRoot:(id)arg1 andReplaceLoopVar:(id)arg2 baseLabel:(id)arg3 basePropertyClass:(int)arg4 usingIndex:(unsigned int)arg5 indexString:(id)arg6;
+ (id)copyTreeWithRootButNotSiblings:(id)arg1 parent:(id)arg2;
+ (void)buildUnrollNodeArray:(id)arg1 array:(id)arg2;
+ (id)copyTreeWithRoot:(id)arg1 parent:(id)arg2;
+ (void)setMasksWithRoot:(id)arg1 treeRoot:(id)arg2 mask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)arg3;

- (void)setChildren:(id)arg1;
- (void)setLoopVar:(id)arg1;
- (void)setBlockText:(id)arg1;
- (void)setIndexedMask:(bool)arg1;
- (bool)indexedMask;
- (void)setUnrollCt:(int)arg1;
- (id)blockText;
- (id)loopVar;
- (void)setPropertyClass:(int)arg1;
- (int)propertyClass;
- (int)unrollCt;
- (void)setNext:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (unsigned int)index;
- (void)setParent:(id)arg1;
- (void)setMask:(struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })arg1;
- (id)label;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; })mask;
- (id)init;
- (void)setType:(int)arg1;
- (int)type;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)parent;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)setLabel:(id)arg1;
- (id)next;
- (id)children;

@end

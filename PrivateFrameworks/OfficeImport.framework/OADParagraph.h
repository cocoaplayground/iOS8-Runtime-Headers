/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject  {
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}


- (id)addSlideNumberField;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (unsigned long long)characterCount;
- (void)applyProperties:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)removeUnnecessaryOverrides;
- (id)bulletCharacterProperties;
- (bool)hasBulletCharacterProperties;
- (void)setParagraphEndCharacterProperties:(id)arg1;
- (id)addFooterField;
- (void)removeAllTextRuns;
- (id)addGenericTextField;
- (id)addDateTimeField;
- (id)addTextLineBreak;
- (id)addRegularTextRun;
- (id)paragraphEndCharacterProperties;
- (id)textRunAtIndex:(unsigned long long)arg1;
- (unsigned long long)textRunCount;
- (id)plainText;
- (id)init;
- (bool)isEmpty;
- (id)properties;
- (void)dealloc;

@end

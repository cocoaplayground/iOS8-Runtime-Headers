/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@class NSString, NSMutableString, NSMutableSet, NSArray;

@interface IKXMLErrorHandlerContext : NSObject  {
    NSMutableString *_mutableErrorMessages;
    NSMutableSet *_mutableParserErrors;
}

@property(readonly) NSString * errorMessage;
@property(readonly) NSArray * parserErrors;
@property(retain) NSMutableString * mutableErrorMessages;
@property(retain) NSMutableSet * mutableParserErrors;


- (void)setMutableParserErrors:(id)arg1;
- (void)setMutableErrorMessages:(id)arg1;
- (id)mutableParserErrors;
- (id)mutableErrorMessages;
- (id)errorMessage;
- (id)parserErrors;
- (void)clear;
- (id)init;
- (void).cxx_destruct;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray;

@interface NSBlockOperation : NSOperation  {
    id _private2;
    void *_reserved2;
}

@property(copy,readonly) NSArray * executionBlocks;

+ (id)blockOperationWithBlock:(id)arg1;

- (void)main;
- (id)init;
- (void)addExecutionBlock:(id)arg1;
- (id)initWithBlock:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)executionBlocks;

@end

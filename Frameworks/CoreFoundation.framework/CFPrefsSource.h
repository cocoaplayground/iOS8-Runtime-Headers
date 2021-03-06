/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSource : NSObject  {
    struct __CFDictionary { } *_dict;
    long long _generationCount;
    union { struct _CFPrefsShmemEntry { unsigned int x_1_1_1 : 31; unsigned int x_1_1_2 : 1; } x1; int x2; } *shmemEntry;
    struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } *_lock;
    union { 
        struct _CFPrefsShmemEntry { 
            unsigned int generation : 31; 
            unsigned int multiprocess : 1; 
        } entry; 
        int value; 
    } lastKnownShmemState;
}

+ (void)withNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1 perform:(id)arg2;
+ (void)withSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(bool)arg3 container:(struct __CFString { }*)arg4 perform:(id)arg5;

- (id)init;
- (struct __CFString { }*)container;
- (bool)isByHost;
- (struct __CFString { }*)domainIdentifier;
- (struct __CFString { }*)userIdentifier;
- (void)setAccessRestricted:(bool)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1;
- (void)clearCache;
- (bool)managed;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 error:(bool*)arg4;
- (id)createRequestNewContentMessageForDaemon:(bool)arg1;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (bool)synchronize;
- (bool)alreadylocked_requestNewData;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (void)removeAllValues;
- (void)setValues:(const void**)arg1 forKeys:(const void**)arg2 count:(long long)arg3;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (void)unlock;
- (void)alreadylocked_removeAllValues;
- (void)lock;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const void**)arg2 count:(long long)arg3;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)finalize;
- (void)dealloc;

@end

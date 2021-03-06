/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKPShieldIndexEntry : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _defaultForFeatureTypes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _shieldTypes;
    NSString *_artworkIdentifier;
}

@property(readonly) bool hasArtworkIdentifier;
@property(retain) NSString * artworkIdentifier;
@property(readonly) unsigned long long shieldTypesCount;
@property(readonly) int* shieldTypes;
@property(readonly) unsigned long long defaultForFeatureTypesCount;
@property(readonly) int* defaultForFeatureTypes;


- (void)setDefaultForFeatureTypes:(int*)arg1 count:(unsigned long long)arg2;
- (int*)defaultForFeatureTypes;
- (void)setShieldTypes:(int*)arg1 count:(unsigned long long)arg2;
- (bool)hasArtworkIdentifier;
- (void)addDefaultForFeatureType:(int)arg1;
- (void)clearDefaultForFeatureTypes;
- (void)addShieldTypes:(int)arg1;
- (int)shieldTypesAtIndex:(unsigned long long)arg1;
- (void)clearShieldTypes;
- (void)setArtworkIdentifier:(id)arg1;
- (int)defaultForFeatureTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultForFeatureTypesCount;
- (id)artworkIdentifier;
- (int*)shieldTypes;
- (unsigned long long)shieldTypesCount;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    } _attributionRequirements;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

@property(retain) NSString * sourceIdentifier;
@property unsigned int sourceVersion;
@property(retain) NSMutableArray * localizedAttributions;
@property(readonly) unsigned long long attributionRequirementsCount;
@property(readonly) int* attributionRequirements;
@property(retain) NSMutableArray * attributionApps;


- (id)bestLocalizedAttribution;
- (id)attributionApps;
- (id)localizedAttributions;
- (void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2;
- (int*)attributionRequirements;
- (id)attributionAppsAtIndex:(unsigned long long)arg1;
- (void)clearAttributionApps;
- (unsigned long long)attributionAppsCount;
- (void)addAttributionRequirements:(int)arg1;
- (int)attributionRequirementsAtIndex:(unsigned long long)arg1;
- (void)clearAttributionRequirements;
- (unsigned long long)attributionRequirementsCount;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;
- (void)clearLocalizedAttributions;
- (unsigned long long)localizedAttributionsCount;
- (void)addAttributionApps:(id)arg1;
- (void)addLocalizedAttribution:(id)arg1;
- (void)setAttributionApps:(id)arg1;
- (void)setLocalizedAttributions:(id)arg1;
- (void)setSourceVersion:(unsigned int)arg1;
- (unsigned int)sourceVersion;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)sourceIdentifier;
- (void)setSourceIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end

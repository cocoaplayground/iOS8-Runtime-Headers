/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSData;

@interface PFZipCentralDirectoryFileHeader : NSObject  {
    unsigned short _versionMadeBy;
    unsigned short _versionNeededToExtract;
    unsigned short _generalPurposeBit;
    unsigned short _compressionMethod;
    unsigned short _lastModTime;
    unsigned short _lastModDate;
    unsigned int _crc32;
    unsigned int _compressedSize;
    unsigned int _uncompressedSize;
    unsigned short _filenameLength;
    unsigned short _extraFieldLength;
    unsigned short _fileCommentLength;
    unsigned short _fileStartDiskNumber;
    unsigned short _internalFileAttrs;
    unsigned int _externalFileAttrs;
    unsigned int _localFileHeaderRelativeOffset;
    NSString *_filename;
    NSData *_extraFieldData;
    NSString *_fileComment;
}

@property unsigned short versionMadeBy;
@property unsigned short versionNeededToExtract;
@property unsigned short generalPurposeBit;
@property unsigned short compressionMethod;
@property unsigned short lastModTime;
@property unsigned short lastModDate;
@property unsigned int crc32;
@property unsigned int compressedSize;
@property unsigned int uncompressedSize;
@property(readonly) unsigned short filenameLength;
@property(readonly) unsigned short extraFieldLength;
@property(readonly) unsigned short fileCommentLength;
@property unsigned short fileStartDiskNumber;
@property unsigned short internalFileAttrs;
@property unsigned int externalFileAttrs;
@property unsigned int localFileHeaderRelativeOffset;
@property(retain) NSString * filename;
@property(retain) NSData * extraFieldData;
@property(retain) NSString * fileComment;


- (id)fileComment;
- (id)extraFieldData;
- (void)setLocalFileHeaderRelativeOffset:(unsigned int)arg1;
- (void)setExternalFileAttrs:(unsigned int)arg1;
- (unsigned int)externalFileAttrs;
- (void)setInternalFileAttrs:(unsigned short)arg1;
- (unsigned short)internalFileAttrs;
- (void)setFileStartDiskNumber:(unsigned short)arg1;
- (unsigned short)fileStartDiskNumber;
- (unsigned short)fileCommentLength;
- (unsigned short)extraFieldLength;
- (unsigned short)filenameLength;
- (void)setUncompressedSize:(unsigned int)arg1;
- (void)setCompressedSize:(unsigned int)arg1;
- (void)setCrc32:(unsigned int)arg1;
- (void)setLastModDate:(unsigned short)arg1;
- (unsigned short)lastModDate;
- (void)setLastModTime:(unsigned short)arg1;
- (unsigned short)lastModTime;
- (void)setCompressionMethod:(unsigned short)arg1;
- (void)setGeneralPurposeBit:(unsigned short)arg1;
- (unsigned short)generalPurposeBit;
- (void)setVersionNeededToExtract:(unsigned short)arg1;
- (unsigned short)versionNeededToExtract;
- (void)setVersionMadeBy:(unsigned short)arg1;
- (unsigned short)versionMadeBy;
- (void)appendToData:(id)arg1;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
- (void)setFileComment:(id)arg1;
- (void)setExtraFieldData:(id)arg1;
- (unsigned short)compressionMethod;
- (unsigned int)localFileHeaderRelativeOffset;
- (unsigned int)compressedSize;
- (unsigned int)uncompressedSize;
- (unsigned int)crc32;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setFilename:(id)arg1;
- (id)filename;

@end

/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDAirPlayScreenSessionEndedOnServer : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    unsigned int _audioLate;
    unsigned int _audioLost;
    unsigned int _audioUnrecovered;
    int _avgAhead;
    unsigned int _avgRTT;
    int _avgReceiveMs;
    unsigned int _caDrops;
    unsigned int _caFrames;
    unsigned int _clearScreens;
    unsigned int _configChanges;
    unsigned int _duration;
    unsigned int _forcedRefreshes;
    unsigned int _framesReceived;
    unsigned int _negativeAheadFrames;
    int _reason;
    unsigned int _resumes;
    NSString *_sessionUUID;
    unsigned int _suspends;
    unsigned int _unclearScreens;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioLate : 1; 
        unsigned int audioLost : 1; 
        unsigned int audioUnrecovered : 1; 
        unsigned int avgAhead : 1; 
        unsigned int avgRTT : 1; 
        unsigned int avgReceiveMs : 1; 
        unsigned int caDrops : 1; 
        unsigned int caFrames : 1; 
        unsigned int clearScreens : 1; 
        unsigned int configChanges : 1; 
        unsigned int duration : 1; 
        unsigned int forcedRefreshes : 1; 
        unsigned int framesReceived : 1; 
        unsigned int negativeAheadFrames : 1; 
        unsigned int reason : 1; 
        unsigned int resumes : 1; 
        unsigned int suspends : 1; 
        unsigned int unclearScreens : 1; 
    } _has;
}

@property(readonly) bool hasSessionUUID;
@property(retain) NSString * sessionUUID;
@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasReason;
@property int reason;
@property bool hasDuration;
@property unsigned int duration;
@property bool hasFramesReceived;
@property unsigned int framesReceived;
@property bool hasConfigChanges;
@property unsigned int configChanges;
@property bool hasClearScreens;
@property unsigned int clearScreens;
@property bool hasUnclearScreens;
@property unsigned int unclearScreens;
@property bool hasSuspends;
@property unsigned int suspends;
@property bool hasResumes;
@property unsigned int resumes;
@property bool hasForcedRefreshes;
@property unsigned int forcedRefreshes;
@property bool hasNegativeAheadFrames;
@property unsigned int negativeAheadFrames;
@property bool hasCaFrames;
@property unsigned int caFrames;
@property bool hasCaDrops;
@property unsigned int caDrops;
@property bool hasAudioLost;
@property unsigned int audioLost;
@property bool hasAudioUnrecovered;
@property unsigned int audioUnrecovered;
@property bool hasAudioLate;
@property unsigned int audioLate;
@property bool hasAvgRTT;
@property unsigned int avgRTT;
@property bool hasAvgAhead;
@property int avgAhead;
@property bool hasAvgReceiveMs;
@property int avgReceiveMs;


- (bool)hasDuration;
- (int)avgReceiveMs;
- (int)avgAhead;
- (unsigned int)avgRTT;
- (unsigned int)audioLate;
- (unsigned int)audioUnrecovered;
- (unsigned int)audioLost;
- (unsigned int)caDrops;
- (unsigned int)caFrames;
- (unsigned int)negativeAheadFrames;
- (unsigned int)framesReceived;
- (bool)hasAvgReceiveMs;
- (void)setHasAvgReceiveMs:(bool)arg1;
- (void)setAvgReceiveMs:(int)arg1;
- (bool)hasAvgAhead;
- (void)setHasAvgAhead:(bool)arg1;
- (void)setAvgAhead:(int)arg1;
- (bool)hasAvgRTT;
- (void)setHasAvgRTT:(bool)arg1;
- (void)setAvgRTT:(unsigned int)arg1;
- (bool)hasAudioLate;
- (void)setHasAudioLate:(bool)arg1;
- (void)setAudioLate:(unsigned int)arg1;
- (bool)hasAudioUnrecovered;
- (void)setHasAudioUnrecovered:(bool)arg1;
- (void)setAudioUnrecovered:(unsigned int)arg1;
- (bool)hasAudioLost;
- (void)setHasAudioLost:(bool)arg1;
- (void)setAudioLost:(unsigned int)arg1;
- (bool)hasCaDrops;
- (void)setHasCaDrops:(bool)arg1;
- (void)setCaDrops:(unsigned int)arg1;
- (bool)hasCaFrames;
- (void)setHasCaFrames:(bool)arg1;
- (void)setCaFrames:(unsigned int)arg1;
- (bool)hasNegativeAheadFrames;
- (void)setHasNegativeAheadFrames:(bool)arg1;
- (void)setNegativeAheadFrames:(unsigned int)arg1;
- (bool)hasFramesReceived;
- (void)setHasFramesReceived:(bool)arg1;
- (void)setFramesReceived:(unsigned int)arg1;
- (unsigned int)forcedRefreshes;
- (unsigned int)resumes;
- (unsigned int)suspends;
- (unsigned int)unclearScreens;
- (unsigned int)clearScreens;
- (unsigned int)configChanges;
- (bool)hasForcedRefreshes;
- (void)setHasForcedRefreshes:(bool)arg1;
- (void)setForcedRefreshes:(unsigned int)arg1;
- (bool)hasResumes;
- (void)setHasResumes:(bool)arg1;
- (void)setResumes:(unsigned int)arg1;
- (bool)hasSuspends;
- (void)setHasSuspends:(bool)arg1;
- (void)setSuspends:(unsigned int)arg1;
- (bool)hasUnclearScreens;
- (void)setHasUnclearScreens:(bool)arg1;
- (void)setUnclearScreens:(unsigned int)arg1;
- (bool)hasClearScreens;
- (void)setHasClearScreens:(bool)arg1;
- (void)setClearScreens:(unsigned int)arg1;
- (bool)hasConfigChanges;
- (void)setHasConfigChanges:(bool)arg1;
- (void)setConfigChanges:(unsigned int)arg1;
- (id)sessionUUID;
- (bool)hasReason;
- (void)setHasReason:(bool)arg1;
- (bool)hasSessionUUID;
- (void)setSessionUUID:(id)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasDuration:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (unsigned long long)timestamp;
- (void)setReason:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setDuration:(unsigned int)arg1;
- (int)reason;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)duration;
- (id)dictionaryRepresentation;

@end

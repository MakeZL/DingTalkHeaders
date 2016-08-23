//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, AVCaptureMovieFileOutput, NSArray, NSDate, NSMutableArray, NSString, NSURL, VSAudioConfiguration, VSRecorder, VSVideoConfiguration;
@protocol OS_dispatch_queue;

@interface VSRecordSession : NSObject
{
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoInput;
    AVAssetWriterInput *_audioInput;
    NSMutableArray *_segments;
    _Bool _audioInitializationFailed;
    _Bool _videoInitializationFailed;
    _Bool _currentSegmentHasVideo;
    _Bool _currentSegmentHasAudio;
    int _currentSegmentCount;
    CDStruct_1b6d18a9 _timeOffset;
    CDStruct_1b6d18a9 _lastTimeAudio;
    CDStruct_1b6d18a9 _currentSegmentDuration;
    CDStruct_1b6d18a9 _sessionStartTime;
    VSVideoConfiguration *_videoConfiguration;
    VSAudioConfiguration *_audioConfiguration;
    AVAssetWriterInputPixelBufferAdaptor *_videoPixelBufferAdaptor;
    CDStruct_1b6d18a9 _lastTimeVideo;
    NSObject<OS_dispatch_queue> *_audioQueue;
    AVCaptureMovieFileOutput *_movieFileOutput;
    NSString *_identifier;
    NSDate *_date;
    NSString *_segmentsDirectory;
    NSString *_fileType;
    NSString *_fileExtension;
    VSRecorder *_recorder;
    long long _sessionState;
    CDStruct_1b6d18a9 _segmentsDuration;
}

+ (id)createError:(id)arg1;
+ (id)recordSession;
+ (id)newIdentifier:(unsigned long long)arg1;
@property(readonly, nonatomic) long long sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, nonatomic) _Bool audioInitializationFailed; // @synthesize audioInitializationFailed=_audioInitializationFailed;
@property(readonly, nonatomic) _Bool videoInitializationFailed; // @synthesize videoInitializationFailed=_videoInitializationFailed;
@property(nonatomic) __weak VSRecorder *recorder; // @synthesize recorder=_recorder;
@property(readonly) CDStruct_1b6d18a9 segmentsDuration; // @synthesize segmentsDuration=_segmentsDuration;
@property(readonly, nonatomic) NSArray *segments; // @synthesize segments=_segments;
@property(copy, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *segmentsDirectory; // @synthesize segmentsDirectory=_segmentsDirectory;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isUsingMovieFileOutput;
@property(readonly, nonatomic) NSURL *outputUrl;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(readonly) CDStruct_1b6d18a9 currentSegmentDuration;
@property(readonly, nonatomic) _Bool currentSegmentHasAudio;
@property(readonly, nonatomic) _Bool currentSegmentHasVideo;
@property(readonly, nonatomic) _Bool recordSegmentBegan;
@property(readonly, nonatomic) _Bool audioInitialized;
@property(readonly, nonatomic) _Bool videoInitialized;
- (void)composeSegments:(CDUnknownBlockType)arg1;
- (void)appendSegmentsToComposition:(id)arg1 audioMix:(id)arg2;
- (void)appendSegmentsToComposition:(id)arg1;
- (CDStruct_1b6d18a9)_appendTrack:(id)arg1 toCompositionTrack:(id)arg2 atTime:(CDStruct_1b6d18a9)arg3 withBounds:(CDStruct_1b6d18a9)arg4;
- (void)appendVideoPixelBuffer:(struct __CVBuffer *)arg1 atTime:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_startSessionIfNeededAtTime:(CDStruct_1b6d18a9)arg1;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 completion:(CDUnknownBlockType)arg2;
- (struct __CVBuffer *)createPixelBuffer;
- (void)cancelSession:(CDUnknownBlockType)arg1;
- (void)finishEndSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mergeSegmentsUsingPreset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginRecordSegmentUsingMovieFileOutput:(id)arg1 error:(id *)arg2 delegate:(id)arg3;
- (void)notifyMovieFileOutputIsReady;
- (_Bool)endSegmentWithInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)appendRecordSegmentUrl:(id)arg1 info:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_destroyAssetWriter;
- (void)beginSegment:(id *)arg1;
- (struct opaqueCMSampleBuffer *)adjustBuffer:(struct opaqueCMSampleBuffer *)arg1 withTimeOffset:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3;
- (void)insertSegment:(id)arg1 atIndex:(long long)arg2;
- (void)addSegment:(id)arg1;
- (void)initializeAudio:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 error:(id *)arg3;
- (void)initializeVideo:(id)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 error:(id *)arg3;
- (void)deinitialize;
- (id)createWriter:(id *)arg1;
- (id)nextFileURL:(id *)arg1;
- (id)createOutputUrlWithFileName:(id)arg1 fileExtension:(id)arg2;
- (id)_suggestedFileExtension;
- (id)_suggestedFileType;
- (void)removeAllSegments:(_Bool)arg1;
- (void)removeAllSegments;
- (void)removeLastSegment;
- (void)removeSegmentAtIndex:(long long)arg1 deleteFile:(_Bool)arg2;
- (void)removeSegment:(id)arg1;
- (void)removeFile:(id)arg1;
- (void)dispatchSyncOnSessionQueue:(CDUnknownBlockType)arg1;
- (id)init;

@end


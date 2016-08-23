//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetWriter, NSString, NSURL;

@interface QPReaderToWriter : NSObject
{
    AVAsset *_asset;
    NSURL *_toURL;
    AVAssetReader *_reader;
    AVAssetWriter *_writer;
    _Bool _videoAppendFinish;
    _Bool _audioAppendFinish;
    NSString *_profileLevel;
    double _bitRate;
    struct CGSize _videoSize;
    CDUnknownBlockType _completionHandler;
    struct dispatch_queue_s *_videoQueue;
    struct dispatch_queue_s *_audioQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)checkVideoFinish;
- (id)audioOuputSetting;
- (id)videoOuputSetting;
- (void)nextCombineFromAsset:(id)arg1 toURL:(id)arg2;
- (void)combineFromAsset:(id)arg1 toURL:(id)arg2 withBitRate:(double)arg3 videoSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)combineFromAsset:(id)arg1 toURL:(id)arg2 withBitRate:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)combineFromAsset:(id)arg1 toURL:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)nextProfileLevelFrom:(id)arg1;
- (id)init;

@end


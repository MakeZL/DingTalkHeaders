//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "DTDLOperation-Protocol.h"

@class NSHTTPURLResponse, NSMutableData, NSString, NSThread, NSURLConnection, NSURLRequest;

@interface DTDLDownloaderOperation : NSOperation <DTDLOperation>
{
    _Bool responseFromCached;
    _Bool _executing;
    _Bool _finished;
    NSURLRequest *_request;
    unsigned long long _options;
    NSHTTPURLResponse *_response;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    CDUnknownBlockType _cancelBlock;
    long long _expectedSize;
    NSMutableData *_fileData;
    NSURLConnection *_connection;
    NSThread *_thread;
    unsigned long long _backgroundTaskId;
}

@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(retain) NSThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableData *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (_Bool)shouldContinueWhenAppEntersBackground;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)isConcurrent;
- (void)reset;
- (void)done;
- (void)cancelInternal;
- (void)cancelInternalAndStop;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4 cancelled:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


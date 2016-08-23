//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWPCombinedOperation-Protocol.h"

@class LWPDownloadTask, NSString, NSURL;

@interface LWPFileDownloadTask : NSObject <LWPCombinedOperation>
{
    NSURL *_url;
    NSString *_filePath;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _completedBlock;
    LWPDownloadTask *_downloadOp;
    long long _queueNo;
}

@property(nonatomic) long long queueNo; // @synthesize queueNo=_queueNo;
@property(retain, nonatomic) LWPDownloadTask *downloadOp; // @synthesize downloadOp=_downloadOp;
@property(copy, nonatomic) CDUnknownBlockType completedBlock; // @synthesize completedBlock=_completedBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)done;
- (void)cancel;
- (void)go;
- (id)initWithURL:(id)arg1 filePath:(id)arg2 fileAttr:(id)arg3 start:(CDUnknownBlockType)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


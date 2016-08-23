//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWPFileAttribute, LWPFileUploadTask, NSRecursiveLock, NSString;

@interface LWPFileUploader : NSObject
{
    NSString *_uuid;
    LWPFileUploadTask *_task;
    LWPFileAttribute *_fileAttr;
    CDUnknownBlockType _startBlock;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _failureBlock;
    NSRecursiveLock *_cancelledLock;
}

+ (id)itemWithTask:(id)arg1 fileAttr:(id)arg2 startBlock:(CDUnknownBlockType)arg3 successBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) NSRecursiveLock *cancelledLock; // @synthesize cancelledLock=_cancelledLock;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(copy, nonatomic) CDUnknownBlockType startBlock; // @synthesize startBlock=_startBlock;
@property(retain, nonatomic) LWPFileAttribute *fileAttr; // @synthesize fileAttr=_fileAttr;
@property(retain, nonatomic) LWPFileUploadTask *task; // @synthesize task=_task;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isStreaming;
- (void)closeStream;
- (_Bool)isExecuting;
- (void)checkAndUploadStream;
- (void)openStream;
- (void)cancel;
- (void)clearCallBackAndCancel;
- (void)setStartBlock:(CDUnknownBlockType)arg1 successBlock:(CDUnknownBlockType)arg2 progressBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

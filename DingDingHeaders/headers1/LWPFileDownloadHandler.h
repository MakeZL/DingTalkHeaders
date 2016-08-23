//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWPCombinedOperation-Protocol.h"

@class LWPFileDownloadInfo, LWPFileDownloadTask, NSString;

@interface LWPFileDownloadHandler : NSObject <LWPCombinedOperation>
{
    LWPFileDownloadInfo *_fileDownInfo;
    LWPFileDownloadTask *_task;
}

@property(retain, nonatomic) LWPFileDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) LWPFileDownloadInfo *fileDownInfo; // @synthesize fileDownInfo=_fileDownInfo;
- (void).cxx_destruct;
- (void)triggerStartBlock;
- (void)cancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


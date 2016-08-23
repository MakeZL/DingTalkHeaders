//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWPUploaderProtocol-Protocol.h"

@class NSString;

@interface LWPHugeFileUploader : NSObject <LWPUploaderProtocol>
{
}

+ (id)commitUploadFileWithUri:(id)arg1 timeout:(int)arg2 uploadInfo:(id)arg3 filePart:(id)arg4 fileData:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
+ (id)performUploadFileWithUri:(id)arg1 timeout:(int)arg2 uploadInfo:(id)arg3 filePart:(id)arg4 fileData:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
+ (id)prepareUploadFileWithUri:(id)arg1 timeout:(int)arg2 uploadInfo:(id)arg3 fileData:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


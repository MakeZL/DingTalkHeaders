//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class BLMail, NSMutableDictionary, NSString;

@interface BLSendMailAPITask : BLBaseAPITask
{
    BLMail *_mailToSend;
    NSString *_clientId;
    NSMutableDictionary *_sendBytesDict;
    NSMutableDictionary *_sendingBytesDict;
}

+ (id)excludeCopyProperties;
+ (id)excludeProperties;
@property(retain, nonatomic) NSMutableDictionary *sendingBytesDict; // @synthesize sendingBytesDict=_sendingBytesDict;
@property(retain, nonatomic) NSMutableDictionary *sendBytesDict; // @synthesize sendBytesDict=_sendBytesDict;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) BLMail *mailToSend; // @synthesize mailToSend=_mailToSend;
- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)canRetryWithError:(id)arg1;
- (void)willTerminate;
- (void)willProcess;
- (void)uploadAttachmentToServer:(id)arg1;
- (void)sendMail;
- (void)uploadAttachments;
- (long long)totalAttachmentAlreadySendBytes;
- (long long)estimatedTotalAttachmentSendBytes;
- (void)updateSendProgressWithAlreadySendBytes:(long long)arg1 totalBytes:(long long)arg2;
- (void)updateSendProgressWithUploadingAttachment:(id)arg1 alreadySendBytes:(long long)arg2 totalBytes:(long long)arg3;
- (void)postSendMailNotification:(id)arg1;
- (void)handleSuccessResponse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)applyAttachmentListIDs:(id)arg1 onList:(id)arg2 isInline:(_Bool)arg3;
- (void)process;
- (id)init;
- (_Bool)isMailExist;
- (id)description;

@end


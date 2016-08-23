//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLFolder, BLMail, NSArray, NSString;

@protocol BLMailDetailInteractorInput <NSObject>
- (void)deleteMail:(BLMail *)arg1;
- (void)sendResponse:(long long)arg1 forMail:(BLMail *)arg2;
- (void)showEventOrganizer;
- (void)responseEventWithNewStatus:(long long)arg1 forMail:(BLMail *)arg2;
- (void)wantsPreviewAttachmentAtIndex:(unsigned long long)arg1 forceNodownload:(_Bool)arg2;
- (void)loadInlineAttachmentsWithData:(NSArray *)arg1 forceDownload:(_Bool)arg2 forMail:(BLMail *)arg3;
- (void)stopDownloadAttachmentAtIndex:(unsigned long long)arg1;
- (void)startDownloadAttachmentAtIndex:(unsigned long long)arg1 ForMail:(BLMail *)arg2;
- (void)loadCalendarInfoForMail:(BLMail *)arg1;
- (void)findShouldShowAttachmentsForMail:(BLMail *)arg1;
- (void)setReadForMail:(BLMail *)arg1;
- (void)cancelLoadingMailContent;
- (void)loadMailBodyIfNeedForMail:(BLMail *)arg1;
- (void)saveLastVisitDateForMail:(BLMail *)arg1;
- (void)loadMailWithID:(NSString *)arg1 inFolder:(BLFolder *)arg2;
@end


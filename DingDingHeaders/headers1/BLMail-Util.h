//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLMail.h"

@interface BLMail (Util)
+ (id)generateDefaultMailBodyForAccount:(id)arg1;
+ (id)generateCalendarForwardMailFor:(id)arg1 account:(id)arg2;
+ (id)generateForwardMailFor:(id)arg1 account:(id)arg2;
+ (id)generateReplyMailFor:(id)arg1 account:(id)arg2 replyToAll:(_Bool)arg3;
+ (id)generateDraftMailFor:(id)arg1 account:(id)arg2;
+ (id)generateNewMail:(id)arg1;
+ (id)excludeCopyProperties;
+ (id)excludePropertiesNotUsedForSecondaryIndex;
+ (id)excludeProperties;
- (id)displaySenderEmail;
- (id)displaySenderName;
- (id)metadata;
- (_Bool)isRelatedToEmail:(id)arg1;
- (_Bool)isSendByMe;
- (_Bool)canReplyAll;
- (_Bool)isCalendarMail;
- (id)generateBrief:(id)arg1;
- (id)attachmentWithCid:(id)arg1;
- (_Bool)isLocalImageAttached;
- (id)attachmentListWithInlineAttachment;
- (id)attachmentListWithOutRelatedAttachment;
- (void)copyAttachment:(id)arg1 account:(id)arg2;
- (id)generateReferCalendarForwardMailBody;
- (id)generateReferMailForwardBody;
- (id)generateReferMailReplyBody;
- (unsigned long long)attachementsCount;
- (void)setupDefaultBody:(id)arg1;
- (void)setupDefaultMailForAccount:(id)arg1;
- (void)setupMessageIDForSenderEmail:(id)arg1;
- (void)removeAttachmentList:(id)arg1;
- (void)removeAttachmentListObject:(id)arg1;
- (void)addAttachmentList:(id)arg1;
- (void)addAttachmentListObject:(id)arg1;
@end


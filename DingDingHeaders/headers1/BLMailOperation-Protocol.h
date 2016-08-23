//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLFolder, BLMail, NSArray, NSDate;

@protocol BLMailOperation <NSObject>
@property(retain, nonatomic) BLMail *mail;
- (void)wantsCustomReminder;
- (void)reminderAtCustomDate:(NSDate *)arg1;
- (void)reminderAtNineOnFirstDayOfNextMonth;
- (void)cancelReminder;
- (void)reminderNineAtNextMonday;
- (void)reminderNineAtTomorrow;
- (void)reminderThreeHoursLater;
- (void)moveMailToFolder:(BLFolder *)arg1;
- (void)showComposeInterfaceForForward;
- (void)showComposeInterfaceForReplyAllWithToRecipients:(NSArray *)arg1;
- (void)showComposeInterfaceForReply;
- (void)setRemindOnMail;
- (void)moveMail;
- (void)flagMail;
- (void)replyMail;
- (void)loadToolBar;
- (void)loadFlag;
- (void)loadReminder;
@end


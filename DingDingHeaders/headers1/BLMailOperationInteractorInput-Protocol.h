//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLFolder, BLMail, NSDate;

@protocol BLMailOperationInteractorInput <NSObject>
- (void)cancelReminderForMail:(BLMail *)arg1;
- (void)setReminderAtDate:(NSDate *)arg1 isAllDay:(_Bool)arg2 forMail:(BLMail *)arg3;
- (void)loadReminderForMail:(BLMail *)arg1;
- (void)moveMail:(BLMail *)arg1 toFolder:(BLFolder *)arg2;
- (void)toggleMailFlag:(BLMail *)arg1;
@end


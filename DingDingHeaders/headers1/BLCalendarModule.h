//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseModule.h"

@class EKCalendar, EKEventStore, NSMutableDictionary;
@protocol BLCalendarModuleDelegate;

@interface BLCalendarModule : BLBaseModule
{
    id <BLCalendarModuleDelegate> _delegate;
    EKEventStore *_eventStore;
    EKCalendar *_alimeiCalendar;
    NSMutableDictionary *_BL2EKMapping;
    NSMutableDictionary *_EK2BLMapping;
}

@property(retain, nonatomic) NSMutableDictionary *EK2BLMapping; // @synthesize EK2BLMapping=_EK2BLMapping;
@property(retain, nonatomic) NSMutableDictionary *BL2EKMapping; // @synthesize BL2EKMapping=_BL2EKMapping;
@property(retain, nonatomic) EKCalendar *alimeiCalendar; // @synthesize alimeiCalendar=_alimeiCalendar;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(nonatomic) __weak id <BLCalendarModuleDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)calendarInstancesWithCalendarUUIDs:(id)arg1 forAccount:(id)arg2;
- (id)filteredCalendarUUIDsForAccount:(id)arg1;
- (id)calendarUUIDsWithFolderUUIDs:(id)arg1 forAccount:(id)arg2;
- (void)setFilteredCalendarFolderUUIDs:(id)arg1 forAccount:(id)arg2;
- (id)filteredCalendarFolderUUIDsForAccount:(id)arg1;
- (void)localDeleteAllCalendarsForAccount:(id)arg1;
- (void)localDeleteCalendarsInFolder:(id)arg1 forAccount:(id)arg2;
- (void)localDeleteCalendarsInFolderInBackground:(id)arg1 forAccount:(id)arg2;
- (void)localDeleteCalendars:(id)arg1 forAccount:(id)arg2;
- (void)localDeleteCalendarsInBackground:(id)arg1 forAccount:(id)arg2;
- (void)localModifyCalendars:(id)arg1 events:(id)arg2 forAccount:(id)arg3 addNotify:(_Bool)arg4;
- (void)localModifyCalendarsInBackground:(id)arg1 events:(id)arg2 forAccount:(id)arg3 addNotify:(_Bool)arg4;
- (void)localCreateCalendars:(id)arg1 events:(id)arg2 forAccount:(id)arg3 addNotify:(_Bool)arg4;
- (void)localCreateCalendarsInBackground:(id)arg1 events:(id)arg2 forAccount:(id)arg3 addNotify:(_Bool)arg4;
- (id)occupyMonthSetForStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
- (id)expandRecurrentCalendarEvent:(id)arg1 forMonthSet:(id)arg2 exceptionDateTimeSet:(id)arg3;
- (id)expandInstancesForCalendarEvent:(id)arg1 forMonthSet:(id)arg2 exceptionDateTimeSet:(id)arg3;
- (id)expandInstancesForCalendar:(id)arg1 forMonthSet:(id)arg2;
- (_Bool)isEventCrossDay:(id)arg1;
- (id)findInstanceByNotificationID:(id)arg1 account:(id)arg2;
- (id)findCalendarByUUID:(id)arg1 account:(id)arg2;
- (void)translateRecurrentCountToUntilTime:(id)arg1;
- (id)expandRecurrentCalendarEventRaw:(id)arg1 forMonth:(id)arg2;
- (id)firstDateMatchWeekday:(unsigned long long)arg1 inMonth:(id)arg2;
- (id)pickDaysForRecurRule:(id)arg1 forMonth:(id)arg2 defaultDayInMonth:(unsigned long long)arg3;
- (id)filteredDateList:(id)arg1 byExceptionDateTimeSet:(id)arg2 forEvent:(id)arg3;
- (id)filteredDateList:(id)arg1 bySetPosList:(id)arg2;
- (_Bool)monthListOfYear:(id)arg1 contains:(unsigned long long)arg2;
- (long long)buildInstancesForEvent:(id)arg1 withStartDateArray:(id)arg2 forMonth:(id)arg3 testOnly:(_Bool)arg4 withMatchCallback:(CDUnknownBlockType)arg5;
- (long long)buildInstancesForEvent:(id)arg1 withStartDateArray:(id)arg2 forMonth:(id)arg3;
- (void)cancelCalendarNotificationForFolderUUIDs:(id)arg1 forAccount:(id)arg2;
- (void)cancelCalendarNotificationWithPredicate:(id)arg1;
- (void)cancelCalendarNotificationForAccount:(id)arg1;
- (void)cancelCalendarNotificationForCalendar:(id)arg1;
- (void)updateCalendarNotificationsForAccount:(id)arg1;
- (void)markEventStatusForCalendar:(id)arg1 eventSequence:(unsigned long long)arg2 status:(long long)arg3 fromMail:(_Bool)arg4 forAccount:(id)arg5;
- (long long)attendeeStatusForCalendarEvent:(id)arg1 forAccount:(id)arg2;
- (id)defaultFolderForAccount:(id)arg1;
- (void)buildCalendarInstancesForCalendars:(id)arg1 forMonths:(id)arg2 forAccount:(id)arg3 addNotify:(_Bool)arg4;
- (void)buildCalendarInstancesForCalendars:(id)arg1 forAccount:(id)arg2 addNotify:(_Bool)arg3;
- (void)buildCalendarInstancesForMonth:(id)arg1 forAccount:(id)arg2 addNotify:(_Bool)arg3;
- (id)existingCalendarInstancesFrom:(long long)arg1 to:(long long)arg2 forEvent:(id)arg3 filtered:(_Bool)arg4 forAccount:(id)arg5;
- (id)existingCalendarInstancesFrom:(long long)arg1 to:(long long)arg2 filtered:(_Bool)arg3 forAccount:(id)arg4;
- (id)existingCalendarInstancesForMonth:(id)arg1 filtered:(_Bool)arg2 forAccount:(id)arg3;
- (void)removeReminderForMail:(id)arg1 withAccount:(id)arg2;
- (void)setReminderForMail:(id)arg1 withDate:(id)arg2 withAccount:(id)arg3;
- (void)responseCalendarEvent:(id)arg1 withStatus:(long long)arg2 forAccount:(id)arg3 online:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (_Bool)allowResponseToCalendar:(id)arg1 forAccount:(id)arg2 allowResponseOnceMore:(_Bool)arg3 disallowReason:(id *)arg4;
- (id)calendarInstanceWithNotificationID:(id)arg1 account:(id)arg2;
- (void)deleteCalendar:(id)arg1 forAccount:(id)arg2 online:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)updateCalendar:(id)arg1 eventList:(id)arg2 event:(id)arg3 forAccount:(id)arg4 online:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)sendCalendar:(id)arg1 event:(id)arg2 inFolder:(id)arg3 forAccount:(id)arg4 online:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (void)refreshCalendarsWithFolder:(id)arg1 forAccount:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end


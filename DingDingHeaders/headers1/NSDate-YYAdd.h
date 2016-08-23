//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (YYAdd)
+ (id)dateWithISOFormatString:(id)arg1;
+ (id)dateWithString:(id)arg1 format:(id)arg2 timeZone:(id)arg3 locale:(id)arg4;
+ (id)dateWithString:(id)arg1 format:(id)arg2;
- (id)stringWithISOFormat;
- (id)stringWithFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;
- (id)stringWithFormat:(id)arg1;
- (id)dateByAddingSeconds:(long long)arg1;
- (id)dateByAddingMinutes:(long long)arg1;
- (id)dateByAddingHours:(long long)arg1;
- (id)dateByAddingDays:(long long)arg1;
- (id)dateByAddingWeeks:(long long)arg1;
- (id)dateByAddingMonths:(long long)arg1;
- (id)dateByAddingYears:(long long)arg1;
@property(readonly, nonatomic) _Bool isYesterday;
@property(readonly, nonatomic) _Bool isToday;
@property(readonly, nonatomic) _Bool isLeapYear;
@property(readonly, nonatomic) _Bool isLeapMonth;
@property(readonly, nonatomic) long long quarter;
@property(readonly, nonatomic) long long yearForWeekOfYear;
@property(readonly, nonatomic) long long weekOfYear;
@property(readonly, nonatomic) long long weekOfMonth;
@property(readonly, nonatomic) long long weekdayOrdinal;
@property(readonly, nonatomic) long long weekday;
@property(readonly, nonatomic) long long nanosecond;
@property(readonly, nonatomic) long long second;
@property(readonly, nonatomic) long long minute;
@property(readonly, nonatomic) long long hour;
@property(readonly, nonatomic) long long day;
@property(readonly, nonatomic) long long month;
@property(readonly, nonatomic) long long year;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLDateUtil : NSObject
{
}

+ (id)normalizedDateWithDate:(id)arg1;
+ (id)calendarStringToDate:(id)arg1;
+ (id)getCurrentDateStr;
+ (id)NSStringDateToNSDate:(id)arg1;
+ (_Bool)isCurrentDayWithDate:(id)arg1;
+ (_Bool)isCurrentDay:(long long)arg1;
+ (id)eventDayWithDate:(id)arg1;
+ (id)eventDayWithLongLong:(long long)arg1;
+ (id)eventCreateWithDate:(id)arg1;
+ (id)eventCreateWithLongLong:(long long)arg1;
+ (id)eventYearMonthWithDate:(id)arg1;
+ (id)eventYearMonthWithLongLong:(long long)arg1;
+ (id)dateToString:(long long)arg1 truncateTime:(_Bool)arg2;
+ (id)showBirth:(id)arg1;
+ (id)intervalSinceNowWithLongLong:(long long)arg1;
+ (id)newIntervalSinceNowWithLongLong:(long long)arg1;
+ (id)intervalSinceNowWithDate:(id)arg1;

@end


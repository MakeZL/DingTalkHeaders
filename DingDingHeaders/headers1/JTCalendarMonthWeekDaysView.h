//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JTCalendar;

@interface JTCalendarMonthWeekDaysView : UIView
{
    JTCalendar *_calendarManager;
}

+ (void)beforeReloadAppearance;
@property(nonatomic) __weak JTCalendar *calendarManager; // @synthesize calendarManager=_calendarManager;
- (void).cxx_destruct;
- (void)reloadAppearance;
- (void)layoutSubviews;
- (id)daysOfWeek;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


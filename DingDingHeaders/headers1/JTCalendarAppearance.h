//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface JTCalendarAppearance : NSObject
{
    _Bool _isWeekMode;
    _Bool _useCacheSystem;
    _Bool _focusSelectedDayChangeMode;
    _Bool _readFromRightToLeft;
    _Bool _autoChangeMonth;
    UIColor *_menuMonthTextColor;
    UIFont *_menuMonthTextFont;
    double _ratioContentMenu;
    CDUnknownBlockType _monthBlock;
    long long _weekDayFormat;
    UIColor *_weekDayTextColor;
    UIFont *_weekDayTextFont;
    UIImage *_dayCircleImageSelected;
    UIImage *_dayCircleImageSelectedOtherMonth;
    UIImage *_dayCircleImageToday;
    UIImage *_dayCircleImageTodayOtherMonth;
    UIImage *_dayDotImage;
    UIImage *_dayDotImageSelected;
    UIImage *_dayDotImageOtherMonth;
    UIImage *_dayDotImageSelectedOtherMonth;
    UIImage *_dayDotImageToday;
    UIImage *_dayDotImageTodayOtherMonth;
    UIColor *_dayTextColor;
    UIColor *_dayTextColorSelected;
    UIColor *_dayTextColorOtherMonth;
    UIColor *_dayTextColorSelectedOtherMonth;
    UIColor *_dayTextColorToday;
    UIColor *_dayTextColorTodayOtherMonth;
    UIFont *_dayTextFont;
    NSString *_dayFormat;
    double _centerDistanceBetweenDayDotAndCircle;
    struct CGSize _dayCircleSize;
    struct CGSize _dayDotSize;
}

@property(nonatomic) double centerDistanceBetweenDayDotAndCircle; // @synthesize centerDistanceBetweenDayDotAndCircle=_centerDistanceBetweenDayDotAndCircle;
@property(nonatomic) struct CGSize dayDotSize; // @synthesize dayDotSize=_dayDotSize;
@property(nonatomic) struct CGSize dayCircleSize; // @synthesize dayCircleSize=_dayCircleSize;
@property(copy, nonatomic) NSString *dayFormat; // @synthesize dayFormat=_dayFormat;
@property(retain, nonatomic) UIFont *dayTextFont; // @synthesize dayTextFont=_dayTextFont;
@property(retain, nonatomic) UIColor *dayTextColorTodayOtherMonth; // @synthesize dayTextColorTodayOtherMonth=_dayTextColorTodayOtherMonth;
@property(retain, nonatomic) UIColor *dayTextColorToday; // @synthesize dayTextColorToday=_dayTextColorToday;
@property(retain, nonatomic) UIColor *dayTextColorSelectedOtherMonth; // @synthesize dayTextColorSelectedOtherMonth=_dayTextColorSelectedOtherMonth;
@property(retain, nonatomic) UIColor *dayTextColorOtherMonth; // @synthesize dayTextColorOtherMonth=_dayTextColorOtherMonth;
@property(retain, nonatomic) UIColor *dayTextColorSelected; // @synthesize dayTextColorSelected=_dayTextColorSelected;
@property(retain, nonatomic) UIColor *dayTextColor; // @synthesize dayTextColor=_dayTextColor;
@property(retain, nonatomic) UIImage *dayDotImageTodayOtherMonth; // @synthesize dayDotImageTodayOtherMonth=_dayDotImageTodayOtherMonth;
@property(retain, nonatomic) UIImage *dayDotImageToday; // @synthesize dayDotImageToday=_dayDotImageToday;
@property(retain, nonatomic) UIImage *dayDotImageSelectedOtherMonth; // @synthesize dayDotImageSelectedOtherMonth=_dayDotImageSelectedOtherMonth;
@property(retain, nonatomic) UIImage *dayDotImageOtherMonth; // @synthesize dayDotImageOtherMonth=_dayDotImageOtherMonth;
@property(retain, nonatomic) UIImage *dayDotImageSelected; // @synthesize dayDotImageSelected=_dayDotImageSelected;
@property(retain, nonatomic) UIImage *dayDotImage; // @synthesize dayDotImage=_dayDotImage;
@property(retain, nonatomic) UIImage *dayCircleImageTodayOtherMonth; // @synthesize dayCircleImageTodayOtherMonth=_dayCircleImageTodayOtherMonth;
@property(retain, nonatomic) UIImage *dayCircleImageToday; // @synthesize dayCircleImageToday=_dayCircleImageToday;
@property(retain, nonatomic) UIImage *dayCircleImageSelectedOtherMonth; // @synthesize dayCircleImageSelectedOtherMonth=_dayCircleImageSelectedOtherMonth;
@property(retain, nonatomic) UIImage *dayCircleImageSelected; // @synthesize dayCircleImageSelected=_dayCircleImageSelected;
@property(retain, nonatomic) UIFont *weekDayTextFont; // @synthesize weekDayTextFont=_weekDayTextFont;
@property(retain, nonatomic) UIColor *weekDayTextColor; // @synthesize weekDayTextColor=_weekDayTextColor;
@property(nonatomic) long long weekDayFormat; // @synthesize weekDayFormat=_weekDayFormat;
@property(copy, nonatomic) CDUnknownBlockType monthBlock; // @synthesize monthBlock=_monthBlock;
@property(nonatomic) _Bool autoChangeMonth; // @synthesize autoChangeMonth=_autoChangeMonth;
@property(nonatomic) double ratioContentMenu; // @synthesize ratioContentMenu=_ratioContentMenu;
@property(retain, nonatomic) UIFont *menuMonthTextFont; // @synthesize menuMonthTextFont=_menuMonthTextFont;
@property(retain, nonatomic) UIColor *menuMonthTextColor; // @synthesize menuMonthTextColor=_menuMonthTextColor;
@property(nonatomic) _Bool readFromRightToLeft; // @synthesize readFromRightToLeft=_readFromRightToLeft;
@property(nonatomic) _Bool focusSelectedDayChangeMode; // @synthesize focusSelectedDayChangeMode=_focusSelectedDayChangeMode;
@property(nonatomic) _Bool useCacheSystem; // @synthesize useCacheSystem=_useCacheSystem;
@property(nonatomic) _Bool isWeekMode; // @synthesize isWeekMode=_isWeekMode;
- (void).cxx_destruct;
- (void)setDayTextColorForAll:(id)arg1;
- (void)setDayDotImageForAll:(id)arg1;
- (id)calendar;
- (void)setDefaultValues;
- (id)init;

@end


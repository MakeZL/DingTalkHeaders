//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSNumberFormatter, NSString, UIColor, UIPickerView;
@protocol BLDatePickerViewDelegate;

@interface BLDatePickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    _Bool _animation;
    _Bool _showTopBar;
    int _dateMode;
    UIPickerView *_pickerView;
    NSDate *_minimumDate;
    NSDate *_selectedDate;
    NSDate *_maximumDate;
    UIColor *_baseColor;
    id <BLDatePickerViewDelegate> _delegate;
    UIView *_topBar;
    UIView *_backgroundView;
    UIView *_baseView;
    NSMutableArray *_dataList;
    NSDate *_markedDate;
    NSNumberFormatter *_minuteFormatter;
    long long _markedYear;
    long long _markedMonth;
    long long _markedDay;
    long long _markedHour;
    long long _markedMinute;
    long long _markedDateIndex;
    long long _markedYearIndex;
    long long _markedMonthIndex;
    long long _markedDayIndex;
    long long _markedHourIndex;
    long long _markedMinuteIndex;
}

@property(nonatomic) long long markedMinuteIndex; // @synthesize markedMinuteIndex=_markedMinuteIndex;
@property(nonatomic) long long markedHourIndex; // @synthesize markedHourIndex=_markedHourIndex;
@property(nonatomic) long long markedDayIndex; // @synthesize markedDayIndex=_markedDayIndex;
@property(nonatomic) long long markedMonthIndex; // @synthesize markedMonthIndex=_markedMonthIndex;
@property(nonatomic) long long markedYearIndex; // @synthesize markedYearIndex=_markedYearIndex;
@property(nonatomic) long long markedDateIndex; // @synthesize markedDateIndex=_markedDateIndex;
@property(nonatomic) long long markedMinute; // @synthesize markedMinute=_markedMinute;
@property(nonatomic) long long markedHour; // @synthesize markedHour=_markedHour;
@property(nonatomic) long long markedDay; // @synthesize markedDay=_markedDay;
@property(nonatomic) long long markedMonth; // @synthesize markedMonth=_markedMonth;
@property(nonatomic) long long markedYear; // @synthesize markedYear=_markedYear;
@property(retain, nonatomic) NSNumberFormatter *minuteFormatter; // @synthesize minuteFormatter=_minuteFormatter;
@property(retain, nonatomic) NSDate *markedDate; // @synthesize markedDate=_markedDate;
@property(retain, nonatomic) NSMutableArray *dataList; // @synthesize dataList=_dataList;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(nonatomic) _Bool showTopBar; // @synthesize showTopBar=_showTopBar;
@property(nonatomic) __weak id <BLDatePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *baseColor; // @synthesize baseColor=_baseColor;
@property(nonatomic) int dateMode; // @synthesize dateMode=_dateMode;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)rightButtonPressed:(id)arg1;
- (void)leftButtonPressed:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1 animation:(_Bool)arg2;
- (void)showInView:(id)arg1;
- (void)showInWindowWithAnimation:(_Bool)arg1;
- (void)showInWindow;
- (id)initWithMinimumDate:(id)arg1 selectedDate:(id)arg2 maximumDate:(id)arg3;
- (void)configureLabel:(id)arg1 labelForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)shouldDisplayPickerView:(_Bool)arg1 animation:(_Bool)arg2;
- (void)setPickerViewPositionWithAnimation:(_Bool)arg1;
- (id)formatDate:(id)arg1;
- (_Bool)isBeyondLimitWith:(long long)arg1;
- (id)lastSelectedDate;
- (id)tempDateWithRow:(long long)arg1 components:(long long)arg2;
- (long long)rowMinuteWithRow:(long long)arg1;
- (long long)rowHourWithRow:(long long)arg1;
- (long long)rowDayWithRow:(long long)arg1;
- (long long)numberOfDaysOfMonth;
- (long long)rowMonthWithRow:(long long)arg1;
- (long long)rowYearWithRow:(long long)arg1;
- (id)rowDateWithRow:(long long)arg1;
- (double)widthForComponent:(long long)arg1;
- (long long)numberOfComponents;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


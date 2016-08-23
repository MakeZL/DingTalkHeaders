//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractActionSheetPicker.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSString;

@interface ActionSheetDistancePicker : AbstractActionSheetPicker <UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSString *_bigUnitString;
    long long _selectedBigUnit;
    long long _bigUnitMax;
    long long _bigUnitDigits;
    NSString *_smallUnitString;
    long long _selectedSmallUnit;
    long long _smallUnitMax;
    long long _smallUnitDigits;
}

+ (id)showPickerWithTitle:(id)arg1 bigUnitString:(id)arg2 bigUnitMax:(long long)arg3 selectedBigUnit:(long long)arg4 smallUnitString:(id)arg5 smallUnitMax:(long long)arg6 selectedSmallUnit:(long long)arg7 target:(id)arg8 action:(SEL)arg9 origin:(id)arg10 cancelAction:(SEL)arg11;
+ (id)showPickerWithTitle:(id)arg1 bigUnitString:(id)arg2 bigUnitMax:(long long)arg3 selectedBigUnit:(long long)arg4 smallUnitString:(id)arg5 smallUnitMax:(long long)arg6 selectedSmallUnit:(long long)arg7 target:(id)arg8 action:(SEL)arg9 origin:(id)arg10;
@property(nonatomic) long long smallUnitDigits; // @synthesize smallUnitDigits=_smallUnitDigits;
@property(nonatomic) long long smallUnitMax; // @synthesize smallUnitMax=_smallUnitMax;
@property(nonatomic) long long selectedSmallUnit; // @synthesize selectedSmallUnit=_selectedSmallUnit;
@property(retain, nonatomic) NSString *smallUnitString; // @synthesize smallUnitString=_smallUnitString;
@property(nonatomic) long long bigUnitDigits; // @synthesize bigUnitDigits=_bigUnitDigits;
@property(nonatomic) long long bigUnitMax; // @synthesize bigUnitMax=_bigUnitMax;
@property(nonatomic) long long selectedBigUnit; // @synthesize selectedBigUnit=_selectedBigUnit;
@property(retain, nonatomic) NSString *bigUnitString; // @synthesize bigUnitString=_bigUnitString;
- (void).cxx_destruct;
- (void)customButtonPressed:(id)arg1;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)notifyTarget:(id)arg1 didSucceedWithAction:(SEL)arg2 origin:(id)arg3;
- (id)configuredPickerView;
- (id)initWithTitle:(id)arg1 bigUnitString:(id)arg2 bigUnitMax:(long long)arg3 selectedBigUnit:(long long)arg4 smallUnitString:(id)arg5 smallUnitMax:(long long)arg6 selectedSmallUnit:(long long)arg7 target:(id)arg8 action:(SEL)arg9 origin:(id)arg10 cancelAction:(SEL)arg11;
- (id)initWithTitle:(id)arg1 bigUnitString:(id)arg2 bigUnitMax:(long long)arg3 selectedBigUnit:(long long)arg4 smallUnitString:(id)arg5 smallUnitMax:(long long)arg6 selectedSmallUnit:(long long)arg7 target:(id)arg8 action:(SEL)arg9 origin:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


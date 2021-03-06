//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ALPickerViewDelegate-Protocol.h"

@class ALPickerView, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIToolbar;

@interface LAMultiPickerView : UIView <ALPickerViewDelegate>
{
    UIView *_backView;
    NSArray *_entriesArray;
    NSArray *_entriesSelectedArray;
    NSMutableDictionary *_selectionStatesDic;
    NSMutableArray *_selectedEntriesArr;
    ALPickerView *_pickerView;
    UIToolbar *_toolBar;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _completionBlock;
}

+ (void)showMultiPickViewInView:(id)arg1 entries:(id)arg2 pickeredEntries:(id)arg3 cancelText:(id)arg4 confirmText:(id)arg5 completionBlock:(CDUnknownBlockType)arg6 cancelBlock:(CDUnknownBlockType)arg7;
+ (void)showMultiPickViewInWindowWithEntries:(id)arg1 pickeredEntries:(id)arg2 cancelText:(id)arg3 confirmText:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) ALPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSMutableArray *selectedEntriesArr; // @synthesize selectedEntriesArr=_selectedEntriesArr;
@property(retain, nonatomic) NSMutableDictionary *selectionStatesDic; // @synthesize selectionStatesDic=_selectionStatesDic;
@property(copy, nonatomic) NSArray *entriesSelectedArray; // @synthesize entriesSelectedArray=_entriesSelectedArray;
@property(copy, nonatomic) NSArray *entriesArray; // @synthesize entriesArray=_entriesArray;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didUncheckRow:(long long)arg2;
- (void)pickerView:(id)arg1 didCheckRow:(long long)arg2;
- (_Bool)pickerView:(id)arg1 selectionStateForRow:(long long)arg2;
- (id)pickerView:(id)arg1 textForRow:(long long)arg2;
- (long long)numberOfRowsForPickerView:(id)arg1;
- (void)hideMultiPicker;
- (void)confirmPickView;
- (void)canclePickView;
- (void)configPickerWithEntries:(id)arg1 pickeredEntries:(id)arg2 cancelText:(id)arg3 confirmText:(id)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


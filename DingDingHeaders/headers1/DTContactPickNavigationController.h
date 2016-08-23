//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTNavigationController.h"

#import "DTContactPickNavigationHandlerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class DTContactPickModel, DTContactPickNavigationHandler, DTContactPickStatusView, NSString;

@interface DTContactPickNavigationController : DTNavigationController <UINavigationControllerDelegate, DTContactPickNavigationHandlerDelegate>
{
    _Bool _hideStatusView;
    _Bool _hasPreFilledData;
    DTContactPickNavigationHandler *_navPickHandler;
    unsigned long long _leftBarBtnStyle;
    unsigned long long _rightBarBtnStyle;
    DTContactPickStatusView *_pickStatusView;
    DTContactPickModel *_pickModel;
    CDUnknownBlockType _customRightBtnClickBlock;
}

@property(nonatomic) _Bool hasPreFilledData; // @synthesize hasPreFilledData=_hasPreFilledData;
@property(copy, nonatomic) CDUnknownBlockType customRightBtnClickBlock; // @synthesize customRightBtnClickBlock=_customRightBtnClickBlock;
@property(retain, nonatomic) DTContactPickModel *pickModel; // @synthesize pickModel=_pickModel;
@property(retain, nonatomic) DTContactPickStatusView *pickStatusView; // @synthesize pickStatusView=_pickStatusView;
@property(nonatomic) unsigned long long rightBarBtnStyle; // @synthesize rightBarBtnStyle=_rightBarBtnStyle;
@property(nonatomic) unsigned long long leftBarBtnStyle; // @synthesize leftBarBtnStyle=_leftBarBtnStyle;
@property(nonatomic) _Bool hideStatusView; // @synthesize hideStatusView=_hideStatusView;
@property(retain, nonatomic) DTContactPickNavigationHandler *navPickHandler; // @synthesize navPickHandler=_navPickHandler;
- (void).cxx_destruct;
- (void)onKeyboardWillHide:(id)arg1;
- (void)onKeyboardWillShow:(id)arg1;
- (void)customRightBarButtonClick;
- (void)switchMutilSelectType;
- (void)cancelNav;
- (void)closeNav;
- (void)backToRoot;
- (void)popToBack;
- (void)setRightBarBtnWithViewController:(id)arg1;
- (void)setLeftBarBtnWithViewController:(id)arg1;
- (void)showBackBtnWithViewController:(id)arg1;
- (void)showCancelBtnWithViewController:(id)arg1;
- (void)showBackAndCloseButtonWithViewController:(id)arg1;
- (void)contactPickHandlerDidChange;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)setRightBarBtnWithTitle:(id)arg1 clickBlock:(CDUnknownBlockType)arg2;
- (void)close;
- (id)contactPickModel;
- (double)visiableHeight;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1 pickerViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


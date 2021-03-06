//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "BKPasscodeInputViewDelegate-Protocol.h"

@class AFViewShaker, DTLockScreenPasscodeInputView, NSDictionary, NSString, UIButton, UIWindow;

@interface DTLockScreenController : DTViewController <BKPasscodeInputViewDelegate>
{
    _Bool _isSuccess;
    _Bool _needReLogin;
    CDUnknownBlockType _dismissBlock;
    unsigned long long _lockScreenShowType;
    DTViewController *_viewController;
    DTLockScreenPasscodeInputView *_passcodeInputView;
    AFViewShaker *_viewShaker;
    UIButton *_forgotPasscodeBtn;
    UIButton *_useTouchIDBtn;
    UIWindow *_maskWindow;
    UIButton *_cancelBtn;
    NSDictionary *_userLogOutInfoDic;
}

+ (void)setCurrentBossFailedCount:(long long)arg1;
+ (long long)currentBossFailedCount;
+ (void)setCurrentFailedCount:(long long)arg1;
+ (long long)currentFailedCount;
@property(retain, nonatomic) NSDictionary *userLogOutInfoDic; // @synthesize userLogOutInfoDic=_userLogOutInfoDic;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIWindow *maskWindow; // @synthesize maskWindow=_maskWindow;
@property(nonatomic) _Bool needReLogin; // @synthesize needReLogin=_needReLogin;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(retain, nonatomic) UIButton *useTouchIDBtn; // @synthesize useTouchIDBtn=_useTouchIDBtn;
@property(retain, nonatomic) UIButton *forgotPasscodeBtn; // @synthesize forgotPasscodeBtn=_forgotPasscodeBtn;
@property(retain, nonatomic) AFViewShaker *viewShaker; // @synthesize viewShaker=_viewShaker;
@property(retain, nonatomic) DTLockScreenPasscodeInputView *passcodeInputView; // @synthesize passcodeInputView=_passcodeInputView;
@property(retain, nonatomic) DTViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) unsigned long long lockScreenShowType; // @synthesize lockScreenShowType=_lockScreenShowType;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)showLogoutAlertWithReason:(id)arg1;
- (void)onUserLogout:(id)arg1;
- (void)onCancelBtnClick:(id)arg1;
- (void)onAppWillEnterForeground:(id)arg1;
- (void)cleanPasscodeField:(id)arg1;
- (void)passcodeInputViewDidFinish:(id)arg1;
- (void)showFailedAttemptsCount:(long long)arg1 inputView:(id)arg2;
- (void)updatePasscodeInputViewTitle:(id)arg1;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)arg1;
- (unsigned long long)passcodeStyle;
- (void)setPasscodeStyle:(unsigned long long)arg1;
- (void)startTouchIDAuthenticationIfPossible;
- (_Bool)canUseTouchIDToUnlock;
- (_Bool)hasEnableFingerprint;
- (void)reLoginAndCloseLock:(_Bool)arg1;
- (void)onUseTouchID:(id)arg1;
- (void)onForgot:(id)arg1;
- (void)dismissPasscodeVC;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)showInExclusiveWindow;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


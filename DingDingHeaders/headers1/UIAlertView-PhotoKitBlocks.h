//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@interface UIAlertView (PhotoKitBlocks)
+ (id)pt_showWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6 shouldEnableFirstOtherButtonBlock:(CDUnknownBlockType)arg7 actionBeforeShow:(CDUnknownBlockType)arg8;
+ (id)pt_showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 tapBlock:(CDUnknownBlockType)arg5;
+ (id)pt_showWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 tapBlock:(CDUnknownBlockType)arg6;
@property(copy, nonatomic, setter=pt_setShouldEnableFirstOtherButtonBlock:) CDUnknownBlockType pt_shouldEnableFirstOtherButtonBlock;
@property(copy, nonatomic, setter=pt_setCancelBlock:) CDUnknownBlockType pt_cancelBlock;
@property(copy, nonatomic, setter=pt_setDidPresentBlock:) CDUnknownBlockType pt_didPresentBlock;
@property(copy, nonatomic, setter=pt_setWillPresentBlock:) CDUnknownBlockType pt_willPresentBlock;
@property(copy, nonatomic, setter=pt_setDidDismissBlock:) CDUnknownBlockType pt_didDismissBlock;
@property(copy, nonatomic, setter=pt_setWillDismissBlock:) CDUnknownBlockType pt_willDismissBlock;
@property(copy, nonatomic, setter=pt_setTapBlock:) CDUnknownBlockType pt_tapBlock;
- (void)pt_checkAlertViewDelegate;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@interface UIAlertController (Blocks)
+ (id)showActionSheetInViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 destructiveButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 popoverPresentationControllerBlock:(CDUnknownBlockType)arg7 tapBlock:(CDUnknownBlockType)arg8;
+ (id)showActionSheetInViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 destructiveButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 tapBlock:(CDUnknownBlockType)arg7;
+ (id)showAlertInViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 destructiveButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 tapBlock:(CDUnknownBlockType)arg7;
+ (id)showInViewController:(id)arg1 withTitle:(id)arg2 message:(id)arg3 preferredStyle:(long long)arg4 cancelButtonTitle:(id)arg5 destructiveButtonTitle:(id)arg6 otherButtonTitles:(id)arg7 popoverPresentationControllerBlock:(CDUnknownBlockType)arg8 tapBlock:(CDUnknownBlockType)arg9;
@property(readonly, nonatomic) long long destructiveButtonIndex;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
@property(readonly, nonatomic) long long cancelButtonIndex;
@property(readonly, nonatomic) _Bool visible;
@end


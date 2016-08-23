//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField;

@interface DTMailSetAddressViewController : DTViewController <UITextFieldDelegate, UIAlertViewDelegate>
{
    CDUnknownBlockType _completion;
    UIButton *_enterMailboxBtn;
    UITextField *_addressField;
    UILabel *_suffixLabel;
    UILabel *_guideLabel;
}

@property(retain, nonatomic) UILabel *guideLabel; // @synthesize guideLabel=_guideLabel;
@property(retain, nonatomic) UILabel *suffixLabel; // @synthesize suffixLabel=_suffixLabel;
@property(retain, nonatomic) UITextField *addressField; // @synthesize addressField=_addressField;
@property(retain, nonatomic) UIButton *enterMailboxBtn; // @synthesize enterMailboxBtn=_enterMailboxBtn;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doneClicked:(id)arg1;
- (void)changeAddress;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


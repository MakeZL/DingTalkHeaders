//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTMobileInputViewDelegate-Protocol.h"

@class DTButton, DTJob, DTMobileInputView, NSString, UIImageView, UILabel, UIScrollView, UIView;

@interface DTMobileInputViewController : DTViewController <DTMobileInputViewDelegate>
{
    _Bool _hasPrivacyPolicy;
    _Bool _isMobileInputNeedFormatter;
    DTJob *_job;
    NSString *_headerTitle;
    NSString *_headerComment;
    NSString *_countryCode;
    NSString *_countryName;
    NSString *_mobile;
    UILabel *_headerCommentLabel;
    UILabel *_countryCodeLabel;
    DTButton *_countryCodeButton;
    DTMobileInputView *_mobileInput;
    UILabel *_protocolLable;
    DTButton *_protocolButton;
    DTButton *_serviceProtocolButton;
    DTButton *_privacyProtocolButton;
    DTButton *_nextButton;
    UIView *_temView;
    UILabel *_nameLabel;
    UIImageView *_arrowImageView;
    UILabel *_phoneLabel;
    UIImageView *_topLine;
    UIImageView *_centerLine;
    UIImageView *_bottomLine;
    UIScrollView *_sclView;
}

@property(retain, nonatomic) UIScrollView *sclView; // @synthesize sclView=_sclView;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *centerLine; // @synthesize centerLine=_centerLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *temView; // @synthesize temView=_temView;
@property(nonatomic) _Bool isMobileInputNeedFormatter; // @synthesize isMobileInputNeedFormatter=_isMobileInputNeedFormatter;
@property(retain, nonatomic) DTButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) DTButton *privacyProtocolButton; // @synthesize privacyProtocolButton=_privacyProtocolButton;
@property(retain, nonatomic) DTButton *serviceProtocolButton; // @synthesize serviceProtocolButton=_serviceProtocolButton;
@property(retain, nonatomic) DTButton *protocolButton; // @synthesize protocolButton=_protocolButton;
@property(retain, nonatomic) UILabel *protocolLable; // @synthesize protocolLable=_protocolLable;
@property(retain, nonatomic) DTMobileInputView *mobileInput; // @synthesize mobileInput=_mobileInput;
@property(retain, nonatomic) DTButton *countryCodeButton; // @synthesize countryCodeButton=_countryCodeButton;
@property(retain, nonatomic) UILabel *countryCodeLabel; // @synthesize countryCodeLabel=_countryCodeLabel;
@property(retain, nonatomic) UILabel *headerCommentLabel; // @synthesize headerCommentLabel=_headerCommentLabel;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool hasPrivacyPolicy; // @synthesize hasPrivacyPolicy=_hasPrivacyPolicy;
@property(copy, nonatomic) NSString *headerComment; // @synthesize headerComment=_headerComment;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(retain, nonatomic) DTJob *job; // @synthesize job=_job;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)checkMobileInputFormatter:(id)arg1;
- (void)phoneNumberInputDidChanged:(id)arg1;
- (void)privacyProtocolButtonAction:(id)arg1;
- (void)serviceProtocolButtonAction:(id)arg1;
- (void)countryCodeButtonAction:(id)arg1;
- (void)nextButtonAction:(id)arg1;
- (id)toastLoadingWindow;
- (void)showError:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)setDefaultCountryInfo;
- (void)loadComponents;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


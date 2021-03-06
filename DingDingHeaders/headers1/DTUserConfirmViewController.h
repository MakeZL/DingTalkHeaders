//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTDatePickerViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTButton, DTContact, DTEnterpriseCard, DTJob, DTTableView, NSArray, NSDictionary, NSString, UIActionSheet, UIDatePicker, UIView;

@interface DTUserConfirmViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, UIActionSheetDelegate, DTDatePickerViewDelegate>
{
    DTJob *_job;
    NSDictionary *_jobInfo;
    DTEnterpriseCard *_enterpriseCard;
    DTContact *_contact;
    DTTableView *_infoTable;
    NSArray *_dataSource;
    NSArray *_sectionData;
    NSDictionary *_cityDic;
    NSArray *_cityKeys;
    UIDatePicker *_datePicker;
    UIActionSheet *_actionSheet;
    UIView *_footerPanle;
    DTButton *_confirmButton;
}

@property(retain, nonatomic) DTButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIView *footerPanle; // @synthesize footerPanle=_footerPanle;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSArray *cityKeys; // @synthesize cityKeys=_cityKeys;
@property(retain, nonatomic) NSDictionary *cityDic; // @synthesize cityDic=_cityDic;
@property(copy, nonatomic) NSArray *sectionData; // @synthesize sectionData=_sectionData;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) DTTableView *infoTable; // @synthesize infoTable=_infoTable;
@property(retain, nonatomic) DTContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) DTEnterpriseCard *enterpriseCard; // @synthesize enterpriseCard=_enterpriseCard;
@property(copy, nonatomic) NSDictionary *jobInfo; // @synthesize jobInfo=_jobInfo;
@property(retain, nonatomic) DTJob *job; // @synthesize job=_job;
- (void).cxx_destruct;
- (void)Save;
- (int)getGenderIndexFromGenderString:(id)arg1;
- (id)getGenderStringFormContactGender:(unsigned long long)arg1;
- (void)onGenderTypeViewPressed;
- (void)changeInfoTableHeight:(double)arg1;
- (void)onCityViewPress;
- (void)dismissDatePickerView:(id)arg1;
- (void)didSelectedDatePickerView:(id)arg1 withDate:(id)arg2;
- (void)onBirthdayTimeViewPressed;
- (void)uplaodAvatarImage:(id)arg1;
- (void)onPhotoPick:(long long)arg1;
- (void)onPhotoPick;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showError:(id)arg1;
- (void)confirmButtonAction:(id)arg1;
- (void)loadFooterView;
- (void)tidyDataSource;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


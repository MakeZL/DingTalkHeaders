//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTDatePickerViewDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTContact, DTEnterpriseNavigation, DTSectionInfo, DTTableView, NSArray, NSDictionary, NSString, UIActionSheet, UIDatePicker, UIView;

@interface DTSelfInfoViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, DTDatePickerViewDelegate>
{
    DTTableView *_infoTable;
    NSArray *_dataSource;
    DTSectionInfo *_baseSection;
    DTSectionInfo *_certifySection;
    DTSectionInfo *_enterpirseSection;
    DTContact *_contact;
    NSArray *_enterpriseCards;
    DTEnterpriseNavigation *_enterpriseNavigation;
    UIView *_enterpriseHeaderView;
    NSDictionary *_cityDic;
    NSArray *_cityKeys;
    UIDatePicker *_datePicker;
    UIActionSheet *_actionSheet;
    NSString *_noSetText;
}

@property(retain, nonatomic) NSString *noSetText; // @synthesize noSetText=_noSetText;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) NSArray *cityKeys; // @synthesize cityKeys=_cityKeys;
@property(retain, nonatomic) NSDictionary *cityDic; // @synthesize cityDic=_cityDic;
@property(retain, nonatomic) UIView *enterpriseHeaderView; // @synthesize enterpriseHeaderView=_enterpriseHeaderView;
@property(retain, nonatomic) DTEnterpriseNavigation *enterpriseNavigation; // @synthesize enterpriseNavigation=_enterpriseNavigation;
@property(retain, nonatomic) NSArray *enterpriseCards; // @synthesize enterpriseCards=_enterpriseCards;
@property(retain, nonatomic) DTContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) DTSectionInfo *enterpirseSection; // @synthesize enterpirseSection=_enterpirseSection;
@property(retain, nonatomic) DTSectionInfo *certifySection; // @synthesize certifySection=_certifySection;
@property(retain, nonatomic) DTSectionInfo *baseSection; // @synthesize baseSection=_baseSection;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) DTTableView *infoTable; // @synthesize infoTable=_infoTable;
- (void).cxx_destruct;
- (void)dingAccountDidChanged;
- (void)Save;
- (void)showAvatarDetailWithContact:(id)arg1 placeholderImage:(id)arg2;
- (int)getGenderIndexFromGenderString:(id)arg1;
- (id)getGenderStringFormContactGender:(unsigned long long)arg1;
- (void)onGenderTypeViewPressed;
- (void)gotoDingAccountSetting;
- (void)changeInfoTableHeight:(double)arg1;
- (void)onCityViewPress;
- (void)dismissDatePickerView:(id)arg1;
- (void)didSelectedDatePickerView:(id)arg1 withDate:(id)arg2;
- (void)onBirthdayTimeViewPressed;
- (void)uplaodAvatarImage:(id)arg1;
- (void)onPhotoPick:(long long)arg1;
- (void)pickPhotoFromAlbum;
- (void)pickPhotoFromCamera;
- (void)showClearAvatarAlertViewWithNameImage:(id)arg1;
- (void)clearAvatar;
- (void)onPhotoPick;
- (void)onPhotoChange;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configEnterpriseSectionWithEnterpriseCard:(id)arg1;
- (void)configOrgNavigationView;
- (void)tidyEnterpirseDataSource;
- (void)tidyCertifyDataSource;
- (void)tidyBaseDataSource;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTButton, DTCommonItem, DTContact, DTJob, NSArray, NSDictionary, NSString, UIScrollView, UITableView;

@interface DTSettingProfileViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, UIImagePickerControllerDelegate>
{
    NSDictionary *_jobInfo;
    DTJob *_job;
    DTContact *_userProfile;
    UIScrollView *_srlView;
    UITableView *_infoTable;
    NSArray *_infoDataSource;
    DTButton *_nextStepBtn;
    DTCommonItem *_nickItem;
    NSString *_nickName;
}

@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) DTCommonItem *nickItem; // @synthesize nickItem=_nickItem;
@property(retain, nonatomic) DTButton *nextStepBtn; // @synthesize nextStepBtn=_nextStepBtn;
@property(retain, nonatomic) NSArray *infoDataSource; // @synthesize infoDataSource=_infoDataSource;
@property(retain, nonatomic) UITableView *infoTable; // @synthesize infoTable=_infoTable;
@property(retain, nonatomic) UIScrollView *srlView; // @synthesize srlView=_srlView;
@property(retain, nonatomic) DTContact *userProfile; // @synthesize userProfile=_userProfile;
@property(retain, nonatomic) DTJob *job; // @synthesize job=_job;
@property(copy, nonatomic) NSDictionary *jobInfo; // @synthesize jobInfo=_jobInfo;
- (void).cxx_destruct;
- (void)showError:(id)arg1;
- (void)onSave;
- (id)toastLoadingWindow;
- (void)changeInfoTableHeight:(double)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)loadDataSource;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

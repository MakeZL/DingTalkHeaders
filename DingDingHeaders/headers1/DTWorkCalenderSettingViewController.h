//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DTBadgeView, DTOrgEmpManageCalSettingModel, NSArray, NSString, UITableView;

@interface DTWorkCalenderSettingViewController : DTViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _needShowBossSection;
    _Bool _needShowPushSection;
    DTOrgEmpManageCalSettingModel *_settingModel;
    UITableView *_tableview;
    NSArray *_dataSources;
    DTBadgeView *_settingBadgeView;
}

@property(retain, nonatomic) DTBadgeView *settingBadgeView; // @synthesize settingBadgeView=_settingBadgeView;
@property(nonatomic) _Bool needShowPushSection; // @synthesize needShowPushSection=_needShowPushSection;
@property(nonatomic) _Bool needShowBossSection; // @synthesize needShowBossSection=_needShowBossSection;
@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview=_tableview;
@property(retain, nonatomic) DTOrgEmpManageCalSettingModel *settingModel; // @synthesize settingModel=_settingModel;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)hasShowSettingDot;
- (_Bool)needShowSettingDot;
- (void)reloadData;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


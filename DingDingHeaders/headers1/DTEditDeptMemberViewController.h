//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTAddMemberHandler, DTButtonView, DTSelectBossPopView;

@interface DTEditDeptMemberViewController : DTTableViewController
{
    DTButtonView *_nextButton;
    DTSelectBossPopView *_bossPopView;
    DTAddMemberHandler *_addMemberHandler;
}

@property(retain, nonatomic) DTAddMemberHandler *addMemberHandler; // @synthesize addMemberHandler=_addMemberHandler;
@property(retain, nonatomic) DTSelectBossPopView *bossPopView; // @synthesize bossPopView=_bossPopView;
@property(retain, nonatomic) DTButtonView *nextButton; // @synthesize nextButton=_nextButton;
- (void).cxx_destruct;
- (void)gotoSuccessWithOrgId:(long long)arg1 industryCode:(long long)arg2 industryDesc:(id)arg3;
- (void)createTeamWithBoss:(_Bool)arg1;
- (void)setTeamBoss;
- (void)nextButtonClick:(id)arg1;
- (void)selectMembersToDepart:(id)arg1;
- (void)gotoManageMembers:(id)arg1;
- (id)subItemWithDepart:(id)arg1;
- (id)fixedItemWithDepart:(id)arg1;
- (void)loadDataSource;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end


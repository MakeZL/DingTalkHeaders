//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTAddMemberHandler, DTManageMemberDatasource, DTTeamDepartment, UICollectionView;

@interface DTManageMemberViewController : DTViewController
{
    DTTeamDepartment *_depart;
    CDUnknownBlockType _memberDidChange;
    UICollectionView *_collectionView;
    DTManageMemberDatasource *_datasource;
    DTAddMemberHandler *_addMemberHandler;
}

@property(retain, nonatomic) DTAddMemberHandler *addMemberHandler; // @synthesize addMemberHandler=_addMemberHandler;
@property(retain, nonatomic) DTManageMemberDatasource *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType memberDidChange; // @synthesize memberDidChange=_memberDidChange;
@property(retain, nonatomic) DTTeamDepartment *depart; // @synthesize depart=_depart;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)addMoreItems;
- (void)selectMembersToDepart:(id)arg1;
- (void)setMemberShouldRemove;
- (void)setAddingButtonPressed;
- (void)addMembersToDatasource:(id)arg1;
- (void)loadDatasource;
- (void)loadComponent;
- (void)resetCollectionViewHeight;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end


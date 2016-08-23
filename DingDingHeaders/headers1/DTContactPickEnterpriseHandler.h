//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickHandler.h"

#import "DTContactPickViewControllerDelegate-Protocol.h"
#import "DTLoadMoreDelegate-Protocol.h"

@class DTCellItem, DTContactPickEnterpriseSearchHandler, DTDepartment, DTEnterpriseCard, DTLoadMoreController, DTSectionItem, NSArray, NSDictionary, NSString;

@interface DTContactPickEnterpriseHandler : DTContactPickHandler <DTLoadMoreDelegate, DTContactPickViewControllerDelegate>
{
    _Bool _neverMoreData;
    _Bool _isLoading;
    unsigned long long _orgRelationType;
    NSArray *_dataSources;
    NSArray *_crumbDataSource;
    NSDictionary *_personIndex;
    NSDictionary *_deptIndex;
    DTSectionItem *_deptItem;
    DTSectionItem *_personItem;
    DTSectionItem *_selectAllSection;
    DTCellItem *_selectAllItem;
    DTDepartment *_dept;
    DTEnterpriseCard *_card;
    DTLoadMoreController *_loadMoreController;
    double _defaultTitleWidth;
    DTContactPickEnterpriseSearchHandler *_searchHandler;
}

@property(nonatomic) __weak DTContactPickEnterpriseSearchHandler *searchHandler; // @synthesize searchHandler=_searchHandler;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) double defaultTitleWidth; // @synthesize defaultTitleWidth=_defaultTitleWidth;
@property(nonatomic) _Bool neverMoreData; // @synthesize neverMoreData=_neverMoreData;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTEnterpriseCard *card; // @synthesize card=_card;
@property(retain, nonatomic) DTDepartment *dept; // @synthesize dept=_dept;
@property(retain, nonatomic) DTCellItem *selectAllItem; // @synthesize selectAllItem=_selectAllItem;
@property(retain, nonatomic) DTSectionItem *selectAllSection; // @synthesize selectAllSection=_selectAllSection;
@property(retain, nonatomic) DTSectionItem *personItem; // @synthesize personItem=_personItem;
@property(retain, nonatomic) DTSectionItem *deptItem; // @synthesize deptItem=_deptItem;
@property(copy, nonatomic) NSDictionary *deptIndex; // @synthesize deptIndex=_deptIndex;
@property(copy, nonatomic) NSDictionary *personIndex; // @synthesize personIndex=_personIndex;
@property(copy, nonatomic) NSArray *crumbDataSource; // @synthesize crumbDataSource=_crumbDataSource;
@property(copy, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) unsigned long long orgRelationType; // @synthesize orgRelationType=_orgRelationType;
- (void).cxx_destruct;
- (void)checkShowPickDepartGuide;
- (id)handlerForSearchViewController:(id)arg1 searchBar:(id)arg2;
- (unsigned long long)enterpriseInfoIdentifierType;
- (id)enterpriseInfoIdentifier;
- (id)orgRelation;
- (long long)orgId;
- (id)enterpriseInfoName;
- (id)enterpriseInfoTitle;
- (id)rootCrumbItemWithName:(id)arg1;
- (void)cellItemDidSelected:(id)arg1;
- (void)loadMoreDataSourcesOnce:(_Bool)arg1;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)showsRelationListOfMasterRelation:(id)arg1;
- (id)cellItemWithDepartment:(id)arg1;
- (id)cellItemWithEnterperiseCard:(id)arg1 showSubordinate:(_Bool)arg2;
- (void)showsOrganizationRelations:(id)arg1 once:(_Bool)arg2;
- (id)crumbsWithOrgRelations;
- (void)allDataDidLoad;
- (void)asyncLoadMoreData;
- (void)selectAllItemDidClick:(id)arg1 cell:(id)arg2;
- (id)pickViewControllerWaterMaskItem;
- (_Bool)shouldShowWaterMask;
- (void)updateCellItemWithDeptIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)updateCellItemWithPersonIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)departmentsHasUnselected:(id)arg1;
- (void)departmentsHasSelected:(id)arg1;
- (void)departmentHasUnselected:(id)arg1;
- (void)departmentHasSelected:(id)arg1;
- (void)personsHasUnselected:(id)arg1;
- (void)personsHasSelected:(id)arg1;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (id)titleForViewController:(id)arg1;
- (void)loadDataSource;
- (id)dataSourceForCrumbView:(id)arg1;
- (_Bool)shouldShowSearchBar:(id)arg1;
- (_Bool)shouldShowCrumbViewForViewController:(id)arg1;
- (id)dataSourceForPickViewController:(id)arg1;
- (id)placeHolderForSearchBar:(id)arg1;
- (id)loadModelControllerForPicker:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (void)pickViewWillDestory:(id)arg1;
- (void)pickViewWillShow:(id)arg1;
- (void)dealloc;
- (void)setEnterpriseInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


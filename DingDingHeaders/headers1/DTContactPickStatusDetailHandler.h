//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickHandler.h"

#import "DTContactPickViewControllerDelegate-Protocol.h"

@class DTSectionItem, NSArray, NSString;

@interface DTContactPickStatusDetailHandler : DTContactPickHandler <DTContactPickViewControllerDelegate>
{
    _Bool _hasDept;
    NSArray *_dataSource;
    DTSectionItem *_deptSection;
    DTSectionItem *_persionSection;
    long long _selectCount;
}

@property(nonatomic) _Bool hasDept; // @synthesize hasDept=_hasDept;
@property(nonatomic) long long selectCount; // @synthesize selectCount=_selectCount;
@property(retain, nonatomic) DTSectionItem *persionSection; // @synthesize persionSection=_persionSection;
@property(retain, nonatomic) DTSectionItem *deptSection; // @synthesize deptSection=_deptSection;
@property(copy, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)dataSourceHasUpdateDate;
- (id)pickCellItemForPersonIdentifier:(id)arg1 canEdit:(_Bool)arg2;
- (id)pickCellItemForDeptIdentifier:(id)arg1 canEdit:(_Bool)arg2;
- (void)loadDataSource;
- (void)loadPersonDataSource;
- (void)loadDeptDataSource;
- (id)dataSourceForPickViewController:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (void)pickViewWillShow:(id)arg1;
- (void)dataSourceUpdate;
- (void)addNotifiaction;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


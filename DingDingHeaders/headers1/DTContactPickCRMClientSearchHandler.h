//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickSearchHandler.h"

#import "DTContactPickSearchViewControllerDelegate-Protocol.h"

@class DTLoadMoreController, DTSectionItem, NSString;

@interface DTContactPickCRMClientSearchHandler : DTContactPickSearchHandler <DTContactPickSearchViewControllerDelegate>
{
    _Bool _isLoading;
    long long _orgId;
    NSString *_staffId;
    DTSectionItem *_sectionItem;
    NSString *_searchText;
    DTLoadMoreController *_loadMoreController;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) DTSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)searchText:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (id)dataSourceForSearchViewController:(id)arg1;
- (void)updateDataSourceWithSearchResults:(id)arg1;
- (void)beginLoadMoreController:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)loadModelControllerForSearchView:(id)arg1;
- (void)searchViewWillDestory:(id)arg1;
- (void)searchViewWillShow:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickSearchHandler.h"

@class DTSectionItem, NSDictionary, NSString;

@interface DTContactPickEnterpriseSearchHandler : DTContactPickSearchHandler
{
    _Bool _isLoading;
    long long _orgId;
    DTSectionItem *_sectionItem;
    NSString *_searchText;
    NSDictionary *_index;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) DTSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)showsRelationListOfMasterRelation:(id)arg1;
- (void)cellItemDidSelected:(id)arg1;
- (id)cellItemWithEnterperiseCard:(id)arg1 showSubordinate:(_Bool)arg2;
- (void)showsSearchResult:(id)arg1 withSesarchText:(id)arg2;
- (void)searchEnterpriseCardsWithSearchText:(id)arg1 offset:(long long)arg2 size:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)beginLoadMoreController:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateCellItemWithPersonIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)personsHasUnselected:(id)arg1;
- (void)personsHasSelected:(id)arg1;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (void)searchText:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (id)loadModelControllerForSearchView:(id)arg1;
- (id)dataSourceForSearchViewController:(id)arg1;
- (void)searchViewWillDestory:(id)arg1;
- (void)searchViewWillShow:(id)arg1;

@end


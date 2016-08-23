//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickSearchHandler.h"

@class DTSectionItem, NSDictionary;

@interface DTContactPickFriendSearchHandler : DTContactPickSearchHandler
{
    DTSectionItem *_sectionItem;
    NSDictionary *_index;
}

@property(copy, nonatomic) NSDictionary *index; // @synthesize index=_index;
@property(retain, nonatomic) DTSectionItem *sectionItem; // @synthesize sectionItem=_sectionItem;
- (void).cxx_destruct;
- (id)cellItemWithContact:(id)arg1;
- (void)updateCellItemWithIdentifier:(id)arg1 isSelect:(_Bool)arg2;
- (void)personHasUnselected:(id)arg1;
- (void)personHasSelected:(id)arg1;
- (void)showsFriends:(id)arg1 searchText:(id)arg2;
- (void)searchMobileContactWithSearchText:(id)arg1;
- (void)searchText:(id)arg1;
- (id)emptyViewForViewController:(id)arg1;
- (_Bool)shouldShowEmptyView:(id)arg1;
- (id)dataSourceForSearchViewController:(id)arg1;
- (void)searchViewWillDestory:(id)arg1;
- (void)searchViewWillShow:(id)arg1;

@end


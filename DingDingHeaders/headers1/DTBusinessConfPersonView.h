//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class DTConferenceMember, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol BusinessConfPersonDelegate;

@interface DTBusinessConfPersonView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _showSpecial;
    _Bool _showStatus;
    _Bool _showSelf;
    _Bool _showNickName;
    _Bool _hideHeaderTitle;
    _Bool _itemSelected;
    id <BusinessConfPersonDelegate> _delegate;
    NSString *_sizeKey;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionLayout;
    NSMutableArray *_currentMembersArray;
    NSMutableArray *_currentUIDsArray;
    NSMutableArray *_currentRefuseUIDs;
    NSString *_peopleTitle;
    unsigned long long _count;
    DTConferenceMember *_selfMember;
}

@property(retain, nonatomic) DTConferenceMember *selfMember; // @synthesize selfMember=_selfMember;
@property(nonatomic, getter=isItemSelected) _Bool itemSelected; // @synthesize itemSelected=_itemSelected;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) _Bool hideHeaderTitle; // @synthesize hideHeaderTitle=_hideHeaderTitle;
@property(copy, nonatomic) NSString *peopleTitle; // @synthesize peopleTitle=_peopleTitle;
@property(retain, nonatomic) NSMutableArray *currentRefuseUIDs; // @synthesize currentRefuseUIDs=_currentRefuseUIDs;
@property(retain, nonatomic) NSMutableArray *currentUIDsArray; // @synthesize currentUIDsArray=_currentUIDsArray;
@property(retain, nonatomic) NSMutableArray *currentMembersArray; // @synthesize currentMembersArray=_currentMembersArray;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool showNickName; // @synthesize showNickName=_showNickName;
@property(nonatomic) _Bool showSelf; // @synthesize showSelf=_showSelf;
@property(copy, nonatomic) NSString *sizeKey; // @synthesize sizeKey=_sizeKey;
@property(nonatomic) _Bool showStatus; // @synthesize showStatus=_showStatus;
@property(nonatomic) _Bool showSpecial; // @synthesize showSpecial=_showSpecial;
@property(nonatomic) __weak id <BusinessConfPersonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long lines;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)cancelShakeStatus;
- (void)reloadMembers:(id)arg1 clearBefore:(_Bool)arg2;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 hideHeaderTitle:(_Bool)arg2 showNickName:(_Bool)arg3 count:(unsigned long long)arg4;
- (id)initWithFrame:(struct CGRect)arg1 hideHeaderTitle:(_Bool)arg2 showNickName:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 hideHeaderTitle:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCollectionViewDatasource.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class DTManageMemberItem, NSArray, NSString, UICollectionView;

@interface DTManageMemberDatasource : DTCollectionViewDatasource <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _showAddingButton;
    _Bool _showMinusButton;
    _Bool _isEditing;
    CDUnknownBlockType _memberShouldRemove;
    CDUnknownBlockType _addingButtonPressed;
    UICollectionView *_collectionView;
    NSArray *_datasource;
    DTManageMemberItem *_addItem;
    DTManageMemberItem *_minusItem;
}

@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) DTManageMemberItem *minusItem; // @synthesize minusItem=_minusItem;
@property(retain, nonatomic) DTManageMemberItem *addItem; // @synthesize addItem=_addItem;
@property(copy, nonatomic) NSArray *datasource; // @synthesize datasource=_datasource;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool showMinusButton; // @synthesize showMinusButton=_showMinusButton;
@property(nonatomic) _Bool showAddingButton; // @synthesize showAddingButton=_showAddingButton;
@property(copy, nonatomic) CDUnknownBlockType addingButtonPressed; // @synthesize addingButtonPressed=_addingButtonPressed;
@property(copy, nonatomic) CDUnknownBlockType memberShouldRemove; // @synthesize memberShouldRemove=_memberShouldRemove;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)allMembers;
- (void)endEditing;
- (void)startEditing;
- (void)setMembers:(id)arg1;
- (void)configCollectionView:(id)arg1;
- (id)collectionViewLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

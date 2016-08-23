//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, PSTCollectionReusableView, PSTCollectionViewData, PSTCollectionViewExt, PSTCollectionViewLayout, UITouch, UIView;
@protocol PSTCollectionViewDataSource, PSTCollectionViewDelegate;

@interface PSTCollectionView : UIScrollView <UIScrollViewDelegate>
{
    PSTCollectionViewLayout *_layout;
    id <PSTCollectionViewDataSource> _dataSource;
    UIView *_backgroundView;
    NSMutableSet *_indexPathsForSelectedItems;
    NSMutableDictionary *_cellReuseQueues;
    NSMutableDictionary *_supplementaryViewReuseQueues;
    NSMutableDictionary *_decorationViewReuseQueues;
    NSMutableSet *_indexPathsForHighlightedItems;
    int _reloadingSuspendedCount;
    PSTCollectionReusableView *_firstResponderView;
    UIView *_newContentView;
    int _firstResponderViewType;
    NSString *_firstResponderViewKind;
    NSIndexPath *_firstResponderIndexPath;
    NSMutableDictionary *_allVisibleViewsDict;
    NSIndexPath *_pendingSelectionIndexPath;
    NSMutableSet *_pendingDeselectionIndexPaths;
    PSTCollectionViewData *_collectionViewData;
    id _update;
    struct CGRect _visibleBoundRects;
    struct CGRect _preRotationBounds;
    struct CGPoint _rotationBoundsOffset;
    int _rotationAnimationCount;
    int _updateCount;
    NSMutableArray *_insertItems;
    NSMutableArray *_deleteItems;
    NSMutableArray *_reloadItems;
    NSMutableArray *_moveItems;
    NSArray *_originalInsertItems;
    NSArray *_originalDeleteItems;
    UITouch *_currentTouch;
    CDUnknownBlockType _updateCompletionHandler;
    NSMutableDictionary *_cellClassDict;
    NSMutableDictionary *_cellNibDict;
    NSMutableDictionary *_supplementaryViewClassDict;
    NSMutableDictionary *_supplementaryViewNibDict;
    NSMutableDictionary *_cellNibExternalObjectsTables;
    NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;
    struct {
        unsigned int delegateShouldHighlightItemAtIndexPath:1;
        unsigned int delegateDidHighlightItemAtIndexPath:1;
        unsigned int delegateDidUnhighlightItemAtIndexPath:1;
        unsigned int delegateShouldSelectItemAtIndexPath:1;
        unsigned int delegateShouldDeselectItemAtIndexPath:1;
        unsigned int delegateDidSelectItemAtIndexPath:1;
        unsigned int delegateDidDeselectItemAtIndexPath:1;
        unsigned int delegateSupportsMenus:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateDidEndDisplayingSupplementaryView:1;
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryElement:1;
        unsigned int reloadSkippedDuringSuspension:1;
        unsigned int scheduledUpdateVisibleCells:1;
        unsigned int scheduledUpdateVisibleCellLayoutAttributes:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int updating:1;
        unsigned int fadeCellsForBoundsChange:1;
        unsigned int updatingLayout:1;
        unsigned int needsReload:1;
        unsigned int reloading:1;
        unsigned int skipLayoutDuringSnapshotting:1;
        unsigned int layoutInvalidatedSinceLastCellUpdate:1;
        unsigned int doneFirstLayout:1;
    } _collectionViewFlags;
    struct CGPoint _lastLayoutOffset;
    char filler[200];
}

@property(nonatomic) struct CGRect visibleBoundRects; // @synthesize visibleBoundRects=_visibleBoundRects;
@property(retain, nonatomic) PSTCollectionViewData *collectionViewData; // @synthesize collectionViewData=_collectionViewData;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) id <PSTCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSDictionary *visibleViewsDict; // @synthesize visibleViewsDict=_allVisibleViewsDict;
@property(readonly, nonatomic) id currentUpdate; // @synthesize currentUpdate=_update;
@property(retain, nonatomic) PSTCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_layout;
- (void).cxx_destruct;
- (void)updateSections:(id)arg1 updateAction:(long long)arg2;
- (void)updateRowsAtIndexPaths:(id)arg1 updateAction:(long long)arg2;
- (void)endItemAnimations;
- (void)setupCellAnimations;
- (void)updateWithItems:(id)arg1;
- (void)prepareLayoutForUpdates;
- (id)arrayForUpdateAction:(long long)arg1;
- (void)resumeReloads;
- (void)suspendReloads;
- (void)addControlledSubview:(id)arg1;
- (void)reuseDecorationView:(id)arg1;
- (void)reuseSupplementaryView:(id)arg1;
- (void)reuseCell:(id)arg1;
- (void)queueReusableView:(id)arg1 inQueue:(id)arg2 withIdentifier:(id)arg3;
- (id)createPreparedSupplementaryViewForElementOfKind:(id)arg1 atIndexPath:(id)arg2 withLayoutAttributes:(id)arg3;
- (id)createPreparedCellForItemAtIndexPath:(id)arg1 withLayoutAttributes:(id)arg2;
- (void)updateVisibleCellsNow:(_Bool)arg1;
- (void)invalidateLayout;
@property(readonly, nonatomic) PSTCollectionViewExt *extVars;
@property(nonatomic) _Bool allowsMultipleSelection;
@property(nonatomic) _Bool allowsSelection;
@property(nonatomic) id <PSTCollectionViewDelegate> delegate;
- (void)setCollectionViewLayout:(id)arg1 animated:(_Bool)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (_Bool)unhighlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3 shouldCheckHighlight:(_Bool)arg4;
- (_Bool)unhighlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (_Bool)highlightItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(_Bool)arg4;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 notifyDelegate:(_Bool)arg3;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3 notifyDelegate:(_Bool)arg4;
- (void)userSelectedItemAtIndexPath:(id)arg1;
- (void)cellTouchCancelled;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)makeRect:(struct CGRect)arg1 toScrollPosition:(unsigned long long)arg2;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)reloadData;
- (id)visibleCells;
- (id)allCells;
- (id)dequeueReusableOrCreateDecorationViewOfKind:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


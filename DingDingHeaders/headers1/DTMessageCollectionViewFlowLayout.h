//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

#import "DTMessageCollectionViewFlowLayoutProtocol-Protocol.h"

@class DTMessageCollectionView, NSString;

@interface DTMessageCollectionViewFlowLayout : UICollectionViewFlowLayout <DTMessageCollectionViewFlowLayoutProtocol>
{
    struct CGSize _maxImageSize;
    struct CGSize _minImageSize;
    struct CGSize _statusViewSize;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
@property(nonatomic) struct CGSize statusViewSize; // @synthesize statusViewSize=_statusViewSize;
@property(nonatomic) struct CGSize minImageSize; // @synthesize minImageSize=_minImageSize;
@property(nonatomic) struct CGSize maxImageSize; // @synthesize maxImageSize=_maxImageSize;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1 indexPath:(id)arg2;
- (void)invalidateAllLayoutWithContext:(id)arg1;
- (id)layoutAttributesWithIndexPath:(id)arg1 vcStyle:(long long)arg2;
- (void)configureMessageCellLayoutAttributes:(id)arg1 indexPath:(id)arg2;
- (void)configureNormalMessageCellLayoutAttributes:(id)arg1 messageBubbleSize:(struct CGSize)arg2 sharpWidth:(double)arg3 isMerge:(_Bool)arg4 message:(id)arg5;
- (void)configureCMessageCellLayoutAttributes:(id)arg1 messageBubbleSize:(struct CGSize)arg2 sharpWidth:(double)arg3 isMerge:(_Bool)arg4 message:(id)arg5;
- (struct CGSize)messageBubbleSizeForItemAtIndexPath:(id)arg1;
- (void)clearCellSizeCache;
- (void)didReceiveDeviceOrientationDidChangeNotification:(id)arg1;
- (void)didReceiveApplicationMemoryWarningNotification:(id)arg1;
@property(readonly, nonatomic) double itemWidth;
- (id)init;
- (void)configureFlowLayout;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) __weak DTMessageCollectionView *collectionView; // @dynamic collectionView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


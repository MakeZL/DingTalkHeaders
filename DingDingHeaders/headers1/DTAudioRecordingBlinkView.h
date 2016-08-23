//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABasicAnimation, DTMessageControllerDataSource, UICollectionView, UIImageView;

@interface DTAudioRecordingBlinkView : UIView
{
    double _contentOffsetY;
    UIImageView *_blinkImageView;
    CABasicAnimation *_blinkAnimation;
    struct {
        unsigned int addedObserver:1;
        unsigned int updateContentOffsetOnce:1;
    } _blinkViewFlags;
    UICollectionView *_collectionView;
    DTMessageControllerDataSource *_dataSource;
    double _bottomBoundary;
}

+ (void)movementAnimationWithKind:(unsigned long long)arg1 onView:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fadeAnimationWithKind:(unsigned long long)arg1 onView:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)dismiss:(_Bool)arg1 kind:(unsigned long long)arg2;
+ (void)showInView:(id)arg1 animated:(_Bool)arg2 kind:(unsigned long long)arg3 initializtion:(CDUnknownBlockType)arg4;
@property(nonatomic) double bottomBoundary; // @synthesize bottomBoundary=_bottomBoundary;
@property(nonatomic) __weak DTMessageControllerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeCollectionViewKeyPathObserver;
- (void)addCollectionViewKeyPathObserver;
- (void)dismissBlinkView:(CDUnknownBlockType)arg1;
- (void)stopBlink;
- (_Bool)hasBlinkAnimation;
- (void)startBlink;
- (void)willMoveToSuperview:(id)arg1;
- (void)contentOffsetDidChange:(struct CGPoint)arg1;
- (void)contentSizeDidChange:(struct CGSize)arg1;
- (struct CGRect)frameInView:(id)arg1 contentHeight:(double)arg2;
- (double)offsetYInView:(id)arg1 contentHeight:(double)arg2;
- (double)offsetYWithLastMessage;
- (void)show:(_Bool)arg1 kind:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setupRecordingBlinkView;
- (id)initWithFrame:(struct CGRect)arg1;

@end


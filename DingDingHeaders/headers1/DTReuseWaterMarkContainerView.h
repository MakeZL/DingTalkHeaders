//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTWaterMarkView;

@interface DTReuseWaterMarkContainerView : UIView
{
    DTWaterMarkView *_firstWaterMarkView;
    DTWaterMarkView *_secondWaterMarkView;
    double _currentOffsetY;
}

@property(nonatomic) double currentOffsetY; // @synthesize currentOffsetY=_currentOffsetY;
@property(retain, nonatomic) DTWaterMarkView *secondWaterMarkView; // @synthesize secondWaterMarkView=_secondWaterMarkView;
@property(retain, nonatomic) DTWaterMarkView *firstWaterMarkView; // @synthesize firstWaterMarkView=_firstWaterMarkView;
- (void).cxx_destruct;
- (id)downWaterMarkView;
- (id)upWaterMarkView;
- (void)scrollViewWithOffsetY:(double)arg1 scrollView:(id)arg2;
- (void)setWaterMarkViewItem:(id)arg1 frame:(struct CGRect)arg2;
- (void)setWaterMarkViewItem:(id)arg1;
- (void)setContainerFrame:(struct CGRect)arg1;
- (void)loadComponent;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


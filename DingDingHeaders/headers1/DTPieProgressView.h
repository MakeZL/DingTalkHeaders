//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTPieProgressItem, DTTotalScoreView, NSArray;

@interface DTPieProgressView : UIView
{
    double _defaultCenterY;
    double _radiusOutSide;
    double _gapRadia;
    double _fragmentRadia;
    NSArray *_outsideCircleArray;
    NSArray *_fragmentBgLayerArray;
    NSArray *_fragmentLayerArray;
    double _maxScore;
    long long _totalScore;
    DTPieProgressItem *_pieData;
    DTTotalScoreView *_totalScoreView;
}

@property(retain, nonatomic) DTTotalScoreView *totalScoreView; // @synthesize totalScoreView=_totalScoreView;
@property(retain, nonatomic) DTPieProgressItem *pieData; // @synthesize pieData=_pieData;
@property(nonatomic) long long totalScore; // @synthesize totalScore=_totalScore;
@property(nonatomic) double maxScore; // @synthesize maxScore=_maxScore;
@property(copy, nonatomic) NSArray *fragmentLayerArray; // @synthesize fragmentLayerArray=_fragmentLayerArray;
@property(copy, nonatomic) NSArray *fragmentBgLayerArray; // @synthesize fragmentBgLayerArray=_fragmentBgLayerArray;
@property(copy, nonatomic) NSArray *outsideCircleArray; // @synthesize outsideCircleArray=_outsideCircleArray;
@property(nonatomic) double fragmentRadia; // @synthesize fragmentRadia=_fragmentRadia;
@property(nonatomic) double gapRadia; // @synthesize gapRadia=_gapRadia;
@property(nonatomic) double radiusOutSide; // @synthesize radiusOutSide=_radiusOutSide;
@property(nonatomic) double defaultCenterY; // @synthesize defaultCenterY=_defaultCenterY;
- (void).cxx_destruct;
- (id)pieScoreLabel;
- (struct CGRect)scoreFrameToView:(id)arg1;
- (void)configWithPieData:(id)arg1;
- (void)playAnimation;
- (id)subTitleLabel:(id)arg1;
- (void)addTotalScoreView;
- (void)addSubTitileLabels;
- (void)addProgressLayer;
- (void)addOutSideCircleLayer;
- (void)calculatePiePath;
- (void)showPieChart;
- (void)loadComponent;
- (void)setDefaultConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end


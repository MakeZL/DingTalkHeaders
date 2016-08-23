//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTLineChartView, DTOrgTrendDataModel, DTPieProgressView, UIPageControl, UIScrollView;

@interface DTOrgTrendDataView : UIView
{
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    DTLineChartView *_lineChartView;
    DTPieProgressView *_scoreDetailView;
    DTOrgTrendDataModel *_trendData;
}

@property(retain, nonatomic) DTOrgTrendDataModel *trendData; // @synthesize trendData=_trendData;
@property(retain, nonatomic) DTPieProgressView *scoreDetailView; // @synthesize scoreDetailView=_scoreDetailView;
@property(retain, nonatomic) DTLineChartView *lineChartView; // @synthesize lineChartView=_lineChartView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)configLineChartData:(id)arg1;
- (void)configWithDefaultData;
- (void)configWithTrendData:(id)arg1;
- (void)loadComponent;
- (id)initWithFrame:(struct CGRect)arg1;

@end


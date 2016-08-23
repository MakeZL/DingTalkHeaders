//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UISegmentedControl;
@protocol DTRedMineSectionHeaderDelegate;

@interface DTRedMineSectionHeader : UIView
{
    id <DTRedMineSectionHeaderDelegate> _delegate;
    UISegmentedControl *_segmentedControl;
    UIView *_midView;
}

@property(retain, nonatomic) UIView *midView; // @synthesize midView=_midView;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) __weak id <DTRedMineSectionHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)segmentAction:(id)arg1;
- (void)layoutMidViewForStatus:(long long)arg1;
- (void)setHeaderStatus:(long long)arg1;
- (void)loadComponents;
- (id)initWithFrame:(struct CGRect)arg1;

@end


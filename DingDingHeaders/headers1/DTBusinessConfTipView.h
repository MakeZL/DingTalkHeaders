//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CATextLayer, NSMutableAttributedString;

@interface DTBusinessConfTipView : UIView
{
    CAShapeLayer *_pathLayer;
    CATextLayer *_textLayer;
    NSMutableAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)pathForRect:(struct CGRect)arg1 withArrowOffset:(double)arg2;
- (void)loadCompoment;
- (void)setBackPathColor:(id)arg1;
- (void)setString:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


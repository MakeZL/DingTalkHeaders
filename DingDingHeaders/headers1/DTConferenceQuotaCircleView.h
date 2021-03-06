//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer, NSMutableAttributedString, UILabel;

@interface DTConferenceQuotaCircleView : UIButton
{
    _Bool _lowAlert;
    double _progress;
    long long _quotaValue;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_progressLayer;
    UILabel *_centerTextLabel;
    NSMutableAttributedString *_attributedString;
}

@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) UILabel *centerTextLabel; // @synthesize centerTextLabel=_centerTextLabel;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(nonatomic) _Bool lowAlert; // @synthesize lowAlert=_lowAlert;
@property(nonatomic) long long quotaValue; // @synthesize quotaValue=_quotaValue;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end


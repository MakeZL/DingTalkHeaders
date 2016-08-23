//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, CATextLayer, NSAttributedString, NSMutableAttributedString, NSString, UILabel;

@interface DTBusinessConfMainHeaderInfoView : UIView
{
    NSString *_centerString;
    double _progress;
    NSAttributedString *_underAttributeString;
    CAShapeLayer *_circleLayer;
    CATextLayer *_centerTextLayer;
    NSMutableAttributedString *_attributedString;
    CAShapeLayer *_progressLayer;
    CATextLayer *_statusTextLayer;
    UILabel *_underLabel;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UILabel *underLabel; // @synthesize underLabel=_underLabel;
@property(retain, nonatomic) CATextLayer *statusTextLayer; // @synthesize statusTextLayer=_statusTextLayer;
@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(retain, nonatomic) CATextLayer *centerTextLayer; // @synthesize centerTextLayer=_centerTextLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(copy, nonatomic) NSAttributedString *underAttributeString; // @synthesize underAttributeString=_underAttributeString;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *centerString; // @synthesize centerString=_centerString;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)animationProgress:(double)arg1;
- (void)animationContent:(id)arg1 terminateContent:(id)arg2;
- (void)defaultValues;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class DTConferenceQuotaCircleView, UILabel, UIView;

@interface DTConferenceQuotaInfoView : UIButton
{
    DTConferenceQuotaCircleView *_circleVoIP;
    UILabel *_labelVoIP;
    DTConferenceQuotaCircleView *_circleBizCall;
    UILabel *_labelBizCall;
    DTConferenceQuotaCircleView *_circleConferenceCall;
    UILabel *_labelConferenceCall;
    UIView *_lineView1;
    UIView *_lineView2;
}

@property(retain, nonatomic) UIView *lineView2; // @synthesize lineView2=_lineView2;
@property(retain, nonatomic) UIView *lineView1; // @synthesize lineView1=_lineView1;
@property(retain, nonatomic) UILabel *labelConferenceCall; // @synthesize labelConferenceCall=_labelConferenceCall;
@property(retain, nonatomic) DTConferenceQuotaCircleView *circleConferenceCall; // @synthesize circleConferenceCall=_circleConferenceCall;
@property(retain, nonatomic) UILabel *labelBizCall; // @synthesize labelBizCall=_labelBizCall;
@property(retain, nonatomic) DTConferenceQuotaCircleView *circleBizCall; // @synthesize circleBizCall=_circleBizCall;
@property(retain, nonatomic) UILabel *labelVoIP; // @synthesize labelVoIP=_labelVoIP;
@property(retain, nonatomic) DTConferenceQuotaCircleView *circleVoIP; // @synthesize circleVoIP=_circleVoIP;
- (void).cxx_destruct;
- (id)getLineView;
- (void)layoutSubviews;
- (void)refreshModel:(id)arg1;
- (void)circleSinglePressed:(id)arg1;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBubbleAttachmentCView.h"

@class UIImageView, UILabel;

@interface DTMessageBubbleAttachmentCOAView : DTMessageBubbleAttachmentCView
{
    UILabel *_label1;
    UILabel *_label2;
    UILabel *_label3;
    UILabel *_label4;
    UILabel *_label5;
    UILabel *_label6;
    UIImageView *_bgImageView;
    UILabel *_richLabel;
}

+ (struct CGSize)sizeThatFitsWithCMode:(id)arg1 actionModel:(id)arg2 constraints:(struct CGSize)arg3;
@property(retain, nonatomic) UILabel *richLabel; // @synthesize richLabel=_richLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UILabel *label6; // @synthesize label6=_label6;
@property(retain, nonatomic) UILabel *label5; // @synthesize label5=_label5;
@property(retain, nonatomic) UILabel *label4; // @synthesize label4=_label4;
@property(retain, nonatomic) UILabel *label3; // @synthesize label3=_label3;
@property(retain, nonatomic) UILabel *label2; // @synthesize label2=_label2;
@property(retain, nonatomic) UILabel *label1; // @synthesize label1=_label1;
- (void).cxx_destruct;
- (void)refrushUIWithCMode:(id)arg1 actionModel:(id)arg2;
- (void)resetUIComponent:(_Bool)arg1;
- (double)refrushFormUIWithMode:(id)arg1 contentHeight:(double)arg2;
- (void)setBgImageWithActionModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

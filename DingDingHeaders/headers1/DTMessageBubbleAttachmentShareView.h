//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTWebImageView, UIImageView, UILabel;

@interface DTMessageBubbleAttachmentShareView : UIView
{
    DTWebImageView *_iconImageView;
    UILabel *_contentLabel;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_fullContentLabel;
    UIView *_lineView;
    UIImageView *_nextImageView;
}

+ (struct CGSize)sizeThatFitsWithTitleString:(id)arg1 contentString:(id)arg2 constraints:(struct CGSize)arg3;
@property(retain, nonatomic) UIImageView *nextImageView; // @synthesize nextImageView=_nextImageView;
@property(readonly, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(readonly, nonatomic) UILabel *fullContentLabel; // @synthesize fullContentLabel=_fullContentLabel;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) DTWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 content:(id)arg2 time:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTWebImageView, UILabel;

@interface DTMessageBubbleAttachmentLinkView : UIView
{
    DTWebImageView *_iconImageView;
    UILabel *_contentLabel;
    UILabel *_titleLabel;
    UILabel *_authorLabel;
}

+ (struct CGSize)sizeThatFitsWithTitleString:(id)arg1 contentString:(id)arg2 constraints:(struct CGSize)arg3;
@property(readonly, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) DTWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 content:(id)arg2 authorAndTime:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


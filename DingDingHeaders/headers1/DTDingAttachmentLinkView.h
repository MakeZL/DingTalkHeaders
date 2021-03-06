//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTWebImageView, UIImageView, UILabel;

@interface DTDingAttachmentLinkView : UIView
{
    UIImageView *_bgImageView;
    DTWebImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
}

+ (struct CGSize)sizeThatFitsWithString:(id)arg1 constraints:(struct CGSize)arg2;
@property(readonly, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) DTWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 content:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end


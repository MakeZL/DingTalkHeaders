//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface DTMessageBubbleRedEnvelopView : UIView
{
    UIImageView *_logoIcon;
    UILabel *_congratsLabel;
    UILabel *_statusLabel;
    UILabel *_footerLabel;
}

+ (struct CGSize)sizeThatFitsWithCMode:(id)arg1 constraints:(struct CGSize)arg2;
@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *congratsLabel; // @synthesize congratsLabel=_congratsLabel;
@property(retain, nonatomic) UIImageView *logoIcon; // @synthesize logoIcon=_logoIcon;
- (void).cxx_destruct;
- (void)refrushUIWithMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


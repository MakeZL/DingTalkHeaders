//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface DTIconNameView : UIControl
{
    UILabel *_label;
    UIImageView *_icon;
    CDUnknownBlockType _iconNameViewPressed;
    unsigned long long _style;
}

@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType iconNameViewPressed; // @synthesize iconNameViewPressed=_iconNameViewPressed;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)viewPressed:(id)arg1;
- (void)layout;
- (double)textWidthWithMaxSize:(struct CGSize)arg1;
- (id)initWithStyle:(unsigned long long)arg1;

@end


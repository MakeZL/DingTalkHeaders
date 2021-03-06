//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol DTNewMessagesButtonDelegate;

@interface DTNewMessagesButton : UIView
{
    UIButton *_button;
    UILabel *_label;
    UIImageView *_arrowImageView;
    id <DTNewMessagesButtonDelegate> _delegate;
}

@property(nonatomic) id <DTNewMessagesButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)btnClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end


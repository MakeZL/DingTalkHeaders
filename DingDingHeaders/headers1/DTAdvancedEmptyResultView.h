//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSAttributedString, UIButton, UIImageView, UILabel;

@interface DTAdvancedEmptyResultView : UIControl
{
    CDUnknownBlockType _backgroundDidClick;
    CDUnknownBlockType _actionButtonClick;
    CDUnknownBlockType _linkDidClick;
    unsigned long long _viewType;
    UIImageView *_imageView;
    UILabel *_label;
    UILabel *_detail;
    NSAttributedString *_labelText;
    UIButton *_actionButton;
    UIButton *_linkButton;
    CDUnknownBlockType _finishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSAttributedString *labelText; // @synthesize labelText=_labelText;
@property(retain, nonatomic) UILabel *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) unsigned long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) CDUnknownBlockType linkDidClick; // @synthesize linkDidClick=_linkDidClick;
@property(copy, nonatomic) CDUnknownBlockType actionButtonClick; // @synthesize actionButtonClick=_actionButtonClick;
@property(copy, nonatomic) CDUnknownBlockType backgroundDidClick; // @synthesize backgroundDidClick=_backgroundDidClick;
- (void).cxx_destruct;
- (void)backgroundPressed:(id)arg1;
- (void)linkButtonClick:(id)arg1;
- (void)actionButtonClick:(id)arg1;
- (void)setLinkText:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setActionButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setViewSize:(struct CGSize)arg1;
- (void)startLayout;
- (void)initForCRMFilter;
- (void)initForCRMNeedAllocClient;
- (void)initForCRMMySubordinateClient;
- (void)initForCRMMyClient;
- (id)initWithStyle:(unsigned long long)arg1;

@end


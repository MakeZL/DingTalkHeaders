//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTDLDownloaderOperation, LWEmotionItem, UIImageView, UILabel;

@interface LWEmotionItemView : UIView
{
    UIImageView *_bgImageView;
    UIImageView *_imageView;
    UILabel *_label;
    LWEmotionItem *_item;
    DTDLDownloaderOperation *_downloaderOperation;
}

@property(retain, nonatomic) DTDLDownloaderOperation *downloaderOperation; // @synthesize downloaderOperation=_downloaderOperation;
@property(retain, nonatomic) LWEmotionItem *item; // @synthesize item=_item;
@property(copy, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)setBgImageViewHidden:(_Bool)arg1;
- (void)loadComponent;
- (void)reloadWithItem:(id)arg1;
- (void)reloadMagic;
- (void)reloadEmoji;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end


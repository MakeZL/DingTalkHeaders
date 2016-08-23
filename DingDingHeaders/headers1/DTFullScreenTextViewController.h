//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTAttributedLabel, NSString, UIFont, UIScrollView;

@interface DTFullScreenTextViewController : DTViewController
{
    NSString *_text;
    UIFont *_font;
    UIScrollView *_scrollView;
    DTAttributedLabel *_textLabel;
}

@property(retain, nonatomic) DTAttributedLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)layoutSubviews;
- (void)onTextViewTap:(id)arg1;
- (void)loadComponent;
- (void)viewDidLoad;

@end


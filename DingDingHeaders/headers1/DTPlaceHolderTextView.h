//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UILabel;

@interface DTPlaceHolderTextView : UITextView
{
    NSString *_placeholder;
    UIColor *_placeholderColor;
    UILabel *_placeHolderLabel;
}

@property(retain, nonatomic) UILabel *placeHolderLabel; // @synthesize placeHolderLabel=_placeHolderLabel;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)setTextContainerInset:(struct UIEdgeInsets)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setText:(id)arg1;
- (void)textChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;

@end


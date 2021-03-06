//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTPlaceHolderTextView, UIImageView;

@interface DTRedEnvelopTextInputCell : UIView
{
    long long _maxInputCnt;
    DTPlaceHolderTextView *_textInputView;
    UIImageView *_topLine;
    UIImageView *_bottomLine;
}

@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) DTPlaceHolderTextView *textInputView; // @synthesize textInputView=_textInputView;
@property(nonatomic) long long maxInputCnt; // @synthesize maxInputCnt=_maxInputCnt;
- (void).cxx_destruct;
- (void)inputTextDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end


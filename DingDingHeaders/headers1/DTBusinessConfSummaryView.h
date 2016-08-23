//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class DTBusinessConfSummaryModel, NSString, UITextView, UIWindow;

@interface DTBusinessConfSummaryView : UIView <UITextViewDelegate>
{
    DTBusinessConfSummaryModel *_model;
    UIWindow *_summaryWindow;
    UITextView *_contentTextView;
    NSString *_contentText;
}

+ (id)showSummaryViewWithModel:(id)arg1;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) UITextView *contentTextView; // @synthesize contentTextView=_contentTextView;
@property(retain, nonatomic) UIWindow *summaryWindow; // @synthesize summaryWindow=_summaryWindow;
@property(retain, nonatomic) DTBusinessConfSummaryModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)actionsCommon:(id)arg1;
- (void)rightBarButtonAction;
- (void)leftBarButtonAction;
- (void)touchDismissKeyboard;
- (void)touchAction;
- (void)clearContent;
- (void)dismiss:(CDUnknownBlockType)arg1;
- (void)show;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadCompoment;
- (void)loadWidnow;
- (id)initShowSummaryViewWithModel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class LWEmotionViewModel, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UILongPressGestureRecognizer;
@protocol LWEmotionViewDelegate;

@interface LWEmotionView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _hasEmotionImagesLoaded;
    _Bool _isLongPress;
    UIButton *_backspaceButton;
    UIButton *_sendButton;
    LWEmotionViewModel *_model;
    id <LWEmotionViewDelegate> _delegate;
    UIActivityIndicatorView *_loadingIndicator;
    long long _emoShowIndex;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSMutableArray *_emotionViewArray;
    struct CGPoint _touchBeginPoint;
}

@property(retain, nonatomic) NSMutableArray *emotionViewArray; // @synthesize emotionViewArray=_emotionViewArray;
@property(nonatomic) struct CGPoint touchBeginPoint; // @synthesize touchBeginPoint=_touchBeginPoint;
@property(nonatomic) _Bool isLongPress; // @synthesize isLongPress=_isLongPress;
@property(nonatomic) _Bool hasEmotionImagesLoaded; // @synthesize hasEmotionImagesLoaded=_hasEmotionImagesLoaded;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) long long emoShowIndex; // @synthesize emoShowIndex=_emoShowIndex;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) __weak id <LWEmotionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LWEmotionViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *backspaceButton; // @synthesize backspaceButton=_backspaceButton;
- (void).cxx_destruct;
- (void)send:(id)arg1;
- (void)backspaceButtonPressed:(id)arg1;
- (void)pickEmotion:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)dalayTouchBegan;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)magicEmotionModelWithIndex:(long long)arg1;
- (id)scrollView;
- (void)showMaskImageView:(long long)arg1;
- (void)dismissMaskImageView;
- (long long)getEmotionIndex:(struct CGPoint)arg1;
- (void)loadEmotionImages:(CDUnknownBlockType)arg1;
- (void)refreshEmotions;
- (void)loadComponent;
- (void)reloadWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIButton;
@protocol VideoConfHidenFunctionDelegate;

@interface DTVideoConferenceHiddenFunctionView : UICollectionReusableView
{
    id <VideoConfHidenFunctionDelegate> _delegate;
    UIButton *_functionBtn;
}

@property(retain, nonatomic) UIButton *functionBtn; // @synthesize functionBtn=_functionBtn;
@property(nonatomic) id <VideoConfHidenFunctionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)functionBtnPress:(id)arg1;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

@end


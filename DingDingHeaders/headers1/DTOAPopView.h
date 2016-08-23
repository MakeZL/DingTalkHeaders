//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImageView, UIPageControl, UIScrollView;

@interface DTOAPopView : UIView <UIScrollViewDelegate>
{
    NSArray *_itemArray;
    NSString *_cancelButttonTitle;
    NSString *_confirmButtonTitle;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _confirmBlock;
    UIScrollView *_scrollView;
    NSArray *_cellArray;
    UIPageControl *_pageControl;
    UIImageView *_separateLine;
    UIImageView *_verticalLine;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
}

+ (void)showWithItemArray:(id)arg1 cancelButtonTitle:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonBlock:(CDUnknownBlockType)arg4 confirmButtonBlock:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *verticalLine; // @synthesize verticalLine=_verticalLine;
@property(retain, nonatomic) UIImageView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(copy, nonatomic) NSArray *cellArray; // @synthesize cellArray=_cellArray;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(copy, nonatomic) NSString *cancelButttonTitle; // @synthesize cancelButttonTitle=_cancelButttonTitle;
@property(copy, nonatomic) NSArray *itemArray; // @synthesize itemArray=_itemArray;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutPopView;
- (void)loadComponent;
- (void)show;
- (void)confirmButtonClick;
- (void)cancelButtonClick;
- (void)dealloc;
- (id)initWithItemArray:(id)arg1 cancelButtonTitle:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonBlock:(CDUnknownBlockType)arg4 confirmButtonBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


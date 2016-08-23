//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UITableView;
@protocol BLPullUpListViewDataSource, BLPullUpListViewDelegate;

@interface BLPullUpListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isShowing;
    _Bool _isAnimating;
    UIView *_backgroundView;
    UITableView *_tableView;
    UIButton *_maskedButton;
    id <BLPullUpListViewDelegate> _delegate;
    id <BLPullUpListViewDataSource> _dataSource;
    double _rowHeight;
}

@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) __weak id <BLPullUpListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <BLPullUpListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(readonly, nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(readonly, nonatomic) UIButton *maskedButton; // @synthesize maskedButton=_maskedButton;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)markedButtonPressed:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)showInView:(id)arg1 belowView:(id)arg2 animated:(_Bool)arg3;
- (void)showInView:(id)arg1 animated:(_Bool)arg2;
- (void)initTableViewWithHeight:(double)arg1;
- (void)initMakedButton;
- (id)initWithFrame:(struct CGRect)arg1 tableViewHeight:(double)arg2 rowHeight:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 tableViewHeight:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


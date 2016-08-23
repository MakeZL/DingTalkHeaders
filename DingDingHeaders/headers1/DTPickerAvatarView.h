//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITableView;
@protocol DTPickerAvatarViewDelegate;

@interface DTPickerAvatarView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _canSelectNothing;
    _Bool _hideNumber;
    id <DTPickerAvatarViewDelegate> _delegate;
    long long _limitNumber;
    long long _pickedNumber;
    NSString *_tips;
    NSString *_confirmButtonTitle;
    UITableView *_avatarTableView;
    UIButton *_confirmButton;
    UILabel *_tipsLabel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITableView *avatarTableView; // @synthesize avatarTableView=_avatarTableView;
@property(nonatomic) _Bool hideNumber; // @synthesize hideNumber=_hideNumber;
@property(nonatomic) _Bool canSelectNothing; // @synthesize canSelectNothing=_canSelectNothing;
@property(retain, nonatomic) NSString *confirmButtonTitle; // @synthesize confirmButtonTitle=_confirmButtonTitle;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(nonatomic) long long pickedNumber; // @synthesize pickedNumber=_pickedNumber;
@property(nonatomic) long long limitNumber; // @synthesize limitNumber=_limitNumber;
@property(nonatomic) __weak id <DTPickerAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadConfirmButton;
- (void)confirmButtonPressed:(id)arg1;
@property(nonatomic) double contentOffset;
- (void)deleteColumnsAtColumnIndexes:(id)arg1 withRowAnimation:(long long)arg2;
- (void)insertColumnsAtColumnIndexes:(id)arg1 withRowAnimation:(long long)arg2;
- (void)scrollToColumnAtColumnIndex:(long long)arg1 atScrollPosition:(long long)arg2 animated:(_Bool)arg3;
- (void)reloadData;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)deselectColumnAtColumnIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)cellForRowAtColumnIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


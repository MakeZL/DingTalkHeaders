//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactTableViewCell.h"

@class DTJoinGroupRequestViewModel, UILabel, UIView;

@interface DTJoinGroupRequestCell : DTContactTableViewCell
{
    DTJoinGroupRequestViewModel *_requestViewModel;
    CDUnknownBlockType _tapApproveAction;
    UILabel *_messageLabel;
    UIView *_divierView;
}

@property(retain, nonatomic) UIView *divierView; // @synthesize divierView=_divierView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(copy, nonatomic) CDUnknownBlockType tapApproveAction; // @synthesize tapApproveAction=_tapApproveAction;
@property(retain, nonatomic) DTJoinGroupRequestViewModel *requestViewModel; // @synthesize requestViewModel=_requestViewModel;
- (void).cxx_destruct;
- (void)updateCellWithApproved:(_Bool)arg1;
- (void)updateViewModel:(id)arg1 isLast:(_Bool)arg2;
- (void)didChangeRequestViewModel;
- (void)updateWithContact:(id)arg1;
- (void)didTapApproveButton:(id)arg1;
- (void)layoutSubviews;
- (void)setupJoinGroupRequestCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


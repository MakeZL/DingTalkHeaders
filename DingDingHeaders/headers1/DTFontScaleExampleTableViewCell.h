//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class DTAvatarImageView, DTMessageBubbleAttachmentTextView, UIImageView, UILabel;

@interface DTFontScaleExampleTableViewCell : UITableViewCell
{
    DTAvatarImageView *_avaterView;
    UIImageView *_avatarImageView;
    DTMessageBubbleAttachmentTextView *_textView;
    UILabel *_contentLabel;
    UIImageView *_backgroundOutgoingImageView;
}

+ (double)heightForRowInCellWithModel:(id)arg1;
@property(retain, nonatomic) UIImageView *backgroundOutgoingImageView; // @synthesize backgroundOutgoingImageView=_backgroundOutgoingImageView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) DTMessageBubbleAttachmentTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) DTAvatarImageView *avaterView; // @synthesize avaterView=_avaterView;
- (void).cxx_destruct;
- (void)configCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

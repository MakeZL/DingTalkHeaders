//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel;
@protocol DTAlertViewDelegate;

@interface DTConferenceMarkView : UIView
{
    id <DTAlertViewDelegate> _delegate;
    NSMutableArray *_starArr;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_smileIcon;
    UILabel *_thanksLabel;
}

@property(retain, nonatomic) UILabel *thanksLabel; // @synthesize thanksLabel=_thanksLabel;
@property(retain, nonatomic) UIImageView *smileIcon; // @synthesize smileIcon=_smileIcon;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *starArr; // @synthesize starArr=_starArr;
@property(nonatomic) __weak id <DTAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


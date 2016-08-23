//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton;

@interface DTCRMFilterTag : UIView
{
    CDUnknownBlockType _tagDidSelected;
    CDUnknownBlockType _tagDidUnselected;
    NSString *_filterTag;
    UIButton *_tagBtn;
}

+ (double)tagWidth;
+ (double)tagHeight;
@property(retain, nonatomic) UIButton *tagBtn; // @synthesize tagBtn=_tagBtn;
@property(copy, nonatomic) NSString *filterTag; // @synthesize filterTag=_filterTag;
@property(copy, nonatomic) CDUnknownBlockType tagDidUnselected; // @synthesize tagDidUnselected=_tagDidUnselected;
@property(copy, nonatomic) CDUnknownBlockType tagDidSelected; // @synthesize tagDidSelected=_tagDidSelected;
- (void).cxx_destruct;
@property(nonatomic) _Bool isSelected;
- (void)tagDidClick:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "DTMessagePopupMenuDelegate-Protocol.h"

@class DTMessagePopupMenu, NSArray, NSString, UIButton;
@protocol DTMessageMenuItemDelegate;

@interface DTMessageMenuItem : UIControl <DTMessagePopupMenuDelegate>
{
    id <DTMessageMenuItemDelegate> _delegate;
    UIButton *_button;
    NSString *_title;
    NSArray *_subMenuItems;
    DTMessagePopupMenu *_popupMenu;
}

+ (void)dismissPopupMenu;
@property(retain, nonatomic) DTMessagePopupMenu *popupMenu; // @synthesize popupMenu=_popupMenu;
@property(retain, nonatomic) NSArray *subMenuItems; // @synthesize subMenuItems=_subMenuItems;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) __weak id <DTMessageMenuItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messagePopupMenu:(id)arg1 didSelectMenuAtIndex:(long long)arg2;
- (void)buttonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subMenuItems:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


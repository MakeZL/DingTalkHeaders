//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface DTGroupGridView : UIView
{
    unsigned long long _layout;
    unsigned long long _numberOfGrid;
    double _paddingOfOtherDirection;
    unsigned long long _mode;
    double _paddingOfPriorityDirection;
    struct CGSize _sizeOfGrid;
    struct UIEdgeInsets _marginInsets;
}

@property(nonatomic) struct CGSize sizeOfGrid; // @synthesize sizeOfGrid=_sizeOfGrid;
@property(nonatomic) double paddingOfPriorityDirection; // @synthesize paddingOfPriorityDirection=_paddingOfPriorityDirection;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) double paddingOfOtherDirection; // @synthesize paddingOfOtherDirection=_paddingOfOtherDirection;
@property(nonatomic) unsigned long long numberOfGrid; // @synthesize numberOfGrid=_numberOfGrid;
@property(nonatomic) unsigned long long layout; // @synthesize layout=_layout;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets=_marginInsets;
- (void)layoutSubviews;
- (void)updateConstraintsVertical;
- (void)updateConstraintsHorizontal;
- (void)checkConstraintsNecessary;
- (void)updateConstraints;

@end


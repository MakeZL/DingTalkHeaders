//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationItem.h>

@interface UINavigationItem (DT)
+ (void)load;
- (void)dt_setNavigationItemEnabled:(_Bool)arg1;
- (void)dt_setBackBarButtonItemTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 tintColro:(id)arg4;
- (void)dt_setBackBarButtonItemTitle:(id)arg1 tintColro:(id)arg2;
- (void)dt_setBackBarButtonItemTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)dt_setBackBarButtonItemTitle:(id)arg1;
- (void)dt_setRightBarButtonItems:(id)arg1;
- (void)dt_setRightBarButtonItem:(id)arg1;
- (void)dt_setLeftBarButtonItems:(id)arg1;
- (void)dt_setLeftBarButtonItem:(id)arg1;
- (_Bool)isFixBarButtonItem:(id)arg1;
- (id)iOS56FixedSpaceItem;
- (id)iOS7RightFixedSpaceItem;
- (id)iOS7FixedSpaceItem;
- (id)fixedSpaceItem:(double)arg1;
- (void)dt_swizzle_setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)dt_swizzle_setLeftBarButtonItem:(id)arg1 animated:(_Bool)arg2;
@end

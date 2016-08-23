//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSIndexPath, UIColor, UITableView, UIView, WWSlideMenuCell;

@protocol WWSlideMenuCellDelegate <NSObject>
- (UITableView *)tableViewOfMenuCell:(WWSlideMenuCell *)arg1;
- (_Bool)menuCell:(WWSlideMenuCell *)arg1 enableAtIndexPath:(NSIndexPath *)arg2;

@optional
- (UIView *)viewOfOverlay:(WWSlideMenuCell *)arg1;
- (UIColor *)menuCell:(WWSlideMenuCell *)arg1 atIndexPath:(NSIndexPath *)arg2 menuItemColorAtIndex:(long long)arg3;
- (void)menuCell:(WWSlideMenuCell *)arg1 atIndexPath:(NSIndexPath *)arg2 didClickedMenuIndex:(long long)arg3;
- (NSArray *)menuCell:(WWSlideMenuCell *)arg1 buttonsAtIndexPath:(NSIndexPath *)arg2;
- (NSArray *)menuCell:(WWSlideMenuCell *)arg1 titlesAtIndexPath:(NSIndexPath *)arg2;
@end


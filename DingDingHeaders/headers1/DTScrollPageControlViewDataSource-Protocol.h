//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTScrollPageControlView, UIView;

@protocol DTScrollPageControlViewDataSource <NSObject>
- (UIView *)pagingScrollView:(DTScrollPageControlView *)arg1 viewForIndex:(long long)arg2;
- (long long)pagingScrollViewNumberOfPages:(DTScrollPageControlView *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTDingListTable, NSSet;

@protocol DTDingListTableEventDelegate <NSObject>
- (void)dingListChangedToType:(long long)arg1;
- (void)dingListTableSelectedDataChanged:(DTDingListTable *)arg1 selectedList:(NSSet *)arg2;
@end

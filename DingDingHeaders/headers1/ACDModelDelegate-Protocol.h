//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACDIndexPathDelta, ACDModel;

@protocol ACDModelDelegate <NSObject>
- (void)acdModel:(ACDModel *)arg1 didChangeWithDelta:(ACDIndexPathDelta *)arg2;
- (void)acdModel:(ACDModel *)arg1 willChangeWithDelta:(ACDIndexPathDelta *)arg2;
- (void)acdModelReset:(ACDModel *)arg1;
- (void)acdModelDidChangeContent:(ACDModel *)arg1;
- (void)acdModelWillChangeContent:(ACDModel *)arg1;
@end

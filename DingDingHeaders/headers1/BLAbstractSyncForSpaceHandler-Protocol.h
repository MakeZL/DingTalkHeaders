//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLAccount, BLSyncParentObject, NSArray, NSSet;

@protocol BLAbstractSyncForSpaceHandler <NSObject>
- (Class)objectClassToHandle;

@optional
- (void)batchProcessResponseWithAction:(long long)arg1 apiModels:(NSArray *)arg2 syncParent:(BLSyncParentObject *)arg3 forAccount:(BLAccount *)arg4 additionalResult:(id *)arg5;
- (NSSet *)customHandleActions;
- (void)handleFullSync:(NSArray *)arg1 inParent:(BLSyncParentObject *)arg2;
@end


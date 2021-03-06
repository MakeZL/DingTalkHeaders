//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizDingCommentModel, NSDictionary;

@protocol DTDingCommentNetworkProtocol <NSObject>
- (void)listDingComment:(long long)arg1 latest:(_Bool)arg2 cursor:(long long)arg3 size:(int)arg4 success:(void (^)(DTBizDingCommentListModel *))arg5 failureBlock:(void (^)(id <IMError>))arg6;
- (void)removeDingComment:(long long)arg1 commentId:(long long)arg2 success:(void (^)(void))arg3 failureBlock:(void (^)(id <IMError>))arg4;
- (void)sendDingComment:(DTBizDingCommentModel *)arg1 atOpenIds:(NSDictionary *)arg2 success:(void (^)(DTBizDingCommentModel *))arg3 failureBlock:(void (^)(id <IMError>))arg4;
@end


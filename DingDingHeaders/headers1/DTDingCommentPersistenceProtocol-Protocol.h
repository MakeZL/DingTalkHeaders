//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizDingCommentModel, NSArray;

@protocol DTDingCommentPersistenceProtocol <NSObject>
- (NSArray *)loadDingCommentList:(long long)arg1 size:(int)arg2;
- (_Bool)removeLocalDingComment:(long long)arg1 commentId:(long long)arg2;
- (_Bool)saveLocalDingComment:(DTBizDingCommentModel *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol DTGetCodeProtocol <NSObject>
- (void)getCodeWithCorpId:(NSString *)arg1 pageUrl:(NSString *)arg2 successBlock:(void (^)(NSString *))arg3 failureBlock:(void (^)(NSError *))arg4;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol WKOAuthServiceDelegate <NSObject>

@optional
- (void)autoLoginWillComplete:(_Bool)arg1 loginType:(long long)arg2;
- (void)logoutWillComplete;
- (void)loginSuccess:(long long)arg1 authInfo:(NSDictionary *)arg2 successBlock:(void (^)(NSDictionary *))arg3;
@end


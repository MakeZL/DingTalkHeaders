//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLAccount.h"

@interface BLAccount (Util)
- (id)wk_signature;
- (unsigned long long)wk_timestamp;
- (id)wk_nonce;
- (long long)wk_openId;
- (id)wk_appKey;
- (id)wk_domain;
- (void)addCachedMonths:(id)arg1;
- (_Bool)isSelf:(id)arg1 comparePolicy:(long long)arg2;
- (_Bool)isSelf:(id)arg1;
@end

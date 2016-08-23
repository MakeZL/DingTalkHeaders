//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HttpdnsRequestScheduler;
@protocol HttpDNSDegradationDelegate;

@interface HttpDnsService : NSObject
{
    HttpdnsRequestScheduler *_requestScheduler;
    int _accountID;
    id <HttpDNSDegradationDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic, setter=setDelegateForDegradationFilter:) __weak id <HttpDNSDegradationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (void)setLogEnabled:(_Bool)arg1;
- (void)setExpiredIPEnabled:(_Bool)arg1;
- (id)getIpByHostAsyncInURLFormat:(id)arg1;
- (id)getIpByHostAsync:(id)arg1;
- (id)getIpByHostInURLFormat:(id)arg1;
- (id)getIpByHost:(id)arg1;
- (void)setPreResolveHosts:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


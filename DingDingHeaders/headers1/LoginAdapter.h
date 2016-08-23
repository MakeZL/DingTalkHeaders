//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LoginProtocol-Protocol.h"

@class NSMutableArray, NSRecursiveLock, NSString;
@protocol LoginProtocol;

@interface LoginAdapter : NSObject <LoginProtocol>
{
    int _is_login_doing;
    int _is_processing_pending;
    id <LoginProtocol> _network_config;
    id <LoginProtocol> _login_service;
    NSMutableArray *_loginPendingRequests;
    NSRecursiveLock *_pending_lock;
}

+ (id)sharedInstantce;
@property(retain, nonatomic) NSRecursiveLock *pending_lock; // @synthesize pending_lock=_pending_lock;
@property(retain, nonatomic) NSMutableArray *loginPendingRequests; // @synthesize loginPendingRequests=_loginPendingRequests;
@property(retain, nonatomic) id <LoginProtocol> login_service; // @synthesize login_service=_login_service;
@property(retain, nonatomic) id <LoginProtocol> network_config; // @synthesize network_config=_network_config;
- (void).cxx_destruct;
- (void)storeSessionWithLoginResult:(id)arg1;
- (id)currentUserId;
- (void)notifyNetworkSDK:(id)arg1;
- (void)logout:(id)arg1;
- (void)logined:(id)arg1;
- (void)loadAlu:(Class)arg1;
- (void)loadLoginModule;
- (void)loadNetworSDKConfig;
- (void)failedPendingLoginRequests;
- (void)redoPendingLoginRequests;
- (void)pendingLoginRequest:(id)arg1;
- (void)releasePendingLock;
- (void)accquirePendingLock;
- (void)releaseLoginLock;
- (_Bool)accquireLoginLock;
- (int)tryLogin:(id)arg1 isForce:(_Bool)arg2;
- (int)tryLogin:(id)arg1;
- (void)logout;
- (id)currentSession;
- (int)loginWithLoginOption:(int)arg1 isForce:(_Bool)arg2 extraInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 cancelationHandler:(CDUnknownBlockType)arg5 request:(id)arg6;
- (void)loginWithLoginOption:(int)arg1 extraInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 cancelationHandler:(CDUnknownBlockType)arg4;
- (void)loginWithLoginOption:(int)arg1 completionHandler:(CDUnknownBlockType)arg2 cancelationHandler:(CDUnknownBlockType)arg3;
- (_Bool)isValidLogin;
- (_Bool)isProcessingLogin;
- (void)markInvalidLogin;
- (id)setCustomLoginModule:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


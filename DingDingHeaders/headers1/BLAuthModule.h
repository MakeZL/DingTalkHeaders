//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseModule.h"

@class NSArray;

@interface BLAuthModule : BLBaseModule
{
    NSArray *_allUserAccounts;
}

@property(retain, nonatomic) NSArray *allUserAccounts; // @synthesize allUserAccounts=_allUserAccounts;
- (void).cxx_destruct;
- (void)checkUserConfigWithEmail:(id)arg1 withPwd:(id)arg2 withProtocol:(long long)arg3 withSetting:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)scanQRLoginForAccount:(id)arg1 withQRCodeId:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)cleanupForAccount:(id)arg1 rememberName:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)doRSAEncrypt:(id)arg1 withCertPath:(id)arg2;
- (id)createAccountWithEmailAddress:(id)arg1;
- (void)refreshTokenForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)logoutForAccount:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)verifyCaptchaWithSessionID:(id)arg1 captcha:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getCaptchaWithSessionID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)loginWithAccountName:(id)arg1 password:(id)arg2 withProtocol:(long long)arg3 withSettingInfo:(id)arg4 openAPIToken:(id)arg5 intervalToken:(id)arg6 completionBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)getWebToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)loginWithIntervalToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)loginWithOpenAPIToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)loginWithAccountName:(id)arg1 password:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)loginWithAccountName:(id)arg1 password:(id)arg2 withProtocol:(long long)arg3 withSettingInfo:(id)arg4 completionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (id)init;

@end


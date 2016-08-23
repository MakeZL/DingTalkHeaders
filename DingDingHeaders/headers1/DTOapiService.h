//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTOapiService : NSObject
{
}

+ (void)getDecryptedDataCorpId:(id)arg1 data:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getEncryptedDataCorpId:(id)arg1 data:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getPermanentEncryptedCid:(id)arg1 agentId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getCIDTokenWithCorpID:(id)arg1 conversationID:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)authorize302WithURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)authorizeExtWithCorpID:(id)arg1 redirectURL:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)authorizeWithCorpID:(id)arg1 redirectURL:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getJSAPIMethodsWithAgentID:(id)arg1 corpID:(id)arg2 timestamp:(id)arg3 nonceStr:(id)arg4 signature:(id)arg5 url:(id)arg6 jsApiList:(id)arg7 successBlock:(CDUnknownBlockType)arg8 failureBlock:(CDUnknownBlockType)arg9;
+ (void)getJSAPIMethods:(id)arg1 timestamp:(id)arg2 nonceStr:(id)arg3 signature:(id)arg4 url:(id)arg5 jsApiList:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;

@end


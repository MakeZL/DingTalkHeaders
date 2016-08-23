//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTGetCodeProtocol-Protocol.h"
#import "WKMessageThirdPartyEncryptProtocol-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol DTThirdPartyEncryptProtocol;

@interface DTThirdPartyEncryptCenter : NSObject <DTGetCodeProtocol, WKMessageThirdPartyEncryptProtocol>
{
    id <DTThirdPartyEncryptProtocol> _encryptSDK;
    NSMutableDictionary *_orgInfoCache;
    NSMutableDictionary *_messageDecryptErrorDict;
}

+ (id)sharedCenter;
@property(retain, nonatomic) NSMutableDictionary *messageDecryptErrorDict; // @synthesize messageDecryptErrorDict=_messageDecryptErrorDict;
@property(retain, nonatomic) NSMutableDictionary *orgInfoCache; // @synthesize orgInfoCache=_orgInfoCache;
@property(retain, nonatomic) id <DTThirdPartyEncryptProtocol> encryptSDK; // @synthesize encryptSDK=_encryptSDK;
- (void).cxx_destruct;
- (id)decryptErrorWithMessageId:(long long)arg1;
- (void)setDecryptErrorWithMessageId:(long long)arg1 alarm:(id)arg2;
- (id)orgInfoForCid:(id)arg1;
- (void)setCid:(id)arg1 orgInfo:(id)arg2;
- (void)conversationUpdatedNotification:(id)arg1;
- (void)getCodeWithCorpId:(id)arg1 pageUrl:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)currentEncryptSDK:(long long)arg1;
- (void)alarmIfNeed:(long long)arg1;
- (id)organizationHasEncryptApp;
- (_Bool)hasEncryptApp;
- (long long)thirdPartyEncryptAppIdForOrgId:(long long)arg1;
- (id)orgInfoWithOrgId:(long long)arg1;
- (id)orgInfoWithConversation:(id)arg1;
- (id)orgInfoForConversation:(id)arg1;
- (id)orgInfoForMessage:(id)arg1;
- (void)setPushData:(id)arg1 data:(id)arg2;
- (unsigned long long)decryptMsg:(id)arg1;
- (unsigned long long)encryptMsg:(id)arg1;
- (void)configCenter;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


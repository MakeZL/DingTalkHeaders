//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, VOIPEngine;

@interface VOIPManageCenter : NSObject
{
    VOIPEngine *_voipSDK;
    NSString *_currentOpenId;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *currentOpenId; // @synthesize currentOpenId=_currentOpenId;
@property(retain, nonatomic) VOIPEngine *voipSDK; // @synthesize voipSDK=_voipSDK;
- (void).cxx_destruct;
- (void)setVoIPExtraMessage:(id)arg1;
- (void)previewLocalVideo;
- (void)toggleCamera;
- (void)handFree:(_Bool)arg1;
- (void)mute:(_Bool)arg1;
- (void)receiveSignalMsg:(id)arg1 isAPNS:(_Bool)arg2;
- (void)switchToAudio;
- (void)acceptVoIPCall:(id)arg1 type:(unsigned long long)arg2 enableLocalVideo:(_Bool)arg3;
- (void)stopVoIPCallWithCallId:(id)arg1 type:(unsigned long long)arg2 errorCode:(unsigned long long)arg3;
- (void)startVoIP2PSTNCallWithRemoteOpenId:(id)arg1 fromPhone:(id)arg2 toPhone:(id)arg3;
- (void)startVoIPCallWithRemoteOpenId:(id)arg1 type:(unsigned long long)arg2;
- (void)setVideoFilterName:(id)arg1;
- (id)getSupportFilters;
- (id)getVoIPVideoView:(struct CGRect)arg1;
- (void)destoryVoIPCompletion:(CDUnknownBlockType)arg1;
- (void)initVoIPWithOpenId:(id)arg1 nickname:(id)arg2 domain:(id)arg3 delegate:(id)arg4 datasource:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)receivePushMsg:(id)arg1;
- (void)pushMessageReceived:(id)arg1;
- (id)init;
- (void)dealloc;

@end


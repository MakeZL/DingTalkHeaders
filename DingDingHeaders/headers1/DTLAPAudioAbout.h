//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "LWAudioRecorderProtocol-Protocol.h"

@class LAActionResponse, NSString;

@interface DTLAPAudioAbout : LAPluginBase <LWAudioRecorderProtocol>
{
    double _recordeAudioDuration;
    LAActionResponse *_onVoiceRecordEndResponse;
    LAActionResponse *_onVoicePlayEndResponse;
}

+ (id)pluginExactName;
@property(retain, nonatomic) LAActionResponse *onVoicePlayEndResponse; // @synthesize onVoicePlayEndResponse=_onVoicePlayEndResponse;
@property(retain, nonatomic) LAActionResponse *onVoiceRecordEndResponse; // @synthesize onVoiceRecordEndResponse=_onVoiceRecordEndResponse;
- (void).cxx_destruct;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)audioRecorderTrackTime:(double)arg1;
- (void)audioRecorderDidStartRecording:(id)arg1;
- (void)addTaskWithMediaId:(id)arg1 duration:(long long)arg2 response:(id)arg3;
- (void)translateVoice:(id)arg1 to:(id)arg2;
- (void)__exported__translateVoice:(id)arg1 to:(id)arg2;
- (void)download:(id)arg1 to:(id)arg2;
- (void)__exported__download:(id)arg1 to:(id)arg2;
- (void)stop:(id)arg1 to:(id)arg2;
- (void)__exported__stop:(id)arg1 to:(id)arg2;
- (void)resume:(id)arg1 to:(id)arg2;
- (void)__exported__resume:(id)arg1 to:(id)arg2;
- (void)pause:(id)arg1 to:(id)arg2;
- (void)__exported__pause:(id)arg1 to:(id)arg2;
- (void)onPlayEnd:(id)arg1 to:(id)arg2;
- (void)__exported__onPlayEnd:(id)arg1 to:(id)arg2;
- (void)play:(id)arg1 to:(id)arg2;
- (void)__exported__play:(id)arg1 to:(id)arg2;
- (void)onRecordEnd:(id)arg1 to:(id)arg2;
- (void)__exported__onRecordEnd:(id)arg1 to:(id)arg2;
- (void)stopRecord:(id)arg1 to:(id)arg2;
- (void)__exported__stopRecord:(id)arg1 to:(id)arg2;
- (void)startRecord:(id)arg1 to:(id)arg2;
- (void)__exported__startRecord:(id)arg1 to:(id)arg2;
- (void)disposePlugin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

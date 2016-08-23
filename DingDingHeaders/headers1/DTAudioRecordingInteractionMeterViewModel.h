//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAudioRecordingInteractionViewModel.h"

#import "DTAudioLevelMeterViewDelegate-Protocol.h"
#import "DTAudioRecorderActionListenerProtocol-Protocol.h"

@class DTAudioLevelMeterView, DTAudioRecordingInteractionView, NSArray, NSString, UILabel, UIView;

@interface DTAudioRecordingInteractionMeterViewModel : DTAudioRecordingInteractionViewModel <DTAudioLevelMeterViewDelegate, DTAudioRecorderActionListenerProtocol>
{
    DTAudioRecordingInteractionView *_recordingInteractionView;
    UIView *_meterLevel;
    DTAudioLevelMeterView *_meterView;
    UILabel *_remainsLabel;
    double _currentTrackTime;
    NSArray *_soundMetersRef;
}

@property(retain, nonatomic) NSArray *soundMetersRef; // @synthesize soundMetersRef=_soundMetersRef;
@property(nonatomic) double currentTrackTime; // @synthesize currentTrackTime=_currentTrackTime;
@property(retain, nonatomic) UILabel *remainsLabel; // @synthesize remainsLabel=_remainsLabel;
@property(retain, nonatomic) DTAudioLevelMeterView *meterView; // @synthesize meterView=_meterView;
@property(retain, nonatomic) UIView *meterLevel; // @synthesize meterLevel=_meterLevel;
@property(readonly, nonatomic) __weak DTAudioRecordingInteractionView *recordingInteractionView; // @synthesize recordingInteractionView=_recordingInteractionView;
- (void).cxx_destruct;
- (void)recorderWrapper:(id)arg1 didUpdateTrackTime:(double)arg2;
- (void)recorderDidFinish:(id)arg1;
- (void)recorderDidStart:(id)arg1;
- (void)audioLevelMeterDidStop:(id)arg1 duration:(double)arg2;
- (id)audioMeters;
- (void)layoutContentWithRect:(struct CGRect)arg1 parentView:(id)arg2;
- (void)willReuseViewModel;
- (void)updateConentViewWithTarget:(id)arg1;
- (_Bool)showingMeterView;
- (id)initWithInteractionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTAudioLevelMeterViewDelegate-Protocol.h"
#import "LWAudioRecorderProtocol-Protocol.h"

@class DTAudioLevelMeterView, NSArray, NSString, UIImageView, UILabel;

@interface DTFullScreenRecorderViewController : DTViewController <LWAudioRecorderProtocol, DTAudioLevelMeterViewDelegate>
{
    UILabel *_timeLabel;
    UIImageView *_fingerView;
    UIImageView *_deleteBackgroundView;
    UIImageView *_deleteIconView;
    UILabel *_deleteLabel;
    struct CGPoint _beganPoint;
    _Bool _isReleaseCancel;
    _Bool _hasShowUI;
    _Bool _showing;
    _Bool _gestureCancel;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _cancelBlock;
    DTAudioLevelMeterView *_meterView;
    double _audioDuration;
    NSArray *_audioMeters;
}

@property(copy, nonatomic) NSArray *audioMeters; // @synthesize audioMeters=_audioMeters;
@property(nonatomic) double audioDuration; // @synthesize audioDuration=_audioDuration;
@property(retain, nonatomic) DTAudioLevelMeterView *meterView; // @synthesize meterView=_meterView;
@property(nonatomic) _Bool gestureCancel; // @synthesize gestureCancel=_gestureCancel;
@property(getter=isShowing) _Bool showing; // @synthesize showing=_showing;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (id)generateBlurViewWithFrame:(struct CGRect)arg1;
- (void)audioLevelMeterDidStop:(id)arg1 duration:(double)arg2;
- (void)audioRecorderTrackTime:(double)arg1;
- (void)audioRecorderDidStartRecording:(id)arg1;
- (void)updateAudioDurationLabel:(double)arg1;
- (void)changeReleaseStateToCancel:(_Bool)arg1 force:(_Bool)arg2;
- (void)changeReleaseStateToCancel:(_Bool)arg1;
- (void)stopRecord;
- (void)startRecord;
- (void)dismiss;
- (void)addShowAnimation:(struct CGPoint)arg1;
- (void)showWithGesture:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)loadComponents;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


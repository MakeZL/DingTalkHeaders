//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

#import "AVPlayerItemOutputPullDelegate-Protocol.h"
#import "AVPlayerItemOutputPushDelegate-Protocol.h"

@class AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSString, VSImageView;
@protocol VSPlayerDelegate;

@interface VSPlayer : AVPlayer <AVPlayerItemOutputPullDelegate, AVPlayerItemOutputPushDelegate>
{
    CADisplayLink *_displayLink;
    AVPlayerItemVideoOutput *_videoOutput;
    AVPlayerItem *_oldItem;
    double _itemsLoopLength;
    id _timeObserver;
    _Bool _rendererWasSetup;
    struct CGAffineTransform _rendererTransform;
    _Bool _loopEnabled;
    _Bool _shouldSuppressPlayerRendering;
    _Bool _autoRotate;
    id <VSPlayerDelegate> _delegate;
    VSImageView *_VSImageView;
}

+ (id)player;
@property(retain, nonatomic) VSImageView *VSImageView; // @synthesize VSImageView=_VSImageView;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(nonatomic) _Bool shouldSuppressPlayerRendering; // @synthesize shouldSuppressPlayerRendering=_shouldSuppressPlayerRendering;
@property(nonatomic) _Bool loopEnabled; // @synthesize loopEnabled=_loopEnabled;
@property(nonatomic) __weak id <VSPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSendingPlayMessages;
@property(readonly, nonatomic) CDStruct_1b6d18a9 itemDuration;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)setSmoothLoopItemByAsset:(id)arg1 smoothLoopCount:(unsigned long long)arg2;
- (void)setSmoothLoopItemByUrl:(id)arg1 smoothLoopCount:(unsigned long long)arg2;
- (void)setSmoothLoopItemByStringPath:(id)arg1 smoothLoopCount:(unsigned long long)arg2;
- (void)setItem:(id)arg1;
- (void)setItemByAsset:(id)arg1;
- (void)setItemByUrl:(id)arg1;
- (void)setItemByStringPath:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playableDuration;
- (void)initObserver;
- (void)unsetupVideoOutputToItem:(id)arg1;
- (void)setupVideoOutputToItem:(id)arg1;
- (void)unsetupDisplayLink;
- (void)setupDisplayLink;
- (void)suspendDisplay;
- (void)willRenderFrame:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)renderVideo:(double)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)removeOldObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playReachedEnd:(id)arg1;
- (void)endSendingPlayMessages;
- (void)beginSendingPlayMessages;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


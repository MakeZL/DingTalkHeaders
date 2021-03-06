//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSMediaTypeConfiguration.h"

@class AVAudioMix;

@interface VSAudioConfiguration : VSMediaTypeConfiguration
{
    int _sampleRate;
    int _channelsCount;
    int _format;
    AVAudioMix *_audioMix;
}

@property(retain, nonatomic) AVAudioMix *audioMix; // @synthesize audioMix=_audioMix;
@property(nonatomic) int format; // @synthesize format=_format;
@property(nonatomic) int channelsCount; // @synthesize channelsCount=_channelsCount;
@property(nonatomic) int sampleRate; // @synthesize sampleRate=_sampleRate;
- (void).cxx_destruct;
- (id)createAssetWriterOptionsUsingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContent.h"

@class NSArray, NSString;

@interface BLFavoriteAudio : BLFavoriteContent
{
    NSString *_mediaId;
    long long _duration;
    NSArray *_audioVolumns;
}

@property(copy, nonatomic) NSArray *audioVolumns; // @synthesize audioVolumns=_audioVolumns;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;

@end


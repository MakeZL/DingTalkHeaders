//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseMediaObject.h"

@class NSString;

@interface WBMusicObject : WBBaseMediaObject
{
    NSString *musicUrl;
    NSString *musicLowBandUrl;
    NSString *musicStreamUrl;
    NSString *musicLowBandStreamUrl;
}

@property(retain, nonatomic) NSString *musicLowBandStreamUrl; // @synthesize musicLowBandStreamUrl;
@property(retain, nonatomic) NSString *musicStreamUrl; // @synthesize musicStreamUrl;
@property(retain, nonatomic) NSString *musicLowBandUrl; // @synthesize musicLowBandUrl;
@property(retain, nonatomic) NSString *musicUrl; // @synthesize musicUrl;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;

@end


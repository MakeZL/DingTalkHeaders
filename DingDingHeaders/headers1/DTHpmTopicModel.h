//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTHpmTopicModel : Marshal
{
    NSNumber *_hpmVersion;
    NSString *_topic;
    NSString *_testAppId;
}

@property(copy, nonatomic) NSString *testAppId; // @synthesize testAppId=_testAppId;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSNumber *hpmVersion; // @synthesize hpmVersion=_hpmVersion;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTVidyoHistoryConfModel : Marshal
{
    NSString *_conferenceId;
    NSNumber *_callerId;
    NSString *_callerNick;
    NSArray *_calleeIds;
    NSArray *_calleeNicks;
    NSString *_title;
    NSNumber *_startTime;
    NSNumber *_confDuration;
    NSNumber *_myUid;
    NSNumber *_myStatus;
}

@property(retain, nonatomic) NSNumber *myStatus; // @synthesize myStatus=_myStatus;
@property(retain, nonatomic) NSNumber *myUid; // @synthesize myUid=_myUid;
@property(retain, nonatomic) NSNumber *confDuration; // @synthesize confDuration=_confDuration;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *calleeNicks; // @synthesize calleeNicks=_calleeNicks;
@property(copy, nonatomic) NSArray *calleeIds; // @synthesize calleeIds=_calleeIds;
@property(copy, nonatomic) NSString *callerNick; // @synthesize callerNick=_callerNick;
@property(retain, nonatomic) NSNumber *callerId; // @synthesize callerId=_callerId;
@property(copy, nonatomic) NSString *conferenceId; // @synthesize conferenceId=_conferenceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


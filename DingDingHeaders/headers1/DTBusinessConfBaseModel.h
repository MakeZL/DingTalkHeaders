//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface DTBusinessConfBaseModel : NSObject <NSCopying>
{
    _Bool _enableDing;
    _Bool _enableDingSwitch;
    NSNumber *_callerId;
    NSArray *_calleeIds;
    NSString *_callerNick;
    NSString *_title;
    NSNumber *_startTime;
    NSNumber *_duration;
    NSNumber *_orgId;
    NSString *_calleeIdsStr;
    NSString *_calleeNicksStr;
}

@property(copy, nonatomic) NSString *calleeNicksStr; // @synthesize calleeNicksStr=_calleeNicksStr;
@property(copy, nonatomic) NSString *calleeIdsStr; // @synthesize calleeIdsStr=_calleeIdsStr;
@property(nonatomic) _Bool enableDingSwitch; // @synthesize enableDingSwitch=_enableDingSwitch;
@property(nonatomic) _Bool enableDing; // @synthesize enableDing=_enableDing;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *callerNick; // @synthesize callerNick=_callerNick;
@property(retain, nonatomic) NSArray *calleeIds; // @synthesize calleeIds=_calleeIds;
@property(retain, nonatomic) NSNumber *callerId; // @synthesize callerId=_callerId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end


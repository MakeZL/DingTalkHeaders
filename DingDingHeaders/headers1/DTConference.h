//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface DTConference : NSObject <NSCopying>
{
    unsigned long long _conferenceState;
    NSNumber *_conferenceID;
    NSString *_conversationID;
    NSArray *_conferenceMembers;
    NSNumber *_callerID;
    NSNumber *_currentUID;
    NSArray *_events;
    NSString *_reason;
    NSNumber *_startime;
    NSNumber *_duration;
    NSString *_title;
    unsigned long long _conferenceType;
    NSString *_smsContent;
    NSString *_telExchangeType;
}

@property(copy, nonatomic) NSString *telExchangeType; // @synthesize telExchangeType=_telExchangeType;
@property(copy, nonatomic) NSString *smsContent; // @synthesize smsContent=_smsContent;
@property(nonatomic) unsigned long long conferenceType; // @synthesize conferenceType=_conferenceType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *startime; // @synthesize startime=_startime;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSNumber *currentUID; // @synthesize currentUID=_currentUID;
@property(retain, nonatomic) NSNumber *callerID; // @synthesize callerID=_callerID;
@property(copy, nonatomic) NSArray *conferenceMembers; // @synthesize conferenceMembers=_conferenceMembers;
@property(copy, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSNumber *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(nonatomic) unsigned long long conferenceState; // @synthesize conferenceState=_conferenceState;
- (void).cxx_destruct;
- (void)addEvent:(id)arg1 showTime:(_Bool)arg2;
- (void)addEvent:(id)arg1;
- (_Bool)isCaller;
- (unsigned long long)memberState:(id)arg1;
- (id)memberNickName:(id)arg1;
- (id)caller;
- (id)me;
- (_Bool)hasMember:(id)arg1;
- (void)setMemberCause:(id)arg1 cause:(id)arg2;
- (void)setMemberDisconnectFlag:(id)arg1 flag:(unsigned long long)arg2;
- (void)setMemberConnectFlag:(id)arg1 flag:(unsigned long long)arg2;
- (void)setMemberState:(id)arg1 state:(unsigned long long)arg2;
- (void)removeMember:(id)arg1;
- (void)addMember:(id)arg1;
- (_Bool)isCalling;
- (id)toIDLModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

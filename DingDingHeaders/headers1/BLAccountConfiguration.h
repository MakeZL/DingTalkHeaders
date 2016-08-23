//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseYapObject.h"

@class NSNumber;

@interface BLAccountConfiguration : BLBaseYapObject
{
    _Bool _enablePush;
    _Bool _enablePushDnd;
    _Bool _forwardWithAttachment;
    _Bool _publishCellPhone;
    long long _dndDuration;
    long long _dndStartTime;
    long long _showImageInBody;
    long long _syncMailChoices;
    long long _syncCalendarChoices;
    long long _maxItemCountToProcess;
    NSNumber *_timeZoneInNumber;
}

+ (id)excludeProperties;
@property(retain, nonatomic) NSNumber *timeZoneInNumber; // @synthesize timeZoneInNumber=_timeZoneInNumber;
@property(nonatomic) long long maxItemCountToProcess; // @synthesize maxItemCountToProcess=_maxItemCountToProcess;
@property(nonatomic) _Bool publishCellPhone; // @synthesize publishCellPhone=_publishCellPhone;
@property(nonatomic) long long syncCalendarChoices; // @synthesize syncCalendarChoices=_syncCalendarChoices;
@property(nonatomic) long long syncMailChoices; // @synthesize syncMailChoices=_syncMailChoices;
@property(nonatomic) long long showImageInBody; // @synthesize showImageInBody=_showImageInBody;
@property(nonatomic) _Bool forwardWithAttachment; // @synthesize forwardWithAttachment=_forwardWithAttachment;
@property(nonatomic) long long dndStartTime; // @synthesize dndStartTime=_dndStartTime;
@property(nonatomic) long long dndDuration; // @synthesize dndDuration=_dndDuration;
@property(nonatomic) _Bool enablePushDnd; // @synthesize enablePushDnd=_enablePushDnd;
@property(nonatomic) _Bool enablePush; // @synthesize enablePush=_enablePush;
- (void).cxx_destruct;
@property(nonatomic) int timeZone;

@end


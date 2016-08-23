//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLSpaceEntry, DTOrganization, NSString;

@interface DTSharedSpaceItem : NSObject
{
    _Bool _chooseEnable;
    long long _spaceId;
    unsigned long long _type;
    DTOrganization *_organization;
    NSString *_name;
    long long _usedStorage;
    double _modifiedTime;
    BLSpaceEntry *_spaceEntry;
}

@property(retain, nonatomic) BLSpaceEntry *spaceEntry; // @synthesize spaceEntry=_spaceEntry;
@property(nonatomic) double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(nonatomic) _Bool chooseEnable; // @synthesize chooseEnable=_chooseEnable;
@property(nonatomic) long long usedStorage; // @synthesize usedStorage=_usedStorage;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) DTOrganization *organization; // @synthesize organization=_organization;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;

@end


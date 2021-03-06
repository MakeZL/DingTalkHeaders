//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYapObjectWithAccount.h"

@class NSString;

@interface BLSpaceEntry : BLYapObjectWithAccount
{
    NSString *_spaceId;
    NSString *_name;
    unsigned long long _accessAuthority;
    unsigned long long _type;
    double _modifiedTime;
    long long _usedStorage;
}

@property(nonatomic) long long usedStorage; // @synthesize usedStorage=_usedStorage;
@property(nonatomic) double modifiedTime; // @synthesize modifiedTime=_modifiedTime;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long accessAuthority; // @synthesize accessAuthority=_accessAuthority;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTCSpaceDeleteDentryParam : Marshal
{
    _Bool _physical;
    NSNumber *_spaceId;
    NSArray *_ids;
}

@property(nonatomic) _Bool physical; // @synthesize physical=_physical;
@property(copy, nonatomic) NSArray *ids; // @synthesize ids=_ids;
@property(retain, nonatomic) NSNumber *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface LWFetchRequest : NSObject
{
    Class _entityClazz;
    NSString *_shardingId;
    NSArray *_sortDescriptors;
    NSString *_sqlWhereStatement;
    unsigned long long _fetchLimit;
}

@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(copy, nonatomic) NSString *sqlWhereStatement; // @synthesize sqlWhereStatement=_sqlWhereStatement;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(readonly, copy, nonatomic) NSString *shardingId; // @synthesize shardingId=_shardingId;
@property(readonly, nonatomic) Class entityClazz; // @synthesize entityClazz=_entityClazz;
- (void).cxx_destruct;
- (id)initWithEntityClazz:(Class)arg1 shardingId:(id)arg2;
- (id)initWithEntityClazz:(Class)arg1;

@end

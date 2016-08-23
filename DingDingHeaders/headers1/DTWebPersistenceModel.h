//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSNumber, NSString;

@interface DTWebPersistenceModel : OpenModel <OpenModelProtocol>
{
    NSString *_key;
    NSString *_url;
    NSString *_value;
    NSNumber *_permission;
}

+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(retain, nonatomic) NSNumber *permission; // @synthesize permission=_permission;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

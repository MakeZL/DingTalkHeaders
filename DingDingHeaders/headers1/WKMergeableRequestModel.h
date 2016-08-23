//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSData, NSString;

@interface WKMergeableRequestModel : OpenModel <OpenModelProtocol>
{
    NSString *_uri;
    NSString *_dataKey;
    NSString *_scope;
    NSData *_argsdata;
    NSString *_argsJson;
    long long _createAt;
    NSData *_extInfo;
}

+ (_Bool)upgradeTableToVersion:(unsigned long long)arg1 MDHandler:(id)arg2;
+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(retain, nonatomic) NSData *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) long long createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) NSString *argsJson; // @synthesize argsJson=_argsJson;
@property(retain, nonatomic) NSData *argsdata; // @synthesize argsdata=_argsdata;
@property(retain, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) NSString *dataKey; // @synthesize dataKey=_dataKey;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTSearchFunctionModel : OpenModel <OpenModelProtocol>
{
    NSString *_pk;
    unsigned long long _functionId;
    NSString *_functionName;
    NSString *_language;
}

+ (void)createTableWithMDHandler:(id)arg1;
+ (id)pkWithFunctionId:(unsigned long long)arg1 language:(id)arg2;
+ (id)functionWithFunctionId:(unsigned long long)arg1 name:(id)arg2 language:(id)arg3;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(nonatomic) unsigned long long functionId; // @synthesize functionId=_functionId;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (id)avatarImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


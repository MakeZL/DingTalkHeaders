//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OpenModel.h"

#import "OpenModelProtocol-Protocol.h"

@class NSString;

@interface DTBizConfHistoryExtensionModel : OpenModel <OpenModelProtocol>
{
    NSString *_localUUID;
    long long _feedBackStatus;
    long long _feedBackReason;
    unsigned long long _confFeedKey;
}

+ (void)createTableWithMDHandler:(id)arg1;
+ (_Bool)isShardingTable;
+ (id)tableName;
+ (id)primaryKeyName;
+ (_Bool)hasAutoIncrementPrimaryKey;
@property(nonatomic) unsigned long long confFeedKey; // @synthesize confFeedKey=_confFeedKey;
@property(nonatomic) long long feedBackReason; // @synthesize feedBackReason=_feedBackReason;
@property(nonatomic) long long feedBackStatus; // @synthesize feedBackStatus=_feedBackStatus;
@property(copy, nonatomic) NSString *localUUID; // @synthesize localUUID=_localUUID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


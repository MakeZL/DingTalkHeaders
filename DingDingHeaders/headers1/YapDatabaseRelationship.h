//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseExtension.h"

@class NSObject, NSString, YapDatabaseRelationshipOptions;
@protocol OS_dispatch_queue;

@interface YapDatabaseRelationship : YapDatabaseExtension
{
    NSString *versionTag;
    YapDatabaseRelationshipOptions *options;
    NSObject<OS_dispatch_queue> *fileManagerQueue;
}

+ (id)tableNameForRegisteredName:(id)arg1;
+ (void)dropTablesForRegisteredName:(id)arg1 withTransaction:(id)arg2 wasPersistent:(_Bool)arg3;
@property(readonly, copy, nonatomic) NSString *versionTag; // @synthesize versionTag;
- (void).cxx_destruct;
- (id)fileManagerQueue;
- (id)tableName;
- (id)newConnection:(id)arg1;
- (_Bool)supportsDatabase:(id)arg1 withRegisteredExtensions:(id)arg2;
@property(readonly, copy, nonatomic) YapDatabaseRelationshipOptions *options; // @dynamic options;
- (id)initWithVersionTag:(id)arg1 options:(id)arg2;
- (id)initWithVersionTag:(id)arg1;
- (id)init;

@end


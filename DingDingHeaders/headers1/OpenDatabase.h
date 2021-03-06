//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "OpenConnectionDelegate-Protocol.h"
#import "OpenConnectionPoolDelegate-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, OpenConnection, OpenConnectionPool;
@protocol OpenDatabaseDelegate;

@interface OpenDatabase : NSObject <OpenConnectionDelegate, OpenConnectionPoolDelegate>
{
    struct _opaque_pthread_mutex_t _columnCacheMutex;
    struct _opaque_pthread_mutex_t _transcationMutex;
    NSString *_pathToDatabase;
    NSString *_uuid;
    NSString *_dbName;
    id <OpenDatabaseDelegate> _delegate;
    NSString *_passphrase;
    NSSet *_tablesCacheSet;
    NSMutableDictionary *_columnCache;
    unsigned long long _transcationFlag;
    OpenConnectionPool *_connectionPool;
    OpenConnection *_connectionForSearch;
    OpenConnection *_connectionForSearchScan;
}

+ (_Bool)isDebugModeEnabled;
+ (void)enableDebugMode:(_Bool)arg1;
+ (_Bool)forbidInMainThread;
+ (void)setForbidInMainThread:(_Bool)arg1;
@property(retain, nonatomic) OpenConnection *connectionForSearchScan; // @synthesize connectionForSearchScan=_connectionForSearchScan;
@property(retain, nonatomic) OpenConnection *connectionForSearch; // @synthesize connectionForSearch=_connectionForSearch;
@property(retain, nonatomic) OpenConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property(nonatomic) unsigned long long transcationFlag; // @synthesize transcationFlag=_transcationFlag;
@property(retain, nonatomic) NSMutableDictionary *columnCache; // @synthesize columnCache=_columnCache;
@property(retain, nonatomic) NSSet *tablesCacheSet; // @synthesize tablesCacheSet=_tablesCacheSet;
@property(copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(nonatomic) __weak id <OpenDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *dbName; // @synthesize dbName=_dbName;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, copy, nonatomic) NSString *pathToDatabase; // @synthesize pathToDatabase=_pathToDatabase;
- (void).cxx_destruct;
- (void)removeColumnsCacheForTableName:(id)arg1;
- (void)cleanColumnsCache;
- (id)columnsFromCacheForTableName:(id)arg1;
- (void)removeTablesCacheForTableName:(id)arg1;
- (void)addTablesCacheForTableName:(id)arg1;
- (_Bool)existsTableName:(id)arg1;
- (id)_getAllTableNames;
- (id)tableNames;
- (void)lastErrorCode:(int *)arg1 extendedErrCode:(int *)arg2 errorMessage:(id *)arg3;
- (unsigned long long)rowChanges;
- (unsigned long long)lastInsertRowId;
- (id)columnsForTableName:(id)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1 done:(CDUnknownBlockType)arg2;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)executeSql:(id)arg1 withParameters:(id)arg2 withClassForRow:(Class)arg3 done:(CDUnknownBlockType)arg4;
- (void)executeSql:(id)arg1 withParameters:(id)arg2 done:(CDUnknownBlockType)arg3;
- (void)executeSql:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)executeSqlV2:(id)arg1 withParameters:(id)arg2 withClassForRow:(Class)arg3 rowChanged:(unsigned long long *)arg4;
- (id)executeSqlV2:(id)arg1 withParameters:(id)arg2 rowChanged:(unsigned long long *)arg3;
- (id)executeSql:(id)arg1 withParameters:(id)arg2 withClassForRow:(Class)arg3;
- (id)executeSql:(id)arg1 withParameters:(id)arg2;
- (id)executeSqlWithParameters:(id)arg1;
- (id)executeSql:(id)arg1;
- (id)connectionForSql:(id)arg1;
- (_Bool)isReadSql:(id)arg1;
- (id)connectionPoolRequireConnection:(_Bool)arg1;
- (void)connection:(id)arg1 failedWithErrorCode:(int)arg2;
- (void)connectionDidRekeyInPath:(id)arg1;
- (void)connectionWillRekeyInPath:(id)arg1;
- (void)connectionDidRemoveFileInPath:(id)arg1;
- (struct sqlite3 *)sqliteForSearchScanOnly;
- (struct sqlite3 *)sqliteForSearchOnly;
- (id)connectionForHook;
- (struct sqlite3 *)sqliteForHook;
- (void)close;
- (void)rekey:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 passphrase:(id)arg2 delegate:(id)arg3 needMultiConn:(_Bool)arg4;
- (id)initWithPath:(id)arg1 passphrase:(id)arg2 delegate:(id)arg3;
- (id)initWithPath:(id)arg1 delegate:(id)arg2 needMultiConn:(_Bool)arg3;
- (id)initWithPath:(id)arg1 delegate:(id)arg2;
- (id)initWithPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWFetchRequest, LWSQLiteContext, NSArray, NSOperationQueue, NSRecursiveLock, NSString;
@protocol LWFetchedResultsControllerDelegate;

@interface LWFetchedResultsController : NSObject
{
    NSString *_tableName;
    NSRecursiveLock *_lock;
    unsigned long long _currentFetchIdentifier;
    NSOperationQueue *_hookQueue;
    LWFetchRequest *_fetchRequest;
    LWSQLiteContext *_sqliteContext;
    NSArray *_fetchedObjects;
    id <LWFetchedResultsControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <LWFetchedResultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *fetchedObjects; // @synthesize fetchedObjects=_fetchedObjects;
@property(readonly, nonatomic) LWSQLiteContext *sqliteContext; // @synthesize sqliteContext=_sqliteContext;
@property(readonly, nonatomic) LWFetchRequest *fetchRequest; // @synthesize fetchRequest=_fetchRequest;
- (void).cxx_destruct;
- (void)executeBlockInMainThreadWithParams:(id)arg1;
- (void)executeOnMainAndWaitWithIdentifier:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)indexOfArray:(id)arg1 withSortDescriptors:(id)arg2 newObj:(id)arg3;
- (id)fetchObjectsWithSql:(id)arg1 parameters:(id)arg2;
- (id)fetchObjectWithRowId:(long long)arg1;
- (id)tableName;
- (void)handleSqliteUpdate:(long long)arg1 identifier:(unsigned long long)arg2;
- (void)handleSqliteDelete:(long long)arg1 identifier:(unsigned long long)arg2;
- (void)handleSqliteInsert:(long long)arg1 identifier:(unsigned long long)arg2;
- (void)delayHandleRollbackInMainThreadWithFetchIdentifierNumber:(id)arg1;
- (void)handleRollbackInMainThread;
- (void)handleSqliteRollback;
- (void)handleSqliteOperation:(long long)arg1 rowId:(long long)arg2 identifier:(unsigned long long)arg3;
- (void)prepareSqliteOperation:(long long)arg1 rowId:(long long)arg2 identifier:(unsigned long long)arg3;
- (void)stopFetch;
- (void)_stopDelayHookOperations;
- (void)_startDelayProcessHookOperations;
- (void)asyncPerformFetch:(CDUnknownBlockType)arg1;
- (id)_fetchFromCurrentObjects:(id)arg1;
- (_Bool)performFetchFromCurrentPosition:(id *)arg1;
- (_Bool)performFetch:(id *)arg1;
- (void)_resetHookInfo;
- (id)generateSqlWithLimitBegin:(unsigned long long)arg1 limitCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithFetchRequest:(id)arg1 sqliteContext:(id)arg2;

@end


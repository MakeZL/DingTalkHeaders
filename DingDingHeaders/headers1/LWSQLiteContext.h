//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWSQLiteHook;
@protocol LWSQLiteContextDelegate;

@interface LWSQLiteContext : NSObject
{
    struct sqlite3 *_sqlite;
    LWSQLiteHook *_sqliteHook;
    id _customDatabase;
    id <LWSQLiteContextDelegate> _delegate;
}

+ (id)contextWithSQLite:(struct sqlite3 *)arg1 enableExclusiveHook:(_Bool)arg2;
+ (id)contextWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) __weak id <LWSQLiteContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id customDatabase; // @synthesize customDatabase=_customDatabase;
@property(readonly, nonatomic) LWSQLiteHook *sqliteHook; // @synthesize sqliteHook=_sqliteHook;
@property(readonly, nonatomic) struct sqlite3 *sqlite; // @synthesize sqlite=_sqlite;
- (void).cxx_destruct;
- (id)fetchObjectsWithWithSql:(id)arg1 parameters:(id)arg2 entityClazz:(Class)arg3 shardingId:(id)arg4;
- (long long)rowIdWithEntity:(id)arg1;
- (id)tableNameWithEntityClazz:(Class)arg1 shardingId:(id)arg2;
- (void)dealloc;
- (id)initWithSQLite:(struct sqlite3 *)arg1 enableExclusiveHook:(_Bool)arg2;
- (id)initWithSQLite:(struct sqlite3 *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YapDatabaseExtensionTransaction.h"

@class YapDatabaseFullTextSearchConnection, YapDatabaseReadTransaction;

@interface YapDatabaseFullTextSearchTransaction : YapDatabaseExtensionTransaction
{
    YapDatabaseFullTextSearchConnection *ftsConnection;
    YapDatabaseReadTransaction *databaseTransaction;
    _Bool isMutated;
}

- (id)rowid:(long long)arg1 matches:(id)arg2 withSnippetOptions:(id)arg3;
- (_Bool)rowid:(long long)arg1 matches:(id)arg2;
- (void)enumerateRowsMatching:(id)arg1 withSnippetOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateKeysAndObjectsMatching:(id)arg1 withSnippetOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateKeysAndMetadataMatching:(id)arg1 withSnippetOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateKeysMatching:(id)arg1 withSnippetOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateRowidsMatching:(id)arg1 withSnippetOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateRowsMatching:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndObjectsMatching:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysAndMetadataMatching:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateKeysMatching:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRowidsMatching:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleRemoveAllObjectsInAllCollections;
- (void)handleRemoveObjectsForKeys:(id)arg1 inCollection:(id)arg2 withRowids:(id)arg3;
- (void)handleRemoveObjectForCollectionKey:(id)arg1 withRowid:(long long)arg2;
- (void)handleTouchMetadataForCollectionKey:(id)arg1 withRowid:(long long)arg2;
- (void)handleTouchObjectForCollectionKey:(id)arg1 withRowid:(long long)arg2;
- (void)handleReplaceMetadata:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3;
- (void)handleReplaceObject:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3;
- (void)handleUpdateObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4;
- (void)handleInsertObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4;
- (void)rollbackTransaction;
- (void)commitTransaction;
- (void)removeAllRowids;
- (void)removeRowids:(id)arg1;
- (void)removeRowid:(long long)arg1;
- (void)addRowid:(long long)arg1 isNew:(_Bool)arg2;
- (id)tableName;
- (id)registeredName;
- (id)extensionConnection;
- (id)databaseTransaction;
- (_Bool)populate;
- (_Bool)createTable;
- (_Bool)dropTable;
- (_Bool)prepareIfNeeded;
- (_Bool)createIfNeeded;
- (id)initWithFTSConnection:(id)arg1 databaseTransaction:(id)arg2;

@end


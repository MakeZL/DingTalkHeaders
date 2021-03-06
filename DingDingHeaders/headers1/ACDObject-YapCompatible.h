//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACDObject.h"

@interface ACDObject (YapCompatible)
+ (unsigned long long)countWithSqlAfterWhere:(id)arg1 account:(id)arg2;
+ (id)findWithPredicate:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3 account:(id)arg4;
+ (id)findWithPredicate:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3 inContext:(id)arg4;
+ (id)findWithPredicate:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3;
+ (id)findWithPredicate:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 account:(id)arg6;
+ (id)findWithKeysAndObjects:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3 inContext:(id)arg4;
+ (id)findWithKeysAndObjects:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3;
+ (id)findWithKeysAndObjects:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3 account:(id)arg4;
+ (id)findWithKeysAndObjects:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5 account:(id)arg6;
+ (id)findWithKeysAndObjects:(id)arg1 sortTerm:(id)arg2 ascending:(_Bool)arg3 offset:(unsigned long long)arg4 length:(unsigned long long)arg5;
+ (void)syncUpdateObjects:(id)arg1 account:(id)arg2;
+ (void)syncUpdateObject:(id)arg1 account:(id)arg2;
+ (void)asyncDeleteObject:(id)arg1 account:(id)arg2 complectionBlock:(CDUnknownBlockType)arg3;
+ (void)syncDeleteObjects:(id)arg1 account:(id)arg2;
+ (void)syncDeleteObject:(id)arg1 account:(id)arg2;
+ (void)syncDeleteObjects:(id)arg1;
+ (void)syncDeleteObject:(id)arg1;
+ (void)syncSaveObjects:(id)arg1 inContext:(id)arg2;
+ (void)syncSaveObjects:(id)arg1;
+ (void)syncSaveObjects:(id)arg1 account:(id)arg2;
+ (void)syncSaveObject:(id)arg1;
+ (void)syncSaveObject:(id)arg1 account:(id)arg2;
+ (void)asyncSaveObjects:(id)arg1 account:(id)arg2 complectionBlock:(CDUnknownBlockType)arg3;
+ (void)asyncSaveObjects:(id)arg1 inContext:(id)arg2 complectionBlock:(CDUnknownBlockType)arg3;
+ (void)asyncSaveObjects:(id)arg1 complectionBlock:(CDUnknownBlockType)arg2;
+ (void)asyncSaveObject:(id)arg1 inContext:(id)arg2 complectionBlock:(CDUnknownBlockType)arg3;
+ (void)asyncSaveObject:(id)arg1 complectionBlock:(CDUnknownBlockType)arg2;
+ (id)fetchedResultsWithAccount:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 sortTerm:(id)arg4 ascending:(_Bool)arg5 usingMetadata:(_Bool)arg6;
+ (id)fetchedResultsWithAccount:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 sortTerm:(id)arg4 ascending:(_Bool)arg5;
+ (id)collection;
+ (id)objectWithUUID:(id)arg1 account:(id)arg2;
+ (id)excludeCopyProperties;
+ (id)excludeProperties;
+ (id)modelForAccount:(id)arg1;
+ (id)contextForAccount:(id)arg1;
+ (id)contextForAccount:(id)arg1 createIfNeed:(_Bool)arg2;
+ (void)removeContextForAccount:(id)arg1;
- (id)edgeNameWithDestinationObject:(id)arg1;
- (void)changed;
- (id)cascadeObjects;
- (void)objectWillSave;
- (id)initWithAccount:(id)arg1;
- (id)copyWithExcludeProperties:(id)arg1;
- (id)collection;
- (id)uuid;
@end


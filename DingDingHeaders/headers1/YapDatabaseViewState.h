//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface YapDatabaseViewState : NSObject
{
    NSMutableDictionary *group_pagesMetadata_dict;
    NSMutableDictionary *pageKey_group_dict;
    _Bool isImmutable;
}

@property(readonly, nonatomic) _Bool isImmutable; // @synthesize isImmutable;
- (void).cxx_destruct;
- (void)removeAllGroups;
- (void)removeGroup:(id)arg1;
- (id)removePageMetadataAtIndex:(unsigned long long)arg1 inGroup:(id)arg2;
- (id)insertPageMetadata:(id)arg1 atIndex:(unsigned long long)arg2 inGroup:(id)arg3;
- (id)addPageMetadata:(id)arg1 toGroup:(id)arg2;
- (id)createGroup:(id)arg1 withCapacity:(unsigned long long)arg2;
- (id)createGroup:(id)arg1;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateGroupsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupForPageKey:(id)arg1;
- (id)pagesMetadataForGroup:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)group_pagesMetadata_dict_deepCopy;
- (id)initForCopy;
- (id)init;

@end


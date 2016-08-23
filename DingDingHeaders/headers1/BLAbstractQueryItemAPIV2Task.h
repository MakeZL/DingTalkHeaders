//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class BLSyncParentObject, NSArray, NSDictionary, NSString;

@interface BLAbstractQueryItemAPIV2Task : BLBaseAPITask
{
    BLSyncParentObject *_syncParent;
    NSDictionary *_queryParam;
    long long _dataScope;
    NSString *_scopeId;
    long long _windowOffset;
    Class _resultClass;
    NSArray *_items;
    long long _total;
    NSString *_spaceId;
}

@property(copy, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) Class resultClass; // @synthesize resultClass=_resultClass;
@property(nonatomic) long long windowOffset; // @synthesize windowOffset=_windowOffset;
@property(retain, nonatomic) NSString *scopeId; // @synthesize scopeId=_scopeId;
@property(nonatomic) long long dataScope; // @synthesize dataScope=_dataScope;
@property(retain, nonatomic) NSDictionary *queryParam; // @synthesize queryParam=_queryParam;
@property(retain, nonatomic) BLSyncParentObject *syncParent; // @synthesize syncParent=_syncParent;
- (void).cxx_destruct;
- (void)handleSuccessResponse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)parseResult:(id)arg1;
- (void)process;

@end


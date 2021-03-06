//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface BLSyncRequestS2CParam : NSObject
{
    NSString *_spaceId;
    NSString *_scopeId;
    NSString *_loadMoreId;
    long long _dataScope;
    NSString *_syncKey;
    long long _windowOffset;
    long long _windowSize;
    NSDictionary *_queryParam;
    unsigned long long _syncApiMode;
}

@property(nonatomic) unsigned long long syncApiMode; // @synthesize syncApiMode=_syncApiMode;
@property(retain, nonatomic) NSDictionary *queryParam; // @synthesize queryParam=_queryParam;
@property(nonatomic) long long windowSize; // @synthesize windowSize=_windowSize;
@property(nonatomic) long long windowOffset; // @synthesize windowOffset=_windowOffset;
@property(retain, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *loadMoreId;
@property(nonatomic) long long dataScope;
@property(retain, nonatomic) NSString *scopeId;
@property(retain, nonatomic) NSString *spaceId;
@property(nonatomic) long long filterType;
@property(retain, nonatomic) NSString *oldestItemID;
@property(nonatomic) long long folderType;
@property(retain, nonatomic) NSString *folderId;

@end


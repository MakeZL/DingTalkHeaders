//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLAPIBaseResponse.h"

@class NSMutableArray, NSString;

@interface BLAPIFolderSyncResponse : BLAPIBaseResponse
{
    _Bool _shouldContinue;
    NSString *_syncKey;
    long long _syncType;
    NSMutableArray *_folderChanges;
}

@property(retain, nonatomic) NSMutableArray *folderChanges; // @synthesize folderChanges=_folderChanges;
@property(nonatomic) _Bool shouldContinue; // @synthesize shouldContinue=_shouldContinue;
@property(nonatomic) long long syncType; // @synthesize syncType=_syncType;
@property(retain, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end


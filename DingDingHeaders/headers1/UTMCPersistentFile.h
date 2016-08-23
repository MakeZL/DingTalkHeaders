//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager, NSMutableDictionary, NSString;

@interface UTMCPersistentFile : NSObject
{
    NSFileManager *mDefaultFileManager;
    NSString *mOurDocumentPath;
    NSString *mFilePath;
    NSMutableDictionary *mData;
}

+ (id)createWithFile:(id)arg1 and:(id)arg2;
- (void).cxx_destruct;
- (long long)size;
- (void)clear;
- (_Bool)commit;
- (void)reload;
- (_Bool)save;
- (id)objectForKey:(id)arg1;
- (id)allKeys;
- (void)removeLogs:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)clearExtraLogs;
- (void)setDataDict:(id)arg1;
- (id)dataDict;
- (void)create:(id)arg1 and:(id)arg2;
- (void)initData;
- (void)checkPath;

@end


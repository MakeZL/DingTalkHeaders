//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCMode.h"

@class NSString;

@interface DTCSpaceMode : DTCMode
{
    _Bool _copyable;
    NSString *_spaceId;
    NSString *_itemId;
    NSString *_path;
    NSString *_fileName;
    unsigned long long _fileSize;
    NSString *_fileType;
    long long _oid;
    NSString *_cid;
    NSString *_cname;
    long long _mid;
}

+ (id)jsonStringWithMode:(id)arg1;
+ (id)buildWithJsonString:(id)arg1;
@property(nonatomic) _Bool copyable; // @synthesize copyable=_copyable;
@property(nonatomic) long long mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *cname; // @synthesize cname=_cname;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;

@end


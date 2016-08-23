//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class LWPFileAttribute, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface LWPUploadInfo : NSObject <NSCopying, NSCoding>
{
    LWPFileAttribute *_fileAttr;
    NSString *_crc32;
    unsigned long long _fileLen;
    NSString *_fileUniqueKey;
    NSString *_upId;
    int _upFrag;
    long long _uIp;
    NSString *_originUrl;
    NSString *_thumbUrl;
    NSString *_hd;
    NSDate *_lastSaveDate;
    NSMutableArray *_filePartToUpload;
    NSMutableDictionary *_uploadedFilePartMap;
    NSMutableDictionary *_unsendFilePartMap;
    NSMutableDictionary *_sendingFilePartMap;
    int _lastSaveSize;
    NSString *_mediaId;
}

+ (id)uploadInfoWithFileAttr:(id)arg1;
+ (id)customCopyFileAttr:(id)arg1;
@property(retain, nonatomic) LWPFileAttribute *fileAttr; // @synthesize fileAttr=_fileAttr;
@property(retain, nonatomic) NSMutableArray *filePartToUpload; // @synthesize filePartToUpload=_filePartToUpload;
@property(nonatomic) int lastSaveSize; // @synthesize lastSaveSize=_lastSaveSize;
@property(retain, nonatomic) NSDate *lastSaveDate; // @synthesize lastSaveDate=_lastSaveDate;
@property(copy, nonatomic) NSString *hd; // @synthesize hd=_hd;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
@property(nonatomic) unsigned long long fileLen; // @synthesize fileLen=_fileLen;
@property(copy, nonatomic) NSString *crc32; // @synthesize crc32=_crc32;
@property(nonatomic) long long uIp; // @synthesize uIp=_uIp;
@property(nonatomic) int upFrag; // @synthesize upFrag=_upFrag;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *upId; // @synthesize upId=_upId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)buildMapIfNeeds;
- (void)_changeMap:(id)arg1;
- (_Bool)checkMapValid;
- (void)safeModifyMaps:(id)arg1;
- (void)addFilePart:(int)arg1 offset:(unsigned long long)arg2 length:(int)arg3 isUploading:(_Bool)arg4 isUploaded:(_Bool)arg5;
- (void)updateFilePart:(id)arg1 filePartIndex:(int)arg2 uploadedFlag:(_Bool)arg3 uploadingFlag:(_Bool)arg4;
- (void)calcFilePartInfos:(int *)arg1 unsendSize:(unsigned long long *)arg2 sendingCount:(int *)arg3 sendingSize:(unsigned long long *)arg4 sentCount:(int *)arg5 sentSize:(unsigned long long *)arg6 includeSending2Unsend:(_Bool)arg7;
- (id)getNextUnsendFilePart;
- (int)sentCount:(unsigned long long *)arg1;
- (unsigned long long)sentSize:(int *)arg1;
- (int)sendingCount:(unsigned long long *)arg1;
- (unsigned long long)sendingSize:(int *)arg1;
- (int)unsendCount:(unsigned long long *)arg1 includeSending:(_Bool)arg2;
- (unsigned long long)unsendSize:(int *)arg1 includeSending:(_Bool)arg2;

@end


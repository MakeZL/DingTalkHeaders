//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LWPUploadFilePart, LWPUploadInfo, NSData, NSString;

@protocol LWPUploaderProtocol <NSObject>
+ (NSString *)commitUploadFileWithUri:(NSString *)arg1 timeout:(int)arg2 uploadInfo:(LWPUploadInfo *)arg3 filePart:(LWPUploadFilePart *)arg4 fileData:(NSData *)arg5 success:(void (^)(LWPRequest *, LWPResponse *, LWPUploadInfo *))arg6 failure:(void (^)(LWPRequest *, LWPResponse *, LWPUploadInfo *, NSError *))arg7;
+ (NSString *)performUploadFileWithUri:(NSString *)arg1 timeout:(int)arg2 uploadInfo:(LWPUploadInfo *)arg3 filePart:(LWPUploadFilePart *)arg4 fileData:(NSData *)arg5 success:(void (^)(LWPRequest *, LWPResponse *, LWPUploadInfo *))arg6 failure:(void (^)(LWPRequest *, LWPResponse *, LWPUploadInfo *, NSError *))arg7;
+ (NSString *)prepareUploadFileWithUri:(NSString *)arg1 timeout:(int)arg2 uploadInfo:(LWPUploadInfo *)arg3 fileData:(NSData *)arg4 success:(void (^)(LWPRequest *, LWPResponse *, LWPUploadInfo *))arg5 failure:(void (^)(LWPRequest *, LWPResponse *, LWPUploadInfo *, NSError *))arg6;
@end


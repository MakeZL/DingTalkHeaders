//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AFHTTPRequestOperationManager, NSString;

@interface BLAlimeiContentService : NSObject
{
    AFHTTPRequestOperationManager *_opManager;
    NSString *_baseURL;
    NSString *_token;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) AFHTTPRequestOperationManager *opManager; // @synthesize opManager=_opManager;
- (void).cxx_destruct;
- (id)uploadFileWithPath:(id)arg1 fileName:(id)arg2 extension:(id)arg3 uploadId:(id)arg4 offset:(unsigned long long)arg5 chunkSize:(unsigned long long)arg6 totalSize:(unsigned long long)arg7 progressBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9 failedBlock:(CDUnknownBlockType)arg10;
- (id)uploadFileWithData:(id)arg1 fileName:(id)arg2 extension:(id)arg3 uploadId:(id)arg4 offset:(unsigned long long)arg5 chunkSize:(unsigned long long)arg6 totalSize:(unsigned long long)arg7 progressBlock:(CDUnknownBlockType)arg8 completionBlock:(CDUnknownBlockType)arg9 failedBlock:(CDUnknownBlockType)arg10;
- (id)requestUploadFile:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (id)downloadFileWithURL:(id)arg1 outFilePath:(id)arg2 offset:(unsigned long long)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;
- (id)downloadImgURLWithBizType:(id)arg1 bizId:(id)arg2 objectId:(id)arg3 attachId:(id)arg4;
- (id)downloadURLWithBizType:(id)arg1 bizId:(id)arg2 objectId:(id)arg3 attachId:(id)arg4;
- (id)contentServiceHost;
- (void)setAccessToken:(id)arg1;
- (id)cookie;
- (void)setupConnectionManager;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol LWFileUploadManagerDelegate;

@interface LWFileUploadManager : NSObject
{
    NSMutableDictionary *_handlePool;
    id <LWFileUploadManagerDelegate> _uploadDelegate;
}

+ (id)sharedLWFileUploadManager;
@property(nonatomic) __weak id <LWFileUploadManagerDelegate> uploadDelegate; // @synthesize uploadDelegate=_uploadDelegate;
- (void).cxx_destruct;
- (void)clearFileResultCache;
- (void)setFileResultCacheEnabled;
- (id)uploadFilePath:(id)arg1 fileData:(id)arg2 userInfo:(id)arg3 param:(id)arg4 fileAttr:(id)arg5 startBlock:(CDUnknownBlockType)arg6 progressBlock:(CDUnknownBlockType)arg7 completeBlock:(CDUnknownBlockType)arg8;
- (id)uploadFilePath:(id)arg1 fileData:(id)arg2 userInfo:(id)arg3 startBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 completeBlock:(CDUnknownBlockType)arg6 configFileAttr:(CDUnknownBlockType)arg7;
- (id)uploadVideo:(id)arg1 userInfo:(id)arg2 uid:(id)arg3 isPrivate:(_Bool)arg4 startBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7 configFileAttr:(CDUnknownBlockType)arg8;
- (id)uploadVideo:(id)arg1 userInfo:(id)arg2 uid:(id)arg3 isPrivate:(_Bool)arg4 startBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (id)uploadPhoto:(id)arg1 userInfo:(id)arg2 uid:(id)arg3 isPrivate:(_Bool)arg4 startBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7 configFileAttr:(CDUnknownBlockType)arg8;
- (id)uploadPhoto:(id)arg1 userInfo:(id)arg2 uid:(id)arg3 isPrivate:(_Bool)arg4 startBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (id)uploadAudio:(id)arg1 userInfo:(id)arg2 uid:(id)arg3 isPrivate:(_Bool)arg4 startBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7 configFileAttr:(CDUnknownBlockType)arg8;
- (id)uploadAudio:(id)arg1 userInfo:(id)arg2 uid:(id)arg3 isPrivate:(_Bool)arg4 startBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (void)clearCallbackAndCloseHandle:(id)arg1;
- (void)closeFileStream:(id)arg1;
- (void)checkAndUploadStream:(id)arg1;
- (id)openFileStream:(id)arg1 fileName:(id)arg2 isPrivate:(_Bool)arg3 mimeType:(id)arg4 configFileAttr:(CDUnknownBlockType)arg5;
- (id)openFileStream:(id)arg1 fileName:(id)arg2 isPrivate:(_Bool)arg3 mimeType:(id)arg4;
- (id)dequeueHandleForKey:(id)arg1;
- (id)queryHandleForKey:(id)arg1;
- (void)enqueueHandle:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

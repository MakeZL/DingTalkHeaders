//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFURLSessionManager.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class AFHTTPRequestSerializer, AFHTTPResponseSerializer, NSURL;
@protocol AFURLRequestSerialization, AFURLResponseSerialization;

@interface AFHTTPSessionManager : AFURLSessionManager <NSSecureCoding, NSCopying>
{
    NSURL *_baseURL;
    AFHTTPRequestSerializer<AFURLRequestSerialization> *_requestSerializer;
}

+ (_Bool)supportsSecureCoding;
+ (id)manager;
@property(retain, nonatomic) AFHTTPRequestSerializer<AFURLRequestSerialization> *requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)DELETE:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)PATCH:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)PUT:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)HEAD:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer; // @dynamic responseSerializer;
- (id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFURLConnectionOperation.h"

@class AFHTTPResponseSerializer, NSError, NSHTTPURLResponse, NSRecursiveLock;
@protocol AFURLResponseSerialization;

@interface AFHTTPRequestOperation : AFURLConnectionOperation
{
    AFHTTPResponseSerializer<AFURLResponseSerialization> *_responseSerializer;
    id _responseObject;
    NSError *_responseSerializationError;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *responseSerializationError; // @synthesize responseSerializationError=_responseSerializationError;
@property(retain, nonatomic) id responseObject; // @synthesize responseObject=_responseObject;
@property(retain, nonatomic) AFHTTPResponseSerializer<AFURLResponseSerialization> *responseSerializer; // @synthesize responseSerializer=_responseSerializer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pause;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)error;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSRecursiveLock *lock; // @dynamic lock;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @dynamic response;

@end


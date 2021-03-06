//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSMutableDictionary, NSMutableURLRequest, NSString, NSURLProtocol, NSURLResponse;

@interface LWUPResponse : NSObject <NSURLConnectionDataDelegate>
{
    _Bool _stopped;
    _Bool _canCacheData;
    CDUnknownBlockType _stopLoadingHandler;
    CDUnknownBlockType _resHeaderProcessor;
    CDUnknownBlockType _resDataProcessor;
    CDUnknownBlockType _statisticsBlock;
    unsigned long long _cachePolicy;
    NSMutableURLRequest *_request;
    NSURLProtocol *_protocol;
    NSMutableDictionary *_headers;
    NSMutableData *_responseData;
    NSURLResponse *_response;
}

@property(nonatomic) _Bool canCacheData; // @synthesize canCacheData=_canCacheData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSMutableDictionary *headers; // @synthesize headers=_headers;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(retain, nonatomic) NSURLProtocol *protocol; // @synthesize protocol=_protocol;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(copy, nonatomic) CDUnknownBlockType statisticsBlock; // @synthesize statisticsBlock=_statisticsBlock;
@property(copy, nonatomic) CDUnknownBlockType resDataProcessor; // @synthesize resDataProcessor=_resDataProcessor;
@property(copy, nonatomic) CDUnknownBlockType resHeaderProcessor; // @synthesize resHeaderProcessor=_resHeaderProcessor;
@property(copy, nonatomic) CDUnknownBlockType stopLoadingHandler; // @synthesize stopLoadingHandler=_stopLoadingHandler;
- (void).cxx_destruct;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)pipeError:(id)arg1;
- (void)pipeEnd;
- (void)pipeData:(id)arg1;
- (void)pipeResponse:(id)arg1 cachingAllowed:(_Bool)arg2;
- (void)pipeResponse:(id)arg1;
- (void)_resetMemory;
- (void)stopLoading;
- (id)initWithRequest:(id)arg1 protocol:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


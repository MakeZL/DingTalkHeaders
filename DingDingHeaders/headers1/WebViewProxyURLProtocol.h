//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

@class NSMutableURLRequest, WVPRequestMatcher, WVPResponse;

@interface WebViewProxyURLProtocol : NSURLProtocol
{
    NSMutableURLRequest *_correctedRequest;
    WVPResponse *_proxyResponse;
    WVPRequestMatcher *_requestMatcher;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)canInitWithTask:(id)arg1;
+ (id)findRequestMatcher:(id)arg1;
@property(retain, nonatomic) WVPRequestMatcher *requestMatcher; // @synthesize requestMatcher=_requestMatcher;
@property(retain, nonatomic) WVPResponse *proxyResponse; // @synthesize proxyResponse=_proxyResponse;
- (void).cxx_destruct;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LAWebPage, NSMutableArray, NSString;

@interface LAWebViewNavigationManager : NSObject
{
    _Bool _canPushWebPage;
    LAWebPage *_previousPage;
    NSMutableArray *_webPageStack;
    NSString *_lastReqUrl;
}

@property(copy, nonatomic) NSString *lastReqUrl; // @synthesize lastReqUrl=_lastReqUrl;
@property(nonatomic) _Bool canPushWebPage; // @synthesize canPushWebPage=_canPushWebPage;
@property(retain, nonatomic) NSMutableArray *webPageStack; // @synthesize webPageStack=_webPageStack;
@property(retain, nonatomic) LAWebPage *previousPage; // @synthesize previousPage=_previousPage;
- (void).cxx_destruct;
- (id)buildCustomWebPage:(id)arg1 mirrorView:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (id)urlStringWithoutFragment:(id)arg1;
- (_Bool)isPreviousFragmentJumpReappear:(id)arg1;
- (_Bool)shouldOpenNextPage:(id)arg1 withRequest:(id)arg2 navigationType:(long long)arg3 previousURL:(id)arg4;
- (id)pushForwardWithWebView:(id)arg1 request:(id)arg2 navigationType:(long long)arg3;
- (id)generateImageFromView:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (id)webPageForWebView:(id)arg1 startLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)popBackToRoot;
- (void)popBackPreviousPage;
- (void)pushPreviousPage:(id)arg1;
- (unsigned long long)previousPageCount;
- (id)init;

@end

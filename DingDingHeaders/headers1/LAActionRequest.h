//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, UIViewController, UIWebView;

@interface LAActionRequest : NSObject
{
    NSDictionary *_args;
    UIWebView *_webView;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSDictionary *args; // @synthesize args=_args;
- (void).cxx_destruct;
- (id)initWithArgs:(id)arg1 webView:(id)arg2 viewController:(id)arg3;

@end


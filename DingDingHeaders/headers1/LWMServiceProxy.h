//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSString;

@interface LWMServiceProxy : NSProxy
{
    Class _targetClass;
    NSString *_className;
    NSString *_servicePrefix;
}

- (void).cxx_destruct;
- (void)handleInvocation:(id)arg1 isMainThread:(_Bool)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithClass:(Class)arg1;

@end


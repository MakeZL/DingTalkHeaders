//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WebViewProxy : NSObject
{
}

+ (id)_normalizePath:(id)arg1;
+ (void)handleRequestsMatching:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)handleRequestsWithHost:(id)arg1 pathPrefix:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)handleRequestsWithHost:(id)arg1 path:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)handleRequestsWithHost:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)handleRequestsWithScheme:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)removeAllHandlers;
+ (void)munualRegisteProtocol;
+ (void)initialize;
+ (void)load;

@end


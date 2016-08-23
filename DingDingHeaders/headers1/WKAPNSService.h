//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKAPNSServiceProtocol-Protocol.h"

@class NSString;

@interface WKAPNSService : NSObject <WKAPNSServiceProtocol>
{
}

+ (id)sharedApnsService;
- (void)syncBadge:(long long)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)unregisterDevice:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)registerDevice:(id)arg1 appVersion:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)resetBadgeWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBadge:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterDeviceTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)registerDeviceToken:(id)arg1 appVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)hexStringFromData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

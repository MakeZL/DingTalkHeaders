//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTHostServiceInit : NSObject
{
}

+ (id)sharedInstance;
- (void)onAccountLogoutNotification:(id)arg1;
- (void)onAccountLoginNotification:(id)arg1;
- (void)onConnectionStatusChanged:(id)arg1;
- (id)sharedHostEngine;
- (void)setupHostService;
- (void)setupHostServiceAsync;
- (id)init;
- (void)dealloc;

@end


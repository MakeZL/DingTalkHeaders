//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface UTMCSystemHook : NSObject
{
    NSMutableArray *mObservers;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (void).cxx_destruct;
- (void)appDIdEnterBackground:(id)arg1;
- (void)appBecameActive:(id)arg1;
- (void)appDidFinishLaunching:(id)arg1;
- (void)appUpdateTimer:(id)arg1;
- (void)detach:(id)arg1;
- (void)attach:(id)arg1;
- (void)start;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LWHostTask;

@protocol LWHostTaskDelegate <NSObject>
- (void)LWHostTask:(LWHostTask *)arg1 taskDidFinished:(_Bool)arg2;
- (void)LWHostTask:(LWHostTask *)arg1 taskModelUpdated:(_Bool)arg2;
@end

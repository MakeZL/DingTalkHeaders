//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCache;

@interface LWTraceIdCache : NSObject
{
    int _lock;
    NSCache *_traceIdDic;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSCache *traceIdDic; // @synthesize traceIdDic=_traceIdDic;
- (void).cxx_destruct;
- (id)traceIdWithKey:(id)arg1;
- (_Bool)traceIdIsExistWithKey:(id)arg1;
- (void)removeTraceIdWithKey:(id)arg1;
- (void)saveTraceId:(id)arg1 key:(id)arg2;
- (id)init;

@end


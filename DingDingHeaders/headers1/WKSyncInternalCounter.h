//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WKSyncInternalCounter : NSObject
{
    NSMutableDictionary *_countMap;
}

@property(readonly, nonatomic) NSMutableDictionary *countMap; // @synthesize countMap=_countMap;
- (void).cxx_destruct;
- (id)description;
- (void)addCount:(long long)arg1 forKey:(long long)arg2;
- (void)increaseForKey:(long long)arg1;

@end


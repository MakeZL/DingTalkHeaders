//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTSearchEngineIndex : NSObject
{
    int _scanType;
    NSString *_indexName;
    long long _indexMaxMbytes;
}

+ (id)indexWithName:(id)arg1 scanType:(int)arg2 maxMbytes:(long long)arg3;
@property(nonatomic) int scanType; // @synthesize scanType=_scanType;
@property(nonatomic) long long indexMaxMbytes; // @synthesize indexMaxMbytes=_indexMaxMbytes;
@property(copy, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
- (void).cxx_destruct;

@end


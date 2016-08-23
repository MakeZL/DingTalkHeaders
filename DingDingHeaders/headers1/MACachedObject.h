//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface MACachedObject : NSObject
{
    id _cachedObject;
    NSString *_cacheKey;
    NSDate *_timestamp;
    CDStruct_c8e85508 _tile;
}

+ (id)cacheObject:(id)arg1 forTile:(CDStruct_c8e85508)arg2 withCacheKey:(id)arg3;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) CDStruct_c8e85508 tile; // @synthesize tile=_tile;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) id cachedObject; // @synthesize cachedObject=_cachedObject;
- (void).cxx_destruct;
- (id)description;
- (void)touch;
- (id)initWithObject:(id)arg1 forTile:(CDStruct_c8e85508)arg2 withCacheKey:(id)arg3;

@end


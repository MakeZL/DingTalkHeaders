//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MAOverlay-Protocol.h"

@class MAMemoryCache, NSString;

@interface MATileOverlay : NSObject <MAOverlay>
{
    long long _minimumZ;
    long long _maximumZ;
    NSString *_URLTemplate;
    MAMemoryCache *_tileDataCache;
    struct CGSize _tileSize;
    CDStruct_02837cd9 _boundingMapRect;
}

@property(retain, nonatomic) MAMemoryCache *tileDataCache; // @synthesize tileDataCache=_tileDataCache;
@property(nonatomic) CDStruct_90e2a262 boundingMapRect; // @synthesize boundingMapRect=_boundingMapRect;
@property(readonly) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;
@property long long maximumZ; // @synthesize maximumZ=_maximumZ;
@property long long minimumZ; // @synthesize minimumZ=_minimumZ;
@property struct CGSize tileSize; // @synthesize tileSize=_tileSize;
- (void).cxx_destruct;
- (id)uniqueCachekeyForTile:(CDStruct_68723fc0)arg1;
- (void)setCacheData:(id)arg1 forTile:(CDStruct_68723fc0)arg2;
- (id)cachedImageForTile:(CDStruct_68723fc0)arg1;
- (void)removeAllImages;
- (void)loadTileAtPath:(CDStruct_68723fc0)arg1 result:(CDUnknownBlockType)arg2;
- (id)URLForTilePath:(CDStruct_68723fc0)arg1;
- (void)dealloc;
- (id)initWithURLTemplate:(id)arg1;
- (id)init;
- (void)initAttributes;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

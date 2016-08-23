//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ALAssetsFilter, NSString, PHFetchOptions, PHFetchResult, UIImage;

@interface DTAssetCollection : NSObject
{
    NSString *_collectionName;
    long long _numberOfAssets;
    NSString *_localIdentifier;
    id _assetCollection;
    long long _filterType;
    UIImage *_thumbnail;
    PHFetchResult *_fetchResult;
    ALAssetsFilter *_assetsFilter;
    PHFetchOptions *_fetchOptions;
}

@property(retain, nonatomic) PHFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) ALAssetsFilter *assetsFilter; // @synthesize assetsFilter=_assetsFilter;
@property(retain, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(readonly, nonatomic) id assetCollection; // @synthesize assetCollection=_assetCollection;
- (void).cxx_destruct;
- (id)fetchAssets;
- (void)collectionThumbnailWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) long long numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
- (id)currentFetchOptions;
- (id)initWithAssetCollection:(id)arg1;

@end

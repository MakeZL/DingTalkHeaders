//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContent.h"

@class NSString;

@interface BLFavoritePic : BLFavoriteContent
{
    NSString *_mediaId;
    NSString *_picUrl;
    long long _picSize;
    long long _picOrientation;
    long long _picOrigin;
}

@property(nonatomic) long long picOrigin; // @synthesize picOrigin=_picOrigin;
@property(nonatomic) long long picOrientation; // @synthesize picOrientation=_picOrientation;
@property(nonatomic) long long picSize; // @synthesize picSize=_picSize;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;

@end

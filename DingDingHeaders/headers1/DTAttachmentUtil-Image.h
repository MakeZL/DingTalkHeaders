//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTAttachmentUtil.h"

@interface DTAttachmentUtil (Image)
+ (id)getLocalOrientationImageWithKey:(id)arg1 orientation:(long long)arg2 onlyInMemory:(_Bool)arg3;
+ (id)getLocalImageWithMediaId:(id)arg1 messageLocalId:(id)arg2 dataSize:(long long)arg3 orientation:(long long)arg4 checkOriginal:(_Bool)arg5 useGif:(_Bool)arg6 onlyInMemory:(_Bool)arg7;
+ (id)sdCacheImageWithKey:(id)arg1 onlyInMemory:(_Bool)arg2;
+ (id)getDownloadImageUrlWithmediaId:(id)arg1 imageDataSize:(long long)arg2 useGif:(_Bool)arg3;
+ (id)getDownloadImageUrlWithmediaId:(id)arg1 imageDataSize:(long long)arg2;
+ (id)getSmallThumbWithMediaId:(id)arg1;
@end


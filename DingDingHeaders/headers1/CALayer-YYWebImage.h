//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSURL;

@interface CALayer (YYWebImage)
- (void)cancelCurrentImageRequest;
- (void)setImageWithURL:(id)arg1 placeholder:(id)arg2 options:(unsigned long long)arg3 manager:(id)arg4 progress:(CDUnknownBlockType)arg5 transform:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)setImageWithURL:(id)arg1 placeholder:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 transform:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setImageWithURL:(id)arg1 placeholder:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 options:(unsigned long long)arg2;
- (void)setImageWithURL:(id)arg1 placeholder:(id)arg2;
@property(retain, nonatomic) NSURL *imageURL;
@end


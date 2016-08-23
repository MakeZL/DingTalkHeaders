//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSString;
@protocol SDWebImageOperation;

@interface DTImageView : UIImageView
{
    id <SDWebImageOperation> _sdOperation;
    NSString *_url;
}

@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)cancelCurrentImageLoad;
- (void)setImageWithURL:(id)arg1 cornerRadius:(double)arg2 placeholderImage:(id)arg3 progressBlock:(CDUnknownBlockType)arg4 succeedBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 succeedBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5;
- (id)webImageManager;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
- (void)dealloc;

@end


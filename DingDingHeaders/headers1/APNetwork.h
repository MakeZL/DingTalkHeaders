//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APayLoadView, NSOperationQueue, UIView;

@interface APNetwork : NSObject
{
    NSOperationQueue *_operationQueue;
    APayLoadView *_loadView;
    UIView *_maskView;
}

+ (id)defaultClient;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) APayLoadView *loadView; // @synthesize loadView=_loadView;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (id)requestWithUrl:(id)arg1 parameters:(id)arg2 action:(id)arg3;
- (void)postWithUrl:(id)arg1 parameter:(id)arg2 externParams:(id)arg3 action:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)setUrl:(id)arg1;
- (id)init;

@end


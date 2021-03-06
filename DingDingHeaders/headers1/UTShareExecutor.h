//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UTShareContent;

@interface UTShareExecutor : NSObject
{
    UTShareContent *_shareContent;
    CDUnknownBlockType _authorizeCallback;
    CDUnknownBlockType _startedCallback;
    CDUnknownBlockType _finishedCallback;
}

@property(copy, nonatomic) CDUnknownBlockType finishedCallback; // @synthesize finishedCallback=_finishedCallback;
@property(copy, nonatomic) CDUnknownBlockType startedCallback; // @synthesize startedCallback=_startedCallback;
@property(copy, nonatomic) CDUnknownBlockType authorizeCallback; // @synthesize authorizeCallback=_authorizeCallback;
@property(retain, nonatomic) UTShareContent *shareContent; // @synthesize shareContent=_shareContent;
- (void).cxx_destruct;
- (_Bool)needViewController;
- (_Bool)handleOpenURL:(id)arg1;
- (void)shareWithViewController:(id)arg1 content:(id)arg2 onStarted:(CDUnknownBlockType)arg3 onFinished:(CDUnknownBlockType)arg4;
- (void)shareWithContent:(id)arg1 onStarted:(CDUnknownBlockType)arg2 onFinished:(CDUnknownBlockType)arg3;
- (_Bool)isAuthorized;
- (void)authorizeWithCallback:(CDUnknownBlockType)arg1;
- (_Bool)canShare;
- (void)registerApp:(id)arg1;

@end


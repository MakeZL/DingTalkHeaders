//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISecurityGuardOpenNoCaptcha-Protocol.h"

@class NSString;

@interface SecurityGuardOpenNoCaptcha : NSObject <ISecurityGuardOpenNoCaptcha>
{
    CDUnknownBlockType _initBlock;
    CDUnknownBlockType _veriBlock;
}

+ (_Bool)ncBlockHandler:(long long)arg1 statusCode:(long long)arg2 point1:(struct CGPoint)arg3 point2:(struct CGPoint)arg4 token:(id)arg5 signature:(id)arg6 sessionID:(id)arg7;
+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType veriBlock; // @synthesize veriBlock=_veriBlock;
@property(copy, nonatomic) CDUnknownBlockType initBlock; // @synthesize initBlock=_initBlock;
- (void).cxx_destruct;
- (Class)getMetaClass;
- (void)noCaptchaVerification:(id)arg1 status:(CDUnknownBlockType)arg2;
- (_Bool)putNoCaptchaTraceRecord:(long long)arg1 point:(struct CGPoint)arg2;
- (void)initNoCaptcha:(id)arg1 pageName:(id)arg2 width:(int)arg3 height:(int)arg4 retry:(int)arg5 status:(CDUnknownBlockType)arg6 authCode:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


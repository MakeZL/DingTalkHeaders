//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol INoCaptchaComponent <NSObject>
- (void)noCaptchaVerification:(NSString *)arg1 status:(void (^)(long long, struct CGPoint, struct CGPoint, NSString *, NSString *, NSString *))arg2;
- (_Bool)putNoCaptchaTraceRecord:(long long)arg1 point:(struct CGPoint)arg2;
- (void)initNoCaptcha:(NSString *)arg1 pageName:(NSString *)arg2 width:(int)arg3 height:(int)arg4 retry:(int)arg5 status:(void (^)(long long, struct CGPoint, struct CGPoint, NSString *, NSString *, NSString *))arg6;
@end


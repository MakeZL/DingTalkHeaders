//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTURLSecurityChecker, DTWebWhitelistModel, NSURL;
@protocol IMError;

@protocol DTURLCheckerDelete <NSObject>

@optional
- (void)securityChecker:(DTURLSecurityChecker *)arg1 finishCheck:(NSURL *)arg2 whiteError:(id <IMError>)arg3;
- (void)securityChecker:(DTURLSecurityChecker *)arg1 finishCheck:(NSURL *)arg2 whiteModel:(DTWebWhitelistModel *)arg3;
- (void)securityChecker:(DTURLSecurityChecker *)arg1 didStartCheck:(NSURL *)arg2;
- (_Bool)showSuspendedViewWhenChecking:(DTURLSecurityChecker *)arg1;
@end


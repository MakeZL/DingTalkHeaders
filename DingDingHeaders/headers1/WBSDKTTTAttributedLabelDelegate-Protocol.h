//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString, NSTextCheckingResult, NSTimeZone, NSURL, WBSDKTTTAttributedLabel;

@protocol WBSDKTTTAttributedLabelDelegate <NSObject>

@optional
- (NSTextCheckingResult *)linkAtPoint:(struct CGPoint)arg1;
- (void)attributedLabel:(WBSDKTTTAttributedLabel *)arg1 didSelectLinkWithTextCheckingResult:(NSTextCheckingResult *)arg2;
- (void)attributedLabel:(WBSDKTTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2 timeZone:(NSTimeZone *)arg3 duration:(double)arg4;
- (void)attributedLabel:(WBSDKTTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2;
- (void)attributedLabel:(WBSDKTTTAttributedLabel *)arg1 didSelectLinkWithPhoneNumber:(NSString *)arg2;
- (void)attributedLabel:(WBSDKTTTAttributedLabel *)arg1 didSelectLinkWithAddress:(NSDictionary *)arg2;
- (void)attributedLabel:(WBSDKTTTAttributedLabel *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
@end


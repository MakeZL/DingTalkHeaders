//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTSMSCodeField, NSString;

@protocol DTSMSCodeFieldDelegate <NSObject>

@optional
- (void)smsCodeFieldDidChanged:(DTSMSCodeField *)arg1;
- (_Bool)smsCodeField:(DTSMSCodeField *)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(NSString *)arg3;
- (void)smsCodeFieldDidEndEditing:(DTSMSCodeField *)arg1;
- (_Bool)smsCodeFieldShouldEndEditing:(DTSMSCodeField *)arg1;
- (void)smsCodeFieldDidBeginEditing:(DTSMSCodeField *)arg1;
- (_Bool)smsCodeFieldShouldBeginEditing:(DTSMSCodeField *)arg1;
@end

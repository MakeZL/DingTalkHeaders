//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPITask.h"

@class BLAccount, NSNumber, NSString;

@interface BLLoginAPITask : BLBaseAPITask
{
    NSString *_email;
    NSString *_password;
    NSString *_internalToken;
    NSString *_openAPIToken;
    NSString *_deviceID;
    NSNumber *_ev;
    NSString *_umid;
    NSString *_ua;
    NSString *_uaTimestamp;
    NSString *_captchaSessionID;
    BLAccount *_outAccount;
}

@property(retain, nonatomic) BLAccount *outAccount; // @synthesize outAccount=_outAccount;
@property(retain, nonatomic) NSString *captchaSessionID; // @synthesize captchaSessionID=_captchaSessionID;
@property(copy, nonatomic) NSString *uaTimestamp; // @synthesize uaTimestamp=_uaTimestamp;
@property(copy, nonatomic) NSString *ua; // @synthesize ua=_ua;
@property(copy, nonatomic) NSString *umid; // @synthesize umid=_umid;
@property(retain, nonatomic) NSNumber *ev; // @synthesize ev=_ev;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(copy, nonatomic) NSString *openAPIToken; // @synthesize openAPIToken=_openAPIToken;
@property(copy, nonatomic) NSString *internalToken; // @synthesize internalToken=_internalToken;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)handleSuccessResponse:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)process;

@end


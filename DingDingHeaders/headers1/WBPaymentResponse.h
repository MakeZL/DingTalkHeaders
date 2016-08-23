//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseResponse.h"

@class NSString;

@interface WBPaymentResponse : WBBaseResponse
{
    NSString *payStatusCode;
    NSString *payStatusMessage;
}

@property(retain, nonatomic) NSString *payStatusMessage; // @synthesize payStatusMessage;
@property(retain, nonatomic) NSString *payStatusCode; // @synthesize payStatusCode;
- (void).cxx_destruct;
- (void)loadFromDictionary:(id)arg1;
- (void)storeToDictionary:(id)arg1;
- (id)validate;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;

@end


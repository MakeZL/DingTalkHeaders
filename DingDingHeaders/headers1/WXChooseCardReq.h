//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface WXChooseCardReq : BaseReq
{
    unsigned int shopID;
    unsigned int canMultiSelect;
    unsigned int timeStamp;
    NSString *appID;
    NSString *cardType;
    NSString *cardTpID;
    NSString *signType;
    NSString *cardSign;
    NSString *nonceStr;
}

@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *cardSign; // @synthesize cardSign;
@property(retain, nonatomic) NSString *signType; // @synthesize signType;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType;
@property(nonatomic) unsigned int canMultiSelect; // @synthesize canMultiSelect;
@property(nonatomic) unsigned int shopID; // @synthesize shopID;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseReq.h"

@class NSString;

@interface HBReq : BaseReq
{
    unsigned int timeStamp;
    NSString *nonceStr;
    NSString *package;
    NSString *sign;
}

@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
@property(retain, nonatomic) NSString *package; // @synthesize package;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr;

@end


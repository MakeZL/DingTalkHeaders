//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTPDPResource : NSObject
{
    NSString *_domain;
    NSString *_domainId;
    NSString *_type;
    NSString *_rid;
}

+ (id)resourceWithDic:(id)arg1;
@property(copy, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)uniqId;

@end


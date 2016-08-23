//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLAPIBaseResponse.h"

@class NSArray, NSDictionary, NSString;

@interface BLAPIQueryTransferStatusResponse : BLAPIBaseResponse
{
    NSString *_statusId;
    NSString *_status;
    NSString *_msg;
    NSArray *_dentries;
    NSDictionary *_failed;
    unsigned long long _total;
}

@property(nonatomic) unsigned long long total; // @synthesize total=_total;
@property(retain, nonatomic) NSDictionary *failed; // @synthesize failed=_failed;
@property(retain, nonatomic) NSArray *dentries; // @synthesize dentries=_dentries;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *statusId; // @synthesize statusId=_statusId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end


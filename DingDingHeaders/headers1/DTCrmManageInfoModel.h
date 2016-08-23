//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCrmManageInfoModel : Marshal
{
    _Bool _canManage;
    NSNumber *_customerEmpNum;
    NSNumber *_customerNum;
    NSNumber *_contactNum;
    NSNumber *_unassignedCustomerNum;
    NSString *_customerFormUuid;
    NSString *_contactFormUuid;
}

@property(copy, nonatomic) NSString *contactFormUuid; // @synthesize contactFormUuid=_contactFormUuid;
@property(copy, nonatomic) NSString *customerFormUuid; // @synthesize customerFormUuid=_customerFormUuid;
@property(nonatomic) _Bool canManage; // @synthesize canManage=_canManage;
@property(retain, nonatomic) NSNumber *unassignedCustomerNum; // @synthesize unassignedCustomerNum=_unassignedCustomerNum;
@property(retain, nonatomic) NSNumber *contactNum; // @synthesize contactNum=_contactNum;
@property(retain, nonatomic) NSNumber *customerNum; // @synthesize customerNum=_customerNum;
@property(retain, nonatomic) NSNumber *customerEmpNum; // @synthesize customerEmpNum=_customerEmpNum;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


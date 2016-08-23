//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCellItem.h"

@class DTCrmIdentifier, NSString;

@interface DTCrmCellItem : DTCellItem
{
    long long _orgId;
    NSString *_customerId;
    NSString *_agentId;
    long long _customersMemberCount;
    DTCrmIdentifier *_crmIdentifier;
}

@property(retain, nonatomic) DTCrmIdentifier *crmIdentifier; // @synthesize crmIdentifier=_crmIdentifier;
@property(nonatomic) long long customersMemberCount; // @synthesize customersMemberCount=_customersMemberCount;
@property(copy, nonatomic) NSString *agentId; // @synthesize agentId=_agentId;
@property(copy, nonatomic) NSString *customerId; // @synthesize customerId=_customerId;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1;
- (id)getIdentifier;

@end


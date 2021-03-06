//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JSONCollectionType-Protocol.h"

@class NSArray, NSString;

@interface DTTeamDepartment : NSObject <JSONCollectionType>
{
    long long _departId;
    NSString *_departName;
    NSArray *_members;
    NSArray *_subDeparts;
}

@property(copy, nonatomic) NSArray *subDeparts; // @synthesize subDeparts=_subDeparts;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(copy, nonatomic) NSString *departName; // @synthesize departName=_departName;
@property(nonatomic) long long departId; // @synthesize departId=_departId;
- (void).cxx_destruct;
- (Class)arrayElementTypeForFieldName:(id)arg1;
- (_Bool)isValid;
- (_Bool)containsMember:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


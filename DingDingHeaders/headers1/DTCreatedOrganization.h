//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTCreatedOrganization : NSObject
{
    long long _oid;
    NSString *_orgName;
    NSArray *_uidlist;
}

@property(retain, nonatomic) NSArray *uidlist; // @synthesize uidlist=_uidlist;
@property(retain, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(nonatomic) long long oid; // @synthesize oid=_oid;
- (void).cxx_destruct;

@end

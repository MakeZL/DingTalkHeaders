//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABImageResult, NSDictionary, NSMutableArray, NSString;

@interface ABLivenessResult : NSObject
{
    long long _r;
    NSString *_v;
    unsigned long long _bt;
    unsigned long long _et;
    NSString *_aid;
    NSString *_did;
    NSString *_uid;
    NSString *_sid;
    NSString *_isid;
    long long _rt;
    ABImageResult *_qi;
    NSString *_k;
    NSString *_os;
    NSString *_m;
    NSMutableArray *_as;
    NSDictionary *_ex;
}

+ (id)toString:(id)arg1;
@property(retain, nonatomic) NSDictionary *ex; // @synthesize ex=_ex;
@property(retain, nonatomic) NSMutableArray *as; // @synthesize as=_as;
@property(copy, nonatomic) NSString *m; // @synthesize m=_m;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *k; // @synthesize k=_k;
@property(retain, nonatomic) ABImageResult *qi; // @synthesize qi=_qi;
@property(nonatomic) long long rt; // @synthesize rt=_rt;
@property(copy, nonatomic) NSString *isid; // @synthesize isid=_isid;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *did; // @synthesize did=_did;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) unsigned long long et; // @synthesize et=_et;
@property(nonatomic) unsigned long long bt; // @synthesize bt=_bt;
@property(copy, nonatomic) NSString *v; // @synthesize v=_v;
@property(nonatomic) long long r; // @synthesize r=_r;
- (void).cxx_destruct;
- (id)toDict;
- (id)toJSON;
- (id)init;

@end


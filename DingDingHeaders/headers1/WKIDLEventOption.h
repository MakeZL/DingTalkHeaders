//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber;

@interface WKIDLEventOption : Marshal
{
    _Bool _override;
    _Bool _reliable;
    _Bool _reachReceipt;
    _Bool _revisable;
    NSNumber *_expireTime;
    NSNumber *_revisionWay;
}

@property(retain, nonatomic) NSNumber *revisionWay; // @synthesize revisionWay=_revisionWay;
@property(nonatomic) _Bool revisable; // @synthesize revisable=_revisable;
@property(nonatomic) _Bool reachReceipt; // @synthesize reachReceipt=_reachReceipt;
@property(nonatomic) _Bool reliable; // @synthesize reliable=_reliable;
@property(nonatomic) _Bool override; // @synthesize override=_override;
@property(retain, nonatomic) NSNumber *expireTime; // @synthesize expireTime=_expireTime;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

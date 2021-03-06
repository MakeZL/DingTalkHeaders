//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UTMCSessionProtocol-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UTTPKManager : NSObject <UTMCSessionProtocol>
{
    NSMutableArray *_TPKItems;
    NSMutableDictionary *_TPKSources;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
@property(retain) NSMutableDictionary *TPKSources; // @synthesize TPKSources=_TPKSources;
@property(retain) NSMutableArray *TPKItems; // @synthesize TPKItems=_TPKItems;
- (void).cxx_destruct;
- (id)getOutSidettid:(id)arg1 withttid:(id)arg2;
- (void)sessionTimeOut;
- (id)_tpkValue:(id)arg1 pageKey:(id)arg2 url:(id)arg3;
- (id)TPK:(id)arg1 url:(id)arg2;
- (void)addTPKSource:(id)arg1 value:(id)arg2;
- (void)addTPKItem:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


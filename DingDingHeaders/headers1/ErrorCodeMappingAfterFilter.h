//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AfterFilter-Protocol.h"

@class NSDictionary, NSString;

@interface ErrorCodeMappingAfterFilter : NSObject <AfterFilter>
{
    NSDictionary *_msgtable;
}

@property(retain, nonatomic) NSDictionary *msgtable; // @synthesize msgtable=_msgtable;
- (void).cxx_destruct;
- (void)handle:(id)arg1 response:(id)arg2 result:(id)arg3;
- (id)init;
- (id)getName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


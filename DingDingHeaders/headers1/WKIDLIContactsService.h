//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface WKIDLIContactsService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)getContactInfos:(id)arg1 count:(id)arg2 callback:(id)arg3;
- (void)update:(id)arg1 defaultRegion:(id)arg2 callback:(id)arg3;
- (void)delete:(id)arg1 defaultRegion:(id)arg2 callback:(id)arg3;
- (void)add:(id)arg1 defaultRegion:(id)arg2 callback:(id)arg3;
- (void)upload:(id)arg1 defaultRegion:(id)arg2 callback:(id)arg3;

@end


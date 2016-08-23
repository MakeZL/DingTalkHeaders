//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISecurityGuardIndieKit-Protocol.h"

@class NSString;

@interface SecurityGuardIndieKit : NSObject <ISecurityGuardIndieKit>
{
}

- (Class)getMetaClass;
- (id)callCoreIndieKitFunctionsWithArray:(char **)arg1 arrayLen:(unsigned int)arg2 appKey:(id)arg3 requestType:(long long)arg4;
- (void)createArrayForFirstParameter:(const char *)arg1 secondParameter:(const char *)arg2 arrayPtr:(char ***)arg3 arrayLenPtr:(unsigned int *)arg4;
- (void)createArrayForOnePrameter:(const char *)arg1 arrayPtr:(char ***)arg2 arrayLenPtr:(unsigned int *)arg3;
- (int)validateFileSignature:(id)arg1 fileHash:(id)arg2 secretKey:(id)arg3;
- (id)indieKitRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


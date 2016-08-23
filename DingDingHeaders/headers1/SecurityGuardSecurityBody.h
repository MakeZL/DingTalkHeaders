//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISecurityGuardSecurityBody-Protocol.h"

@class NSString;

@interface SecurityGuardSecurityBody : NSObject <ISecurityGuardSecurityBody>
{
}

- (id)getSecurityBodyDataCore:(id)arg1 appKey:(id)arg2 type:(int)arg3;
- (Class)getMetaClass;
- (void)setSecurityBodyServer:(long long)arg1;
- (_Bool)putUserActionRecord:(id)arg1 ctrlName:(id)arg2 xCoordinate:(float)arg3 yCoordinate:(float)arg4;
- (_Bool)putUserTrackRecord:(id)arg1;
- (id)getSecurityBodyDataEx:(id)arg1 appKey:(id)arg2 flag:(int)arg3;
- (id)getSecurityBodyData:(id)arg1 appKey:(id)arg2;
- (id)getSecurityBodyData:(id)arg1;
- (_Bool)initSecurityBody:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


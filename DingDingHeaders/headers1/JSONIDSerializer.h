//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "JSONObjectSerializer-Protocol.h"

@class NSString;

@interface JSONIDSerializer : NSObject <JSONObjectSerializer>
{
}

- (id)deSerializeObject:(id)arg1 fieldName:(id)arg2 data:(id)arg3 instance:(id)arg4;
- (id)serializeObject:(id)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


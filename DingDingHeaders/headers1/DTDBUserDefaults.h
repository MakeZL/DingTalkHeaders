//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTUserDefaultPersistenceProtocol-Protocol.h"

@class NSString, OpenMDHandler;

@interface DTDBUserDefaults : NSObject <DTUserDefaultPersistenceProtocol>
{
    OpenMDHandler *_handler;
}

+ (id)defaultsWithDatabase:(id)arg1;
@property(retain, nonatomic) OpenMDHandler *handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)removeUserValueForKey:(id)arg1;
- (void)setUserValue:(id)arg1 forKey:(id)arg2;
- (id)userValueForKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTConnectivityHandlerProtocol-Protocol.h"

@interface DTConnectivityLoginHandler : NSObject <DTConnectivityHandlerProtocol>
{
}

- (void)onAccountLoggedOut:(id)arg1;
- (void)onAccountLoggedUp:(id)arg1;
- (void)onAccountLoggedIn:(id)arg1;
- (void)configServerListener;
- (void)dealloc;
- (id)init;

@end


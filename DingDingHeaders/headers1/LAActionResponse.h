//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LAActionResponse : NSObject
{
    CDUnknownBlockType _wvjbCallback;
}

@property(copy, nonatomic) CDUnknownBlockType wvjbCallback; // @synthesize wvjbCallback=_wvjbCallback;
- (void).cxx_destruct;
- (void)callbackWithResult:(id)arg1;
- (id)codeStringWihtErrorCode:(long long)arg1;
- (void)_callbackWithResult:(id)arg1 keep:(_Bool)arg2 errorCode:(long long)arg3 errorMessage:(id)arg4;
- (void)errorAndKeepWithCode:(long long)arg1 message:(id)arg2;
- (void)errorWithCode:(long long)arg1 message:(id)arg2;
- (void)successAndKeep:(id)arg1;
- (void)success:(id)arg1;
- (id)initWithCallbackContext:(CDUnknownBlockType)arg1;

@end

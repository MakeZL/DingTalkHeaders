//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLCrashMachExceptionServer : NSObject
{
    struct plcrash_exception_server_context *_serverContext;
}

- (void)dealloc;
- (id)exceptionPortWithMask:(unsigned int)arg1 error:(id *)arg2;
- (unsigned int)copySendRightForServerAndReturningError:(id *)arg1;
@property(readonly, nonatomic) unsigned int serverThread;
- (id)initWithCallBack:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2 error:(id *)arg3;

@end


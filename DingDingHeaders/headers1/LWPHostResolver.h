//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LWPHostResolver : NSObject
{
}

+ (void)cleanupHost:(struct __CFHost *)arg1;
+ (void)processHost:(struct __CFHost *)arg1 address:(struct __CFArray *)arg2 resolveInfo:(id)arg3;
+ (void)processHost:(struct __CFHost *)arg1 hostInfoType:(int)arg2 error:(const CDStruct_87dc826d *)arg3 info:(void *)arg4;
+ (id)errorFromStreamError:(CDStruct_87dc826d)arg1;
- (unsigned char)resolveHost:(id)arg1 completeCallback:(CDUnknownBlockType)arg2;

@end


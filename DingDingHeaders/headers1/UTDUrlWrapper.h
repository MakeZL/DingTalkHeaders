//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UTDUrlWrapper : NSObject
{
}

+ (id)generateFullUrl:(id)arg1 urlQuery:(id)arg2 signQuery:(id)arg3 signData:(id)arg4;
+ (id)signAbtestUrl:(id)arg1 query:(id)arg2 data:(id)arg3;
+ (id)signConfUrl:(id)arg1 query:(id)arg2 data:(id)arg3;
+ (id)signUploadUrl:(id)arg1 query:(id)arg2 data:(id)arg3;
+ (id)securitySign:(id)arg1;
+ (id)baseSign:(id)arg1;

@end


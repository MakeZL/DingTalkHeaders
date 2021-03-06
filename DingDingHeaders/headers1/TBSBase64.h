//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBSBase64 : NSObject
{
}

+ (id)webSafeDecodeString:(id)arg1;
+ (id)stringByWebSafeEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;
+ (id)stringByWebSafeEncodingData:(id)arg1 padded:(_Bool)arg2;
+ (id)webSafeDecodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)webSafeEncodeBytes:(const void *)arg1 length:(unsigned long long)arg2 padded:(_Bool)arg3;
+ (id)webSafeDecodeData:(id)arg1;
+ (id)webSafeEncodeData:(id)arg1 padded:(_Bool)arg2;
+ (id)decodeString:(id)arg1;
+ (id)stringByEncodingBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)stringByEncodingData:(id)arg1;
+ (id)decodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)decodeData:(id)arg1;
+ (id)encodeData:(id)arg1;

@end


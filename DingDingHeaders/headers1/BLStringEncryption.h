//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BLStringEncryption : NSObject
{
}

- (id)sha256:(id)arg1 length:(long long)arg2;
- (id)generateRandomIV:(unsigned long long)arg1;
- (id)md5:(id)arg1;
- (id)decrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;
- (id)encrypt:(id)arg1 key:(id)arg2 iv:(id)arg3;

@end


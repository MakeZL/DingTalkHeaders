//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DataSigner-Protocol.h"

@class NSString;

@interface RSADataSigner : NSObject <DataSigner>
{
    NSString *_privateKey;
}

- (void).cxx_destruct;
- (id)signString:(id)arg1;
- (id)algorithmName;
- (id)formatPrivateKey:(id)arg1;
- (id)urlEncodedString:(id)arg1;
- (id)initWithPrivateKey:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface ASSStorageModel : NSObject
{
    NSString *_apdid;
    NSString *_staticInfoHash;
    NSString *_localToken;
    NSString *_timeStamp;
}

+ (id)storageModelWithResponse:(id)arg1 andHash:(id)arg2;
@property(retain, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSString *localToken; // @synthesize localToken=_localToken;
@property(retain, nonatomic) NSString *staticInfoHash; // @synthesize staticInfoHash=_staticInfoHash;
@property(retain, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
- (void).cxx_destruct;
- (id)dictionaryDescription;
- (id)jsonDescription;

@end


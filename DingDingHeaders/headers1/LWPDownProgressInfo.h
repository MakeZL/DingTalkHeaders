//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface LWPDownProgressInfo : NSObject
{
    NSString *_uniqueKey;
    NSURL *_url;
    double _progress;
    unsigned long long _totalSize;
    unsigned long long _recvSize;
    long long _state;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) unsigned long long recvSize; // @synthesize recvSize=_recvSize;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
- (void).cxx_destruct;

@end


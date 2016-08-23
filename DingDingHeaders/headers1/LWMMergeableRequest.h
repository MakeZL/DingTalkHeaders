//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol NSCopying><NSCoding;

@interface LWMMergeableRequest : NSObject
{
    NSString *_uri;
    NSArray *_args;
    id <NSCopying><NSCoding> _extInfo;
    NSArray *_mergeKeys;
}

@property(copy, nonatomic) NSArray *mergeKeys; // @synthesize mergeKeys=_mergeKeys;
@property(copy, nonatomic) id <NSCopying><NSCoding> extInfo; // @synthesize extInfo=_extInfo;
@property(copy, nonatomic) NSArray *args; // @synthesize args=_args;
@property(copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface AMapNaviConfig : NSObject
{
    NSString *_appScheme;
    NSString *_appName;
    long long _strategy;
    CDStruct_2c43369c _destination;
}

@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) CDStruct_c3b9c2ee destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
- (void).cxx_destruct;
- (id)description;

@end

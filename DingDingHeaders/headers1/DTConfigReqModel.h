//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTConfigReqModel : Marshal
{
    NSNumber *_configType;
    NSArray *_configTypes;
}

@property(copy, nonatomic) NSArray *configTypes; // @synthesize configTypes=_configTypes;
@property(retain, nonatomic) NSNumber *configType; // @synthesize configType=_configType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


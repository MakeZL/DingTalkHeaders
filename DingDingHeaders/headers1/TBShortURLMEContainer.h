//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TBShortURLMEContainer : NSObject
{
    NSMutableDictionary *idEcEntities;
    NSMutableDictionary *ptEcEntities;
    NSMutableArray *ptEcKeys;
    NSMutableArray *ecEntities;
    NSMutableArray *deEntities;
}

+ (id)getInstance;
@property(retain) NSMutableArray *deEntities; // @synthesize deEntities;
@property(retain) NSMutableArray *ecEntities; // @synthesize ecEntities;
@property(retain) NSMutableArray *ptEcKeys; // @synthesize ptEcKeys;
@property(retain) NSMutableDictionary *ptEcEntities; // @synthesize ptEcEntities;
@property(retain) NSMutableDictionary *idEcEntities; // @synthesize idEcEntities;
- (void).cxx_destruct;
- (id)getDeMatchEntity:(id)arg1;
- (id)getEnMatchEntity:(id)arg1;
- (void)addDeEntity:(id)arg1;
- (void)addEcEntities:(id)arg1;

@end


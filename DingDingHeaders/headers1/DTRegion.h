//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface DTRegion : NSObject
{
    NSString *_key;
    NSString *_name;
    NSString *_fullName;
    DTRegion *_parentRegion;
    NSMutableArray *_subRegions;
    unsigned long long _regionLanguage;
}

+ (id)regionWithLanguage:(unsigned long long)arg1;
@property(nonatomic) unsigned long long regionLanguage; // @synthesize regionLanguage=_regionLanguage;
@property(retain, nonatomic) NSMutableArray *subRegions; // @synthesize subRegions=_subRegions;
@property(nonatomic) __weak DTRegion *parentRegion; // @synthesize parentRegion=_parentRegion;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)fullNameForCityRegion:(id)arg1 stateRegion:(id)arg2 countryRegion:(id)arg3;
- (id)fullNameForStateRegion:(id)arg1 countryRegion:(id)arg2;
- (void)beginPaserWithCityArray:(id)arg1;
- (id)subRegionForKey:(id)arg1;
- (id)allSubRegions;
- (_Bool)hasSubRegion;
- (void)addSubRegion:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPJSONModel.h"

@class NSString;

@interface QPVideoPoint : QPJSONModel
{
    double _startTime;
    double _endTime;
    NSString *_fileName;
    long long _rotate;
}

@property(nonatomic) long long rotate; // @synthesize rotate=_rotate;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface DTWorkStatus : NSObject
{
    NSString *_workStatus;
    NSString *_color;
    NSString *_title;
    NSString *_desc;
    NSNumber *_begTime;
    NSNumber *_endTime;
}

@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *begTime; // @synthesize begTime=_begTime;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *workStatus; // @synthesize workStatus=_workStatus;
- (void).cxx_destruct;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTDcPersonAttendanceItemModel : Marshal
{
    NSString *_title;
    NSString *_titleMemo;
    NSString *_time;
    NSString *_desc;
    NSString *_forwardUrl;
    NSNumber *_styleType;
}

@property(retain, nonatomic) NSNumber *styleType; // @synthesize styleType=_styleType;
@property(copy, nonatomic) NSString *forwardUrl; // @synthesize forwardUrl=_forwardUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *titleMemo; // @synthesize titleMemo=_titleMemo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


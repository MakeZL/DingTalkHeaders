//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTLogModel : Marshal
{
    NSNumber *_code;
    NSString *_uid;
    NSString *_app;
    NSString *_appVer;
    NSString *_os;
    NSString *_osVer;
    NSString *_manufacturer;
    NSString *_model;
    NSNumber *_level;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *osVer; // @synthesize osVer=_osVer;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *appVer; // @synthesize appVer=_appVer;
@property(copy, nonatomic) NSString *app; // @synthesize app=_app;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTVidyoConfMemberListResultModel : Marshal
{
    NSNumber *_code;
    NSString *_cause;
    NSArray *_userList;
    NSNumber *_msgType;
}

@property(retain, nonatomic) NSNumber *msgType; // @synthesize msgType=_msgType;
@property(copy, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(copy, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(retain, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


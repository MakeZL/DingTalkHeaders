//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface APBaseResp : NSObject <NSCoding>
{
    int _errCode;
    int _type;
    NSString *_errStr;
    NSString *_openID;
}

@property(retain, nonatomic) NSString *openID; // @synthesize openID=_openID;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *errStr; // @synthesize errStr=_errStr;
@property(nonatomic) int errCode; // @synthesize errCode=_errCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end


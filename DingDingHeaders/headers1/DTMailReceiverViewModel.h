//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTMailReceiverViewModel : NSObject
{
    _Bool _isDTUser;
    _Bool _needFlag;
    _Bool _isPreview;
    NSString *_name;
    NSString *_email;
    NSString *_status;
    long long _userId;
    CDUnknownBlockType _clickBlock;
}

@property(nonatomic) _Bool isPreview; // @synthesize isPreview=_isPreview;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(nonatomic) _Bool needFlag; // @synthesize needFlag=_needFlag;
@property(nonatomic) _Bool isDTUser; // @synthesize isDTUser=_isDTUser;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithDataModel:(id)arg1;

@end


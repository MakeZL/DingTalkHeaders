//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@interface BLSentStatusAPIModel : BLBaseAPIModel
{
    _Bool _shouldDetail;
    long long _unreadCount;
    long long _recipientCount;
}

@property(nonatomic) long long recipientCount; // @synthesize recipientCount=_recipientCount;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool shouldDetail; // @synthesize shouldDetail=_shouldDetail;
- (id)initWithDictionary:(id)arg1;

@end

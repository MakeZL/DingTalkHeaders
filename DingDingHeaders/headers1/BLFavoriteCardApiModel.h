//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContentApiModel.h"

@class NSString;

@interface BLFavoriteCardApiModel : BLFavoriteContentApiModel
{
    NSString *_avatarMediaId;
    long long _cardUid;
    long long _cardType;
    NSString *_cardPhone;
}

@property(copy, nonatomic) NSString *cardPhone; // @synthesize cardPhone=_cardPhone;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) long long cardUid; // @synthesize cardUid=_cardUid;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTGuideModel : Marshal
{
    _Bool _showXpn;
    _Bool _showGuide;
    NSString *_msg;
    NSString *_url;
}

@property(nonatomic) _Bool showGuide; // @synthesize showGuide=_showGuide;
@property(nonatomic) _Bool showXpn; // @synthesize showXpn=_showXpn;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end


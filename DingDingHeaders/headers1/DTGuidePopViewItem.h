//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTGuidePopViewItem : NSObject
{
    NSString *_subTitle;
    NSString *_detail;
    NSString *_url;
    NSString *_bgImageName;
    CDUnknownBlockType _guideBlock;
}

@property(copy, nonatomic) CDUnknownBlockType guideBlock; // @synthesize guideBlock=_guideBlock;
@property(copy, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end


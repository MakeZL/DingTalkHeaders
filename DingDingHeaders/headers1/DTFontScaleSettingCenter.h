//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface DTFontScaleSettingCenter : NSObject
{
    int _fontScaleOrder;
    NSString *_fontScale;
    NSDictionary *_scaleDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *scaleDic; // @synthesize scaleDic=_scaleDic;
- (void).cxx_destruct;
@property(nonatomic) int fontScaleOrder; // @synthesize fontScaleOrder=_fontScaleOrder;
@property(retain, nonatomic) NSString *fontScale; // @synthesize fontScale=_fontScale;
- (void)dealloc;
- (id)init;

@end


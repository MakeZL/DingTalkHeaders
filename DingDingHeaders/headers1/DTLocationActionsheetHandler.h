//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, NSMutableDictionary, NSString;

@interface DTLocationActionsheetHandler : NSObject
{
    CLLocation *_currentUserLocation;
    CLLocation *_targetLocation;
    NSString *_targetTitle;
    NSMutableDictionary *_actionDataSource;
}

@property(retain, nonatomic) NSMutableDictionary *actionDataSource; // @synthesize actionDataSource=_actionDataSource;
@property(copy, nonatomic) NSString *targetTitle; // @synthesize targetTitle=_targetTitle;
@property(retain, nonatomic) CLLocation *targetLocation; // @synthesize targetLocation=_targetLocation;
@property(retain, nonatomic) CLLocation *currentUserLocation; // @synthesize currentUserLocation=_currentUserLocation;
- (void).cxx_destruct;
- (void)jumpMANavPath;
- (void)jumpMANav;
- (void)jumpBaiduNav;
- (_Bool)isInstallVenderNav:(unsigned long long)arg1;
- (void)tapBlockWithIndex:(long long)arg1;
- (void)clickedBaiduNav;
- (void)clickedMANav;
- (void)clickedAppleNav;
- (id)titles;

@end


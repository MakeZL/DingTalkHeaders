//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@class DTAMapSearchService;

@interface LAPRoutePlan : LAPluginBase
{
    DTAMapSearchService *_search;
}

+ (id)pluginExactName;
@property(retain, nonatomic) DTAMapSearchService *search; // @synthesize search=_search;
- (void).cxx_destruct;
- (void)searchRoute:(id)arg1 to:(id)arg2;
- (void)__exported__searchRoute:(id)arg1 to:(id)arg2;

@end


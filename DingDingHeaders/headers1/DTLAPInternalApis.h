//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@interface DTLAPInternalApis : LAPluginBase
{
    long long _sentRequestConfigCount;
    double _lastSentRequestTime;
}

+ (id)pluginExactName;
- (void)resetCheckAndRefreshTopic;
- (void)checkAndRefreshTopic;
- (void)checkInstalled:(id)arg1 to:(id)arg2;
- (void)__exported__checkInstalled:(id)arg1 to:(id)arg2;

@end


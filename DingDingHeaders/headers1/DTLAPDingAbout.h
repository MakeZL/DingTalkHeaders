//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@interface DTLAPDingAbout : LAPluginBase
{
}

+ (id)pluginExactName;
- (id)stringFromDate:(id)arg1 dateFormatterString:(id)arg2;
- (id)dateFromString:(id)arg1 dateFormatterString:(id)arg2;
- (id)dateWithInfo:(id)arg1;
- (void)openDingCreatePageWithUids:(id)arg1 textContent:(id)arg2 alertType:(long long)arg3 alertDate:(id)arg4 editable:(long long)arg5 request:(id)arg6 completeBlock:(CDUnknownBlockType)arg7;
- (void)openDingCreatePageWithUids:(id)arg1 imageUrl:(id)arg2 textContent:(id)arg3 alertType:(long long)arg4 alertDate:(id)arg5 editable:(long long)arg6 request:(id)arg7 completeBlock:(CDUnknownBlockType)arg8;
- (void)openDingCreatePageWithUids:(id)arg1 title:(id)arg2 url:(id)arg3 imageUrl:(id)arg4 text:(id)arg5 textContent:(id)arg6 alertType:(long long)arg7 alertDate:(id)arg8 editable:(long long)arg9 request:(id)arg10 completeBlock:(CDUnknownBlockType)arg11;
- (void)post:(id)arg1 to:(id)arg2;
- (void)__exported__post:(id)arg1 to:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

@class DTWebPersistence, DTWorkPersistence;

@interface DTLAPLegacyAbout : LAPluginBase
{
    DTWebPersistence *_webPersistence;
    DTWorkPersistence *_workPersistence;
}

+ (id)pluginExactName;
@property(retain, nonatomic) DTWorkPersistence *workPersistence; // @synthesize workPersistence=_workPersistence;
@property(retain, nonatomic) DTWebPersistence *webPersistence; // @synthesize webPersistence=_webPersistence;
- (void).cxx_destruct;
- (void)webLog:(id)arg1 to:(id)arg2;
- (void)__exported__webLog:(id)arg1 to:(id)arg2;
- (void)getAccount:(id)arg1 to:(id)arg2;
- (void)__exported__getAccount:(id)arg1 to:(id)arg2;
- (void)setAccount:(id)arg1 to:(id)arg2;
- (void)__exported__setAccount:(id)arg1 to:(id)arg2;
- (void)getUserValue:(id)arg1 to:(id)arg2;
- (void)__exported__getUserValue:(id)arg1 to:(id)arg2;
- (void)updateUserValue:(id)arg1 to:(id)arg2;
- (void)__exported__updateUserValue:(id)arg1 to:(id)arg2;
- (void)saveUserValue:(id)arg1 to:(id)arg2;
- (void)__exported__saveUserValue:(id)arg1 to:(id)arg2;
- (void)webviewClose:(id)arg1 to:(id)arg2;
- (void)__exported__webviewClose:(id)arg1 to:(id)arg2;
- (void)ut:(id)arg1 to:(id)arg2;
- (void)__exported__ut:(id)arg1 to:(id)arg2;
- (void)invokeShare:(id)arg1 to:(id)arg2;
- (void)__exported__invokeShare:(id)arg1 to:(id)arg2;
- (void)createConference:(id)arg1 to:(id)arg2;
- (void)__exported__createConference:(id)arg1 to:(id)arg2;
- (void)postDing:(id)arg1 to:(id)arg2;
- (void)__exported__postDing:(id)arg1 to:(id)arg2;
- (void)showMenu:(id)arg1 to:(id)arg2;
- (void)__exported__showMenu:(id)arg1 to:(id)arg2;

@end


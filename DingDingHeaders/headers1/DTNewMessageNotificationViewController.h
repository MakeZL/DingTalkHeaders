//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTNotificationSoundSettingItem, DTNotificationSoundSettingObserver;

@interface DTNewMessageNotificationViewController : DTTableViewController
{
    _Bool didAddSoundSection;
    DTNotificationSoundSettingObserver *_settingObserver;
    DTNotificationSoundSettingItem *_soundSettings;
}

@property(retain, nonatomic) DTNotificationSoundSettingItem *soundSettings; // @synthesize soundSettings=_soundSettings;
@property(retain, nonatomic) DTNotificationSoundSettingObserver *settingObserver; // @synthesize settingObserver=_settingObserver;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateSoundCloudSettingsFailed:(id)arg1 atRow:(long long)arg2;
- (id)currentSoundSettings;
- (_Bool)isEnabledNotificationSound;
- (_Bool)isSystemNoticeClosed;
- (id)descriptionForIsSystemNoticeClosed;
- (void)didChangeSoundSettingOnCell:(id)arg1 opened:(_Bool)arg2;
- (id)soundSectionItemWithSettings:(id)arg1;
- (void)reloadDataWithSoundSettings:(id)arg1;
- (void)asyncLoadSoundSettings;
- (void)loadData;
- (void)viewDidLoad;

@end


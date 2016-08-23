//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPJSONModel.h"

@class NSString;

@interface QPSave : QPJSONModel
{
    _Bool _recordGuide;
    _Bool _skinOpenGuide;
    _Bool _skinCloseGuide;
    _Bool _importDurationGuide;
    _Bool _skinTipGuide;
    _Bool _backDeleteTipGuide;
    _Bool _backDeleteTrashTipGuide;
    _Bool _recordImportTipGuide;
    _Bool _sdkLaunched;
    NSString *_draftVideoPackName;
    long long _countDownRecordTimes;
}

+ (id)shared;
@property(nonatomic) long long countDownRecordTimes; // @synthesize countDownRecordTimes=_countDownRecordTimes;
@property(retain, nonatomic) NSString *draftVideoPackName; // @synthesize draftVideoPackName=_draftVideoPackName;
@property(nonatomic) _Bool sdkLaunched; // @synthesize sdkLaunched=_sdkLaunched;
@property(nonatomic) _Bool recordImportTipGuide; // @synthesize recordImportTipGuide=_recordImportTipGuide;
@property(nonatomic) _Bool backDeleteTrashTipGuide; // @synthesize backDeleteTrashTipGuide=_backDeleteTrashTipGuide;
@property(nonatomic) _Bool backDeleteTipGuide; // @synthesize backDeleteTipGuide=_backDeleteTipGuide;
@property(nonatomic) _Bool skinTipGuide; // @synthesize skinTipGuide=_skinTipGuide;
@property(nonatomic) _Bool importDurationGuide; // @synthesize importDurationGuide=_importDurationGuide;
@property(nonatomic) _Bool skinCloseGuide; // @synthesize skinCloseGuide=_skinCloseGuide;
@property(nonatomic) _Bool skinOpenGuide; // @synthesize skinOpenGuide=_skinOpenGuide;
@property(nonatomic) _Bool recordGuide; // @synthesize recordGuide=_recordGuide;
- (void).cxx_destruct;
- (void)save;

@end


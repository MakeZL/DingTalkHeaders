//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizMessage, WKIDLTranslateModel;

@protocol DTAudioTranslationTaskResponder <NSObject>
- (DTBizMessage *)seekNextOnMessage:(DTBizMessage *)arg1;
- (void)reportWithStatus:(unsigned long long)arg1 message:(DTBizMessage *)arg2 model:(WKIDLTranslateModel *)arg3;
- (void)cancelTranslateMessage:(DTBizMessage *)arg1;
- (void)updateAudioMessage:(DTBizMessage *)arg1 expands:(_Bool)arg2;
@end


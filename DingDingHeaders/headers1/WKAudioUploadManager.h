//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WKAudioUploadManager : NSObject
{
    NSString *_audioFilePath;
}

+ (id)sharedAudioUploadManager;
@property(copy, nonatomic) NSString *audioFilePath; // @synthesize audioFilePath=_audioFilePath;
- (void).cxx_destruct;
- (void)finishUploadAudioFileByFragmentsCompleteBlock:(CDUnknownBlockType)arg1;
- (void)cancelUploadAudioFileByFragments;
- (void)uploadAudioFileByFragments;
- (void)startUploadAudioFileByFragmentsWithPath:(id)arg1;

@end

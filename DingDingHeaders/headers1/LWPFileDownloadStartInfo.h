//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface LWPFileDownloadStartInfo : NSObject
{
    NSNumber *_expectedSize;
    NSNumber *_receivedSize;
    NSString *_filePath;
}

@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSNumber *receivedSize; // @synthesize receivedSize=_receivedSize;
@property(copy, nonatomic) NSNumber *expectedSize; // @synthesize expectedSize=_expectedSize;
- (void).cxx_destruct;

@end


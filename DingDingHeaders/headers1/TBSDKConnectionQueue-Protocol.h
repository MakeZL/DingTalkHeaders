//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol TBSDKConnectionQueue <NSObject>

@optional
@property unsigned long long totalBytesToDownload;
@property unsigned long long bytesDownloadedSoFar;
@property unsigned long long totalBytesToUpload;
@property unsigned long long bytesUploadedSoFar;
@property(retain) NSDictionary *userInfo;
@property(readonly) int requestsCount;
@property _Bool showAccurateProgress;
@property id delegate;
@property _Bool shouldCancelAllRequestsOnFailure;
@property SEL queueDidFinishSelector;
@property SEL requestDidFailSelector;
@property SEL requestDidFinishSelector;
@property SEL requestWillRedirectSelector;
@property SEL requestDidReceiveResponseHeadersSelector;
@property SEL requestDidStartSelector;
@property(nonatomic, setter=setDownloadProgressDelegate:) id downloadProgressDelegate;
@property(nonatomic, setter=setUploadProgressDelegate:) id uploadProgressDelegate;
- (void)go;
@end


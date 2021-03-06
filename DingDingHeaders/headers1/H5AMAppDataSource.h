//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class H5AMApp, NSDictionary, NSMutableDictionary, NSString;

@interface H5AMAppDataSource : NSObject
{
    H5AMApp *_app;
    NSDictionary *_appConfigDict;
    NSMutableDictionary *_verifyedFiles;
    NSString *_host;
}

@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain) NSMutableDictionary *verifyedFiles; // @synthesize verifyedFiles=_verifyedFiles;
@property(retain, nonatomic) NSDictionary *appConfigDict; // @synthesize appConfigDict=_appConfigDict;
@property(retain, nonatomic) H5AMApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (id)responseWithUrlString:(id)arg1;
- (id)absoluteUrlString:(id)arg1;
- (id)launchUrlString;
- (id)getH5AppConfig:(id)arg1;
- (id)getVerifyedFileData:(id)arg1;
- (void)readTarData:(id)arg1;
- (id)initWithAppId:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface H5AMZipArchive : NSObject
{
    CDUnknownBlockType _handleErrorBlock;
    void *_zipFile;
    void *_unzFile;
    NSString *_password;
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) void *unzFile; // @synthesize unzFile=_unzFile;
@property(nonatomic) void *zipFile; // @synthesize zipFile=_zipFile;
@property(copy, nonatomic) CDUnknownBlockType handleErrorBlock; // @synthesize handleErrorBlock=_handleErrorBlock;
- (void).cxx_destruct;
- (id)Date1980;
- (_Bool)OverWrite:(id)arg1;
- (void)OutputErrorMessage:(id)arg1;
- (_Bool)UnzipCloseFile;
- (_Bool)UnzipFileTo:(id)arg1 overWrite:(_Bool)arg2;
- (_Bool)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (_Bool)UnzipOpenFile:(id)arg1;
- (_Bool)CloseZipFile2;
- (_Bool)addFileToZip:(id)arg1 newname:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1;
- (void)dealloc;
- (id)init;

@end


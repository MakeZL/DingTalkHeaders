//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTFileManager : NSObject
{
}

+ (long long)folderSizeWithPath:(id)arg1;
+ (id)getFileChangeDate:(id)arg1;
+ (id)getFileOwner:(id)arg1;
+ (id)getFileCreateDate:(id)arg1;
+ (unsigned long long)getFileSize:(id)arg1;
+ (id)getFileListInDirPath:(id)arg1;
+ (_Bool)moveFileFromPath:(id)arg1 toPath:(id)arg2;
+ (_Bool)saveFile:(id)arg1 andData:(id)arg2;
+ (_Bool)createFile:(id)arg1;
+ (_Bool)createFileAtPath:(id)arg1;
+ (_Bool)createDir:(id)arg1;
+ (_Bool)createAtDir:(id)arg1;
+ (_Bool)removeFile:(id)arg1;
+ (_Bool)isExist:(id)arg1;
+ (id)getTempPath;
+ (id)getCachePath;
+ (id)getDocumentPath;
+ (id)getApplicationPath;

@end

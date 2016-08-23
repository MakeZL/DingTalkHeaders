//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSString, UIImage;

@interface DTEmotionPackage : NSObject <NSCoding>
{
    long long _packageId;
    NSString *_name;
    NSString *_iconFid;
    unsigned long long _numberOfEmotions;
    NSString *_packagePath;
    NSArray *_emotions;
    long long _version;
}

+ (id)packageWithId:(long long)arg1;
+ (long long)selectedPackageId;
+ (void)setSelectedPackageId:(long long)arg1;
+ (void)resetAllPackages;
+ (void)resetFavouritePackage:(id)arg1;
+ (id)allPackages;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *emotions; // @synthesize emotions=_emotions;
@property(retain, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
@property(nonatomic) unsigned long long numberOfEmotions; // @synthesize numberOfEmotions=_numberOfEmotions;
@property(retain, nonatomic) NSString *iconFid; // @synthesize iconFid=_iconFid;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long packageId; // @synthesize packageId=_packageId;
- (void).cxx_destruct;
- (long long)packagePages;
- (id)emotionWithId:(long long)arg1;
- (id)imageDataWithEmotion:(id)arg1;
- (id)imageWithEmotion:(id)arg1;
- (id)imagePathWithEmotion:(id)arg1;
- (id)thumbnailWithEmotion:(id)arg1;
- (id)thumbnailPathWithEmotion:(id)arg1;
- (id)emotionAtIndex:(unsigned long long)arg1;
- (id)packageIconPath;
@property(readonly, nonatomic) UIImage *packageIcon;
- (id)packageInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPackageId:(long long)arg1 packagePath:(id)arg2;

@end


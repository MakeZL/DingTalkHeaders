//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface DTNewMessageNotificationSectionItem : NSObject
{
    NSString *_header;
    NSString *_footer;
    NSMutableArray *_sectionDataSource;
}

+ (id)itemWithSectionHeader:(id)arg1 sectionFooter:(id)arg2;
@property(retain, nonatomic) NSMutableArray *sectionDataSource; // @synthesize sectionDataSource=_sectionDataSource;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (long long)rowCount;
- (void)removeObjectAtRow:(long long)arg1;
- (void)addobject:(id)arg1;
- (id)objectAtRow:(long long)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DTIMAPNamespace : NSObject
{
    NSMutableArray *_mItems;
}

@property(retain, nonatomic) NSMutableArray *mItems; // @synthesize mItems=_mItems;
- (void).cxx_destruct;
- (id)mainPrefix;
- (BOOL)mainDelimiter;
- (void)importIMAPNamespace:(struct mailimap_namespace_item *)arg1;
- (id)init;

@end


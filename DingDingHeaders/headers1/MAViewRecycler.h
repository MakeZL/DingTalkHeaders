//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MAViewRecycler : NSObject
{
    NSMutableDictionary *_reuseIdentifiersToRecycledViews;
}

@property(retain, nonatomic) NSMutableDictionary *reuseIdentifiersToRecycledViews; // @synthesize reuseIdentifiersToRecycledViews=_reuseIdentifiersToRecycledViews;
- (void).cxx_destruct;
- (void)reduceMemoryUsage;
- (void)dealloc;
- (id)init;
- (void)removeAllViews;
- (void)recycleView:(id)arg1;
- (id)dequeueReusableViewWithIdentifier:(id)arg1;

@end

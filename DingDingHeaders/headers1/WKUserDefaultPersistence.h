//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WKUserDefaultPersistence : NSObject
{
    NSString *_scop;
}

+ (id)userDefaultWithScop:(id)arg1;
@property(retain, nonatomic) NSString *scop; // @synthesize scop=_scop;
- (void).cxx_destruct;
- (void)removeUserValueForKey:(id)arg1;
- (void)setUserValue:(id)arg1 forKey:(id)arg2;
- (id)userValueForKey:(id)arg1;
- (id)keyPathWithKey:(id)arg1;

@end


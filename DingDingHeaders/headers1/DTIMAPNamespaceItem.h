//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTIMAPNamespaceItem : NSObject
{
    BOOL _delimiter;
    NSString *_prefix;
}

@property(nonatomic) BOOL delimiter; // @synthesize delimiter=_delimiter;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (void)importIMAPNamespaceInfo:(struct mailimap_namespace_info *)arg1;

@end


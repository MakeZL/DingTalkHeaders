//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MtopExtResponse;

@interface FilterResult : NSObject
{
    int _action;
    MtopExtResponse *_response;
}

@property(retain, nonatomic) MtopExtResponse *response; // @synthesize response=_response;
@property(nonatomic) int action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)description;

@end


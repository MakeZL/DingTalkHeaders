//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LWPQueryStringPair : NSObject
{
    id _field;
    id _value;
}

@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id field; // @synthesize field=_field;
- (void).cxx_destruct;
- (id)URLEncodedStringValue;
- (id)initWithField:(id)arg1 value:(id)arg2;

@end


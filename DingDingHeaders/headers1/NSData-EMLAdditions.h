//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (EMLAdditions)
- (id)decodedDataUsingEncoding:(long long)arg1;
- (id)stringWithCharset:(id)arg1;
- (id)stringWithDetectedCharset:(id)arg1 withHTMLFlag:(_Bool)arg2;
- (id)charsetWithFilteredHTML:(_Bool)arg1 withCharset:(id)arg2;
- (id)charsetWithFilteredHTMLWithoutHint:(_Bool)arg1;
- (_Bool)isHintCharsetValid:(id)arg1;
- (id)normalizeCharset:(id)arg1;
@end


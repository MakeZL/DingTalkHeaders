//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTEmotionTabItem;

@protocol DTEmotionTabViewDelegate <NSObject>

@optional
- (void)dtEmotionTabViewItemDidChangeToIndex:(unsigned long long)arg1;
- (void)dtEmotionTabViewItemSelected:(DTEmotionTabItem *)arg1;
- (void)dtEmotionTabViewSend;
@end


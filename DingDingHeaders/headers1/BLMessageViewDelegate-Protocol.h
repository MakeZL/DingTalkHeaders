//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BLMessageView, NSDictionary, NSString, NSURL;

@protocol BLMessageViewDelegate <NSObject>

@optional
- (void)messageViewDidClickSender:(BLMessageView *)arg1;
- (void)messageView:(BLMessageView *)arg1 didClickReceiver:(NSDictionary *)arg2;
- (void)messageView:(BLMessageView *)arg1 longPressImage:(NSString *)arg2;
- (void)messageView:(BLMessageView *)arg1 openLink:(NSURL *)arg2;
@end

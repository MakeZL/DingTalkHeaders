//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString;

@interface DTTextField : UITextField
{
    _Bool _isEndableChangeTheme;
    NSString *_textFieldName;
}

+ (id)defaultDTTextField:(double)arg1;
+ (id)textFieldWithNotification:(id)arg1;
@property(readonly, copy, nonatomic) NSString *textFieldName; // @synthesize textFieldName=_textFieldName;
@property(nonatomic) _Bool isEnableChangeTheme; // @synthesize isEnableChangeTheme=_isEndableChangeTheme;
- (void).cxx_destruct;
- (void)dealloc;
- (void)whenThemeChange;
- (void)themeChange;
- (id)initTextFieldWithNotification:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCellItem.h"

@interface DTCellItem (Init)
- (id)initItemForSelectedStyleWithIcon:(id)arg1 title:(id)arg2 isSelected:(_Bool)arg3 selectedType:(unsigned long long)arg4 cellDidSelectedBlock:(CDUnknownBlockType)arg5;
- (id)initItemForTitleOnlyStyleWithTitle:(id)arg1 cellDidSelectedBlock:(CDUnknownBlockType)arg2;
- (id)initItemForEditStyleWithTitle:(id)arg1 textFieldHint:(id)arg2 textFieldLimt:(long long)arg3 textFieldHelpBtnNormalImage:(id)arg4 textFieldHelpBtnHighLightImage:(id)arg5 textFieldDidChangeEditingBlock:(CDUnknownBlockType)arg6;
- (id)initItemForSwitcherStyleWithTitle:(id)arg1 isSwitcherOn:(_Bool)arg2 switcherValueDidChangeBlock:(CDUnknownBlockType)arg3;
- (id)initItemForDefaultStyleWithIcon:(id)arg1 title:(id)arg2 titleFont:(id)arg3 detail:(id)arg4 detailFont:(id)arg5 numberOfDetailLine:(long long)arg6 cellDidSelectedBlock:(CDUnknownBlockType)arg7;
- (id)initItemForDefaultStyleWithIcon:(id)arg1 title:(id)arg2 image:(id)arg3 showIndicator:(_Bool)arg4 cellDidSelectedBlock:(CDUnknownBlockType)arg5;
- (id)initItemForDefaultStyleWithIcon:(id)arg1 title:(id)arg2 detail:(id)arg3 comment:(id)arg4 showBadge:(_Bool)arg5 showIndicator:(_Bool)arg6 cellDidSelectedBlock:(CDUnknownBlockType)arg7;
- (id)initItemForDefaultStyleWithIcon:(id)arg1 title:(id)arg2 detail:(id)arg3 comment:(id)arg4 showIndicator:(_Bool)arg5 cellDidSelectedBlock:(CDUnknownBlockType)arg6;
- (id)initItemForDefaultStyleWithIcon:(id)arg1 title:(id)arg2 comment:(id)arg3 image:(id)arg4 showIndicator:(_Bool)arg5 cellDidSelectedBlock:(CDUnknownBlockType)arg6;
@end


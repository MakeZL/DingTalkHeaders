//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 16 2016 16:28:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class DTAvatarCellImageView, NSArray, NSString;

@interface DTAvatarImageView : UIImageView
{
    NSArray *_membersAvatar;
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _longPressBlock;
    NSString *_dtSize;
    DTAvatarCellImageView *_imageView1;
    DTAvatarCellImageView *_imageView2;
    DTAvatarCellImageView *_imageView3;
    DTAvatarCellImageView *_imageView4;
}

+ (id)nickNameFromUserName:(id)arg1;
+ (id)DT_A9:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A8:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A7:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A6:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A5:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A4:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A3:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A2:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A1:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)DT_A9:(id)arg1;
+ (id)DT_A8:(id)arg1;
+ (id)DT_A7:(id)arg1;
+ (id)DT_A6:(id)arg1;
+ (id)DT_A5:(id)arg1;
+ (id)DT_A4:(id)arg1;
+ (id)DT_A3:(id)arg1;
+ (id)DT_A2:(id)arg1;
+ (id)DT_A1:(id)arg1;
+ (id)avatarWithMemberModel:(id)arg1 dtAvatarSizeKey:(id)arg2 shapeType:(long long)arg3 isNeedScale:(_Bool)arg4;
+ (id)avatarWithMemberModel:(id)arg1 dtAvatarSizeKey:(id)arg2 shapeType:(long long)arg3;
+ (id)avatarWithMemberModel:(id)arg1 dtAvatarSizeKey:(id)arg2 isNeedScale:(_Bool)arg3;
+ (id)avatarWithMemberModel:(id)arg1 dtAvatarSizeKey:(id)arg2;
+ (id)avatarWithMembersModel:(id)arg1 isNeedScale:(_Bool)arg2;
+ (id)avatarWithMembersModel:(id)arg1;
@property(retain, nonatomic) DTAvatarCellImageView *imageView4; // @synthesize imageView4=_imageView4;
@property(retain, nonatomic) DTAvatarCellImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(retain, nonatomic) DTAvatarCellImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) DTAvatarCellImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(retain, nonatomic) NSString *dtSize; // @synthesize dtSize=_dtSize;
@property(copy, nonatomic) CDUnknownBlockType longPressBlock; // @synthesize longPressBlock=_longPressBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) NSArray *membersAvatar; // @synthesize membersAvatar=_membersAvatar;
- (void).cxx_destruct;
- (id)getAvatarSizeKeyWithSize:(double)arg1;
- (id)getSubImageView4;
- (id)getSubImageView3;
- (id)getSubImageView2;
- (id)getSubImageView1;
- (void)setImage:(id)arg1;
- (void)setAvatarWithImage:(id)arg1 isNeedScale:(_Bool)arg2;
- (void)setAvatarWithImage:(id)arg1;
- (void)longPressEvent:(id)arg1;
- (void)clickEvent:(id)arg1;
- (void)setMemberWithUserModel:(id)arg1 dtAvatarSizeKey:(id)arg2 shapeType:(long long)arg3 isNeedScale:(_Bool)arg4;
- (void)setMemberWithUserModel:(id)arg1 dtAvatarSizeKey:(id)arg2 shapeType:(long long)arg3;
- (void)setMemberWithUserModel:(id)arg1 dtAvatarSizeKey:(id)arg2 isNeedScale:(_Bool)arg3;
- (void)setMemberWithUserModel:(id)arg1 dtAvatarSizeKey:(id)arg2;
- (void)setMemberWithUserModel:(id)arg1 isNeedScale:(_Bool)arg2;
- (void)setMemberWithUserModel:(id)arg1;
- (void)setMemberUserModelsSizeToFit:(id)arg1 size:(struct CGSize)arg2;
- (void)setMembersWithMembersUserModelSizeToFit:(id)arg1 size:(struct CGSize)arg2;
- (void)setMembersWithMembersUserModel:(id)arg1 size:(struct CGSize)arg2 isNeedScale:(_Bool)arg3;
- (void)setMembersWithMembersUserModel:(id)arg1 size:(struct CGSize)arg2;
- (void)setMembersWithMembersUserModel:(id)arg1 isNeedScale:(_Bool)arg2;
- (void)setMembersWithMembersUserModel:(id)arg1;
- (id)initWithMemberModel:(id)arg1 dtAvatarSizeKey:(id)arg2 shapeType:(long long)arg3 isNeedScale:(_Bool)arg4;
- (id)initWithMemberModel:(id)arg1 dtAvatarSizeKey:(id)arg2 shapeType:(long long)arg3;
- (id)initWithMemberModel:(id)arg1 dtAvatarSizeKey:(id)arg2 isNeedScale:(_Bool)arg3;
- (id)initWithMembersModel:(id)arg1 isNeedScale:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


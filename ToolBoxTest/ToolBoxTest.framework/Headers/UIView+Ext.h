//
//  UIView+Tool.h
//  JadeKing
//
//  Created by 张森 on 2018/8/8.
//  Copyright © 2018年 张森. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, ZSShadowPathSide) {
    ZSShadowPathLeft,
    ZSShadowPathRight,
    ZSShadowPathTop,
    ZSShadowPathBottom,
    ZSShadowPathNoTop,
    ZSShadowPathNoBottom,
    ZSShadowPathAllSide
};

@interface UIView (Ext)
+ (UIView *)getControllerView;
- (void)addSubviewToControllerView;
- (void)addSubviewToRootControllerView;
- (void)addRoundedCorners:(UIRectCorner)corners
                withRadii:(CGSize)radii;
- (void)addCornerRadius:(CGFloat)cornerRadius;
- (void)addShadowColor:(UIColor *)color
               opactiy:(CGFloat)opactiy
                radius:(CGFloat)radius
                  side:(ZSShadowPathSide)side
       shadowPathWidth:(CGFloat)shadowPathWidth;
@end

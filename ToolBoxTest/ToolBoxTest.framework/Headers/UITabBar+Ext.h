//
//  UITabBar+Tool.h
//  JadeKing
//
//  Created by 张森 on 2018/9/11.
//  Copyright © 2018年 张森. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITabBar (Ext)

/**
 显示提醒标记

 @param index 位置
 */
- (void)showBadgeOnItemIndex:(NSInteger)index;

/**
 显示提醒标记
 
 @param index 位置
 @param backColor 标记背景颜色
 @param contentColor 文字颜色
 @param font 文字大小
 */
- (void)showBadgeOnItemIndex:(NSInteger)index
                   backColor:(UIColor *)backColor
                contentColor:(UIColor *)contentColor
                        font:(UIFont *)font;

/**
 显示提醒标记
 
 @param index 位置
 @param count 数量，若为0则不显示
 */
- (void)showBadgeOnItemIndex:(NSInteger)index
                       count:(NSInteger)count;

/**
 显示提醒标记

 @param index 位置
 @param count 数量，若为0则不显示
 @param backColor 标记背景颜色
 @param contentColor 文字颜色
 @param font 文字大小
 */
- (void)showBadgeOnItemIndex:(NSInteger)index
                       count:(NSInteger)count
                   backColor:(UIColor *)backColor
                contentColor:(UIColor *)contentColor
                        font:(UIFont *)font;

/**
 移除提醒标记
 
 @param index 位置
 */
- (void)removeBadgeOnItemIndex:(NSInteger)index;

/**
 移除所有提醒标记
 */
- (void)removeAllBadge;
@end

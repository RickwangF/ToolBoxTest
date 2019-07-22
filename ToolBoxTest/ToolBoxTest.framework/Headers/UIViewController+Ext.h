//
//  UIViewController+Tool.h
//  JadeKing
//
//  Created by 张森 on 2018/9/4.
//  Copyright © 2018年 张森. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Ext)

/**
 控制器present到RootController

 @param animated 是否有动画
 @param completion 动画完成回调
 */
- (void)presentRootViewControllerAnimated:(BOOL)animated
                               completion:(void (^)(void))completion;
@end

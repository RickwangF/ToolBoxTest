//
//  ZSAnimationTool.h
//  JadeKing
//
//  Created by 张森 on 17/9/17.
//  Copyright © 2017年 Jaadee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZSAnimationTool : NSObject
+ (void)beginSacleValue:(NSArray <NSNumber *>*)value duration:(NSTimeInterval)duration animationForLayer:(CALayer *)layer;
+ (void)beginRevoleAnimation:(CALayer *)layer;
+ (void)beginMoveAnimation:(CALayer *)layer repeatCount:(NSInteger)repeatCount duration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(UIViewAnimationOptions)options point:(CGPoint)point delegate:(id <CAAnimationDelegate>)delegate;
+ (void)beginShakeAnimation:(UIView *)view;
@end

//
//  UIView+Frame.h
//  JadeKing
//
//  Created by Jaadee on 2017/9/6.
//  Copyright © 2017年 Jaadee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Frame)
@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign) CGFloat maxX;
@property (nonatomic, assign) CGFloat maxY;

@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@end

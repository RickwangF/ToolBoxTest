//
//  UIImage+Ext.h
//  JadeKing
//
//  Created by 张森 on 2019/6/17.
//  Copyright © 2019 张森. All rights reserved.
//
#import <UIKit/UIKit.h>

@interface UIImage (Ext)
- (UIImage *)img_scaledToSize:(CGSize)newSize;
- (UIImage *)img_getCornerRadius:(CGFloat)radius;
- (UIImage *)img_maskImage:(UIImage*)mImage;
+ (UIImage *)img_imageColor:(UIColor *)color;
- (UIImage *)img_resizableWithCapInsets:(UIEdgeInsets)insets;

+ (UIImage *)cutScreenWithView:(UIView *)view;

@end


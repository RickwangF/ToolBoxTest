//
//  NSAttributedString+Addition.h
//  JadeKing
//
//  Created by 张森 on 2018/8/4.
//  Copyright © 2018年 张森. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSAttributedString (Addition)
+ (NSAttributedString *)addAttributeImage:(UIImage *)img font:(UIFont *)font;  // 文字和图片底部对齐
+ (NSAttributedString *)addAttributeImage:(UIImage *)img imgFont:(UIFont *)imgFont textFont:(UIFont *)textFont;  // 文字和图片中心对齐

- (CGSize)sizeWithMaxSize:(CGSize)maxSize;  // 计算字符所占Size
- (NSAttributedString *)addAttributedFont:(UIFont *)font maxSize:(CGSize)maxSize attribute:(NSDictionary *)attributeDict lineHeight:(CGFloat)lineHeight alignment:(NSTextAlignment)alignment autoLineBreak:(BOOL)autoLineBreak;
- (NSAttributedString *)addAttributedFont:(UIFont *)font maxSize:(CGSize)maxSize attribute:(NSDictionary *)attributeDict lineHeight:(CGFloat)lineHeight headIndent:(CGFloat)headIndent tailIndent:(CGFloat)tailIndent alignment:(NSTextAlignment)alignment autoLineBreak:(BOOL)autoLineBreak;
@end

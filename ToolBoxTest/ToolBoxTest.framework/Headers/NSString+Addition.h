//
//  NSString+Addition.h
//  
//
//  Created by 张森 on 15/8/27.
//  Copyright (c) 2015年 张森. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (Addition)

- (NSString *)md5;
- (NSString *)URLEncodedString;
- (NSString *)URLDecodedString;
- (NSString *)base64Encode;
- (NSString *)base64Dencode;
- (NSString *)hexStrEncode;
- (NSString *)hexStrDencode;
- (NSString *)htmlEntityDecode;  // html编码转化
- (NSURL *)URLWithString;
- (CGSize)sizeWithFont:(UIFont *)font maxSize:(CGSize)maxSize;  // 计算字符所占Size
// 添加Attribute
- (NSAttributedString *)addAttributedFont:(UIFont *)font maxSize:(CGSize)maxSize attribute:(NSDictionary *)attributeDict lineHeight:(CGFloat)lineHeight alignment:(NSTextAlignment)alignment autoLineBreak:(BOOL)autoLineBreak;
- (NSAttributedString *)addAttributedFont:(UIFont *)font maxSize:(CGSize)maxSize attribute:(NSDictionary *)attributeDict lineHeight:(CGFloat)lineHeight headIndent:(CGFloat)headIndent tailIndent:(CGFloat)tailIndent alignment:(NSTextAlignment)alignment autoLineBreak:(BOOL)autoLineBreak;


- (BOOL)str_isPureInt;  // 判断是否为整形
- (BOOL)str_isPureFloat;  // 判断是否为浮点形
- (BOOL)str_isPureNumber;  // 判断是否为数字
- (BOOL)str_isValidUrl;  // 判断该字符串是不是一个有效的URL
- (BOOL)str_isGifImage;  // 根据图片名 判断是否是gif图

- (NSString *)str_deleteWhitespaceLineBreak;  // 去除首尾空格和回车

@end

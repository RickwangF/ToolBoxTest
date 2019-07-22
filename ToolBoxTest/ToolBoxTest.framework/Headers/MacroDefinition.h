//
//  MacroDefinition.h
//  JadeKing
//
//  Created by 张森 on 2018/7/28.
//  Copyright © 2018年 张森. All rights reserved.
//

#ifndef MacroDefinition_h
#define MacroDefinition_h

#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define KABOVE_iPhoneX ([[NSString stringWithFormat:@"%.2f", 9.f / 19.5] floatValue] == [[NSString stringWithFormat:@"%.2f", KSWIDTH / KSHEIGHT] floatValue])

#ifdef DEBUG
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...)
#endif

// Mark - 屏幕宽高、frame
#define KSWIDTH [UIScreen mainScreen].bounds.size.width
#define KSHEIGHT [UIScreen mainScreen].bounds.size.height
#define KSBOUNDS [UIScreen mainScreen].bounds

// Mark - 屏幕16:9比例系数下的宽高
#define KS_16_9_WIDTH KSHEIGHT * 9.f / 16.f
#define KS_16_9_HEIGHT KSWIDTH * 16.f / 9.f

// Mark - 子试图16:9比例系数下的宽高
#define KSUBSCALEWIDTH(height) (IS_IPAD ? height * 3.f / 4.f : height * 9.f / 16.f)
#define KSUBSCALEHEIGHT(width) (IS_IPAD ? width * 4.f/ 3.f : width * 16.f / 9.f)

// Mark - 关于刘海屏幕适配
#define KTABBAR_HEIGHT (KABOVE_iPhoneX ? 83 : 49)  // tabbar高度
#define KHOME_HEIGHT (KABOVE_iPhoneX ? 34 : 0)  // Home键的高度
#define KSTATUSBAR_HEIGHT [[UIApplication sharedApplication] statusBarFrame].size.height // 状态栏高度

// Mark - iPhone以375 * 667为基础机型的比例系数，iPad以768 * 1024为基础机型的比例系数
#define KUNIT_WIDTH (IS_IPAD ? KSWIDTH / 768.f : KSWIDTH / 375.f)
#define KUNIT_HEIGHT (IS_IPAD ? KSHEIGHT / 1024.f : (KABOVE_iPhoneX ? (KS_16_9_HEIGHT / 667.f) : KSHEIGHT / 667.f))

// Mark - 字体和颜色
#define KFONT(num) [UIFont systemFontOfSize:num * KUNIT_HEIGHT]  // 字体系数
#define KCOLOR(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define KHEXCOLORA(rgbValue,a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]
#define KHEXCOLOR(rgbValue) KHEXCOLORA(rgbValue, 1.0)

// Mark - 主线程
#define Main_Dispatch_Async(block)\
if ([NSThread isMainThread]) {\
block();\
} else {\
dispatch_async(dispatch_get_main_queue(), block);\
}

// Mark - 选择子
#define SEL_VALUE(SEL_NAME) [NSValue valueWithPointer:@selector(SEL_NAME)]

// Mark - iPad适配
#define KIPAD_WIDTH(width) width / 375.f * KSWIDTH  // 以375宽度进行比例计算
#define KIPAD_HEIGHT(height) height / 667.f * KSHEIGHT  // 以667高度进行比例计算
#define KSWIDTH_IPAD_HEIGHT(height) (IS_IPAD ? KSWIDTH / 375.f * height * KUNIT_HEIGHT : height * KUNIT_HEIGHT)  // 宽度为屏幕宽度的视图高度


#endif /* MacroDefinition_h */

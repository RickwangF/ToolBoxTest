//
//  JDStringTool.h
//  JadeKing
//
//  Created by 张森 on 2018/8/3.
//  Copyright © 2018年 张森. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ZSTimingMode) {
    ZSTimingMode_12 = 12,
    ZSTimingMode_24 = 24
};


@interface ZSStringTool : NSObject
+ (BOOL)isGifWithImageData:(NSData *)data;  // 根据图片data 判断是否是gif图
+ (NSString *)contentTypeWithImageData:(NSData *)data;  // 根据image的data 判断图片类型(png、jpg...)

+ (NSString *)getJSONString:(id)param;  // 生产json字符串
+ (NSString *)getUrlQueryString:(NSDictionary *)dict;  // 字典转化为Url的query字符串

+ (NSDateComponents *)getComponentsMinuteToYearFromDate:(NSDate *)date;

+ (NSString *)deviceVersion;  // 获取设备型号
// 获取当前时间戳
+ (NSString *)getNowTimeTimestampInt;  //（秒）
+ (NSString *)getNowTimeTimestampFloat;  //（秒）
+ (NSString *)getNowTimeTimestampMillisecondInt;  // (毫秒)
+ (NSString *)getNowTimeTimestampMillisecondFloat;  // (毫秒)
// 获取截止时间戳
+ (NSString *)getFutureTimeTimestampInt:(NSTimeInterval)interval;  //（秒）
+ (NSString *)getFutureTimeTimestampFloat:(NSTimeInterval)interval;  //（秒）
+ (NSString *)getFutureTimeTimestampMillisecondInt:(NSTimeInterval)interval;  //（毫秒）
+ (NSString *)getFutureTimeTimestampMillisecondFloat:(NSTimeInterval)interval;  //（毫秒）
+ (NSString *)getCurrentTimesFormat:(NSString *)format;  // 获取当前的日期
+ (NSDateFormatter *)getNSDateFormatter:(NSString *)format;  // 获取日期格式
+ (NSString *)getDateWithTimeIntervalSince1970:(NSTimeInterval)secs format:(NSString *)format;  // 将时间戳转化为日期



/**
 获取时间段的字符串

 @param timeInterval 需要转换的时间戳
 @param showOclock 是否显示具体的时钟
 @param hideTodayOclock 隐藏今天的时钟，显示“今天”
 @param timingMode 小时制
 @return 时间段的字符串
 */
+ (NSString *)getTimeFrame:(NSTimeInterval)timeInterval
                 showOclock:(BOOL)showOclock
            hideTodayOclock:(BOOL)hideTodayOclock
                 timingMode:(ZSTimingMode)timingMode;


/**
 获取时间段的字符串

 @param timeInterval 需要转换的时间戳
 @param customFunction 自定义的方法，由自己处理成想要的字符串
 @return 时间段的字符串
 */
+ (NSString *)getCustomTimeFrame:(NSTimeInterval)timeInterval
                   customFunction:(NSString *(^)(NSDateComponents *nowComponents, NSDateComponents *dateComponents))customFunction;

@end

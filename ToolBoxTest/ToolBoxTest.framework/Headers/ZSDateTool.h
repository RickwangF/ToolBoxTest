//
//  ZSDateTool.h
//  JadeKing
//
//  Created by 张森 on 2019/6/2.
//  Copyright © 2019 张森. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZSDateTool : NSObject

/**
 * 获取范围内的年、月、日、时、分、秒区间值
 * @param limitYear   从当前时间开始，往后多少年
 * @param limitMonth  从当前时间开始，往后多少月
 * @param limitDay    从当前时间开始，往后多少天
 * @param limitHour   从当前时间开始，往后几小时
 * @param limitMinute 从当前时间开始，往后几分钟
 * @param limitSecond 从当前时间开始，往后多少秒
 * @param containsBase 集合中是否包含当前时间
 * @return 返回字段 { year : [], month : [], day : [], hour : [], minute : [], second : [] }
 **/
+ (NSDictionary *)getPickerTimeData:(NSInteger)limitYear
                         limitMonth:(NSInteger)limitMonth
                         limitDay  :(NSInteger)limitDay
                         limitHour :(NSInteger)limitHour
                        limitMinute:(NSInteger)limitMinute
                        limitSecond:(NSInteger)limitSecond
                       containsBase:(BOOL)containsBase;

+ (NSArray *)getPickerTimeYear:(NSInteger)limitYear
                  containsBase:(BOOL)containsBase;


+ (NSArray *)getPickerTimeMonth:(NSInteger)limitMonth
                   containsBase:(BOOL)containsBase;

+ (NSArray *)getPickerTimeDay:(NSInteger)limitDay
                 containsBase:(BOOL)containsBase;

+ (NSArray *)getPickerTimeHour:(NSInteger)limitHour
                  containsBase:(BOOL)containsBase;

@end

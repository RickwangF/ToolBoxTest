//
//  NSTimer+Tool.h
//  JadeKing
//
//  Created by 张森 on 2019/1/2.
//  Copyright © 2019年 张森. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Ext)
+ (NSTimer *)supportiOS_10EarlierVersionsScheduledTimerWithTimeInterval:(NSTimeInterval)interval repeats:(BOOL)repeats block:(void (^)(NSTimer *timer))block;
@end

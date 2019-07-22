//
//  ZSObjectTool.h
//  JadeKing
//
//  Created by 张森 on 2018/8/4.
//  Copyright © 2018年 张森. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZSObjectTool<ObjectType> : NSObject
+ (BOOL)isEmpty:(id)param;  // 判断是否为空
+ (id)getParamsValue:(id)value;  // 获取字典的value
@end

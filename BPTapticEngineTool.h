//
//  BPTapticEngineTool.h
//  qinziyuan_b_ios
//
//  Created by zhudou on 2017/12/18.
//  Copyright © 2017年 ryb. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 触觉反馈
 `UIImpactFeedbackGenerator`预示着按压发生了。
 
 `UISelectionFeedbackGenerator`预示着选择的变化
 
 `UINotificationFeedbackGenerator`预示着成功、失败和警告。
 
 */
@interface BPTapticEngineTool : NSObject

/**
 轻、中等、重

 @param style 类型
 */
+ (void)impactFeedback:(UIImpactFeedbackStyle)style;

//+ (void)selectionFeedback;

/**
 成功、失败、警告

 @param type 类型
 */
+ (void)notificationFeedback:(UINotificationFeedbackType)type;

@end

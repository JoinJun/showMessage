//
//  MessageLabel.h
//  ShowMessage
//
//  Created by chenjun on 16/7/4.
//  Copyright © 2016年 cloudssky. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MessageLabel : UILabel
/**
 *  展示提示信息
 *
 *  @param message 信息
 */
+ (void)showMessage:(NSString *)message;
/**
 *  展示提示信息
 *
 *  @param message   信息
 *  @param bgColor   背景颜色
 *  @param textColor 文字颜色
 */
+ (void)showMessage:(NSString *)message bgColor:(UIColor *)bgColor textColor:(UIColor *)textColor;
/**
 *  展示提示信息
 *
 *  @param message   信息
 *  @param bgColor   背景颜色
 *  @param textColor 文字颜色
 *  @param radius    圆角大小
 */
+ (void)showMessage:(NSString *)message bgColor:(UIColor *)bgColor textColor:(UIColor *)textColor radius:(CGFloat)radius;
/**
 *  展示提示信息
 *
 *  @param message   信息
 *  @param bgColor   背景颜色
 *  @param textColor 文字颜色
 *  @param radius    圆角大小
 *  @param align     文字对齐方式
 */
+ (void)showMessage:(NSString *)message bgColor:(UIColor *)bgColor textColor:(UIColor *)textColor radius:(CGFloat)radius textAlign:(NSTextAlignment)align;

@end

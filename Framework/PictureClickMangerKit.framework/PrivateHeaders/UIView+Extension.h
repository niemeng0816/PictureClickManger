//
//  UIView+Extension.h
//  CTools
//
//  Created by Chance. on 15/4/30.
//  Copyright (c) 2015年 Chance. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Extension)

/**
 *  视图的中心点横坐标
 */
@property (nonatomic) CGFloat x;

/**
 *  视图的中心点纵坐标
 */
@property (nonatomic) CGFloat y;

/**
 *  视图的顶边位置
 */
@property (nonatomic) CGFloat top;

/**
 *  视图的底边位置
 */
@property (nonatomic) CGFloat bottom;

/**
 *  视图的左边位置
 */
@property (nonatomic) CGFloat left;

/**
 *  视图的右边位置
 */
@property (nonatomic) CGFloat right;

/**
 *  视图的宽度
 */
@property (nonatomic) CGFloat width;

/**
 *  视图的高度
 */
@property (nonatomic) CGFloat height;

/**
 *  视图的大小
 */
@property (nonatomic, getter=getSize) CGSize size;

@property (nonatomic) BOOL active; /**< 视图可用操作状态*/

/**
 *  设置视图的边框宽度和颜色
 */
- (void)setBorderWidth:(CGFloat)width color:(UIColor *)color;

/**
 *  设置视图的圆角
 */
- (void)setBorderRadius:(CGFloat)radius;

#pragma mark - other event

/**
 *  设置背景颜色为随机颜色
 */
- (void)colorDebug;

- (void)removeAllSubviews;

- (BOOL)isInView:(UIView *)view;

- (BOOL)containsSubview:(UIView *)view;

- (UIViewController *)viewController;

- (UIWindow *)viewWindow;

- (UIImage *)viewScreenshot;
























@end

//
//  UIButton+AWHBRLoading.h
//  AWHBoneRuntime
//
//  Created by 王恒 on 2025/7/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (AWHBRLoading)

// 开始加载动画
- (void)startLoading;

// 停止加载动画
- (void)stopLoading;

// 判断是否正在加载
- (BOOL)isLoading;

- (void)setLoadingColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END

//
//  UIButton+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>
#define defaultInterval .5  //默认时间间隔

typedef NS_ENUM(NSUInteger, AWHBRButtonEdgeInsetsStyle) {
    AWHBRButtonEdgeInsetsStyleTop, // image在上，label在下
    AWHBRButtonEdgeInsetsStyleLeft, // image在左，label在右
    AWHBRButtonEdgeInsetsStyleBottom, // image在下，label在上
    AWHBRButtonEdgeInsetsStyleRight // image在右，label在左
};

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (AWHBR)

/**设置点击时间间隔*/

@property (nonatomic, assign) NSTimeInterval timeInterval;

/**
 *  不同状态设置不同颜色
 *
 *  @param backgroundColor 颜色
 *  @param state           状态
 */
- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state;


/**
 *  倒计时按钮
 *
 *  @param timeLine 倒计时总时间
 *  @param title    还没倒计时的title
 *  @param subTitle 倒计时中的子名字，如时、分
 *  @param mColor   还没倒计时的颜色
 *  @param color    倒计时中的颜色
 */
- (void)startWithTime:(NSInteger)timeLine title:(NSString *)title countDownTitle:(NSString *)subTitle mainColor:(UIColor *)mColor countColor:(UIColor *)color;


/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(AWHBRButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;

@end

NS_ASSUME_NONNULL_END

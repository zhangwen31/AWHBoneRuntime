//
//  UIView+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (AWHBR)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;
@property (nullable,nonatomic,readonly)UIViewController *viewController;
- (void)removeAllObjects;
- (UIViewController *)getCurrentVC;

- (void)clicked:(void(^)(UIView *view))clickBlock;

- (void)longPress:(void(^)(UIView *view))longPressBlock;

@end

NS_ASSUME_NONNULL_END

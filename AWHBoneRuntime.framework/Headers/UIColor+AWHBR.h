//
//  UIColor+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (AWHBR)

+(UIColor *)colorWithHexString:(NSString *)hexString;
+ (UIColor *)colorWithHexString:(NSString *)hexString alpha:(CGFloat)alpha;
+(NSString *)hexValuesFromUIColor:(UIColor *)color;
- (BOOL)isEqualToColor:(UIColor *)otherColor;

@end

NS_ASSUME_NONNULL_END

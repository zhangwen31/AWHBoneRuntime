//
//  UIImage+Tool.h
//  AWHBoneRuntime
//
//   Created by GeDaTing on 2022/7/23.
//

#import <UIKit/UIKit.h>

@interface UIImage (Tool)

/** 纠正图片的方向 */
- (UIImage *)fixOrientation;

/** 按给定的方向旋转图片 */
- (UIImage*)rotate:(UIImageOrientation)orient;

/** 垂直翻转 */
- (UIImage *)flipVertical;

/** 水平翻转 */
- (UIImage *)flipHorizontal;

/** 将图片旋转degrees角度 */
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

/** 将图片旋转radians弧度 */
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;


/**
 给静态图片添加圆角
 @param cornerRadius 圆角
 @param newSize 图片大小
 @return 添加圆角的图片
 */
- (UIImage *)imageWithCornerRadius:(CGFloat)cornerRadius size:(CGSize)newSize;

- (UIImage *)scaleImage:(CGSize)newSize;
/// 调整图片尺寸和大小
/// @param newSize 新的尺寸
- (UIImage*)resizeImage:(CGSize)newSize;

///压缩到100k以内
-(NSData *)imageCompressToData;
@end

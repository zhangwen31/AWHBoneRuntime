//
//  UIImage+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/4/18.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (AWHBR)
/**同步加载图片*/
+ (UIImage *)imageUrl_awhbr:(NSString *)urlStr placeHolderImageName:(NSString *)placeHolderStr;
/**异步加载图片 本地有有从本地取*/
+ (void)imageResourceUrl_awhbr:(NSString *)urlStr
     placeHolderImageName:(NSString *)placeHolderStr
          completion:(void (^)(UIImage *image))completion;

/**异步加载图片 每次都获取*/
+ (void)imageUrl_awhbr:(NSString *)urlStr
     placeHolderImageName:(NSString *)placeHolderStr
          completion:(void (^)(UIImage *image))completion;

/**
 get image from local or remote
 
 @param resource image reource
 @param completion get image back
 */
+ (void)getImageWithResource:(id)resource completion:(void (^)(UIImage *image))completion;

@end

NS_ASSUME_NONNULL_END

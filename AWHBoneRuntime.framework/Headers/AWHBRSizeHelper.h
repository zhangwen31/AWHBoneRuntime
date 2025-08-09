//
//  AWHBRSizeHelper.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>

#define scaleFrom720(x) [AWHBRSizeHelper getWidthScreenScale360:(x)]
#define scaleFrom750(x) [AWHBRSizeHelper getWidthScreenScale750:(x)]
#define scaleFrom375(x) [AWHBRSizeHelper getWidthScreenScale375:(x)]
#define scaleForText750(x) ([AWHBRSizeHelper get_FontSize:x])
#define scaleForText720(x) ([AWHBRSizeHelper getFontSize:x])

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRSizeHelper : NSObject

+ (CGFloat)screenWidth;
+ (CGFloat)screenHeight;
+ (CGFloat)screenScale375;
+ (CGFloat)screenScale750;
+ (CGFloat)screenScale360;
+ (CGFloat)getWidthScreenScale375:(CGFloat)width;
+ (CGFloat)getWidthScreenScale750:(CGFloat)width;
+ (CGFloat)getWidthScreenScale360:(CGFloat)width;

//+(CGFloat) mega;   //48
+(CGFloat) header; //40
+(CGFloat) f1;     //32
+(CGFloat) f2;     //28
+(CGFloat) f3;     //24
+(CGFloat) f4;      //20
+(CGFloat) f5;
+(CGSize)screenSize;
+(CGFloat)getFontSize:(NSInteger )x;
+(CGFloat)get_FontSize:(NSInteger )x;
+(CGFloat)getppi;

@end

NS_ASSUME_NONNULL_END

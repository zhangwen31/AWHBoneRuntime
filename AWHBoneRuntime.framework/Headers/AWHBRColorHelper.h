//
//  AWHBRColorHelper.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRColorHelper : NSObject

+(UIColor *) brandColor; //品牌色, 多用于辅助强调
+(UIColor *) normalFontColor; // 正文常用字体色或次要链接色
+(UIColor *) normalFontInstructionColor; //正文中辅助和说明的颜色
+(UIColor *) instructionColor; // 备注色
//+(UIColor *) highlightedInstructionColor; //强调备注色, 多用于商品推荐说明, 错误提示或其他需要强调的地方
//+(UIColor *) highlightColor; //强调色, 多用于显示商品价格,折扣,提醒
//+(UIColor *) vcLightGrayColor; // ViewController 背景淡淡的灰色
+(UIColor *) borderColor;
+(UIColor *)pcolor;

@end

NS_ASSUME_NONNULL_END

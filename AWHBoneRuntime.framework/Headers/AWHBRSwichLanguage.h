//
//  AWHBRSwichLanguage.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRSwichLanguage : NSObject

+(NSBundle *)bundle;//获取当前资源文件

+(void)initUserLanguage;
/**
 * 设置默认语言 不设置默认中文
 */
+ (void)setupDefaultLanguage:(NSString *)language;


+(NSString *)userLanguage;//获取应用当前语言



+(void)setUserlanguage:(NSString *)language;//设置当前语言

@end

NS_ASSUME_NONNULL_END

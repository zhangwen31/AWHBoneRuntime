//
//  AWHBRTools.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define AWHBRLocalizedString(key) [AWHBRTools languageConversion:key]

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRTools : NSObject

// dispatch_after取消操作
typedef void(^AWHBRDelayedBlockHandle)(BOOL cancel);
AWHBRDelayedBlockHandle awhbr_perform_block_after_delay(CGFloat seconds, dispatch_block_t block);
void awhbr_cancel_delayed_block(AWHBRDelayedBlockHandle delayedHandle);


/**
 *  app上边距status值
 */
+ (CGFloat)getAppTopSpace;

/**
 *  app与其他上边距status差值
 */
+ (CGFloat)getAppTopActiveSpace;

/**
 *  app下边距值
 */
+ (CGFloat)getAppTopBottomSpace;

//当前时间，时间戳
+ (NSString *)GetNowTimes;
//将某个时间转化成 时间戳
+(NSInteger)timeSwitchTimestamp:(NSString *)formatTime andFormatter:(NSString *)format;
// 判断时间段
+ (BOOL)date:(NSDate*)date isBetweenDate:(NSDate*)beginDate andDate:(NSDate*)endDate;
//日期转字符串
+ (NSString *)stringWithDate:(NSDate *)date;
//当前时间
+ (NSString *)nowDateFormatter:(NSString *)formatter;
//当前时间前的时间
+ (NSString *)nowDate:(NSString *)str andDayNumber:(int)hours andFormatter:(NSString *)formatter;
//当前凌晨时间
+ (NSString *)getThatDayEarlyMorningFormatter:(NSString *)formatter;
//当前距离某时间的时间戳时间 yyMMddHHmmss
+ (NSString *)getEndTimeWithStartTime:(NSString *)startTime timeDifference:(NSInteger)timeDifference;
//获取传入的时间的时间戳的日期
+ (NSString *)getDateStringWith:(NSString *)dateString andFormatter:(NSString *)formatter;
// MD5加密 16位 小写
+(NSString *)MD5ForLower32Bate:(NSString *)str;
//获取uuid
+(NSString *)uuids;
//多语言切换
+(NSString *)languageConversion:(NSString *)string;
//去除特殊字符
+(NSString *)specialCharacters:(NSString *)string;
+(NSString *)special59Characters:(NSString *)string;
+(NSString *)specialCharactersNoSS:(NSString *)string;
+(NSString *)bytesChange:(NSString *)byte;
//传入 分钟  得到 xx:xx:xx
+ (NSString *)getMMSSFRomSS:(NSString *)time;
// 字典转json字符串方法
+(NSString *)convertToJsonData:(NSDictionary *)dict;
//当时时间到本周末的时间返回天数
+(NSInteger)endOfTheWeek;
//获取当前时间到当月底的天数
+(NSInteger)endOfTheMonth;
//获取当前时间到下月底的天数
+(NSInteger)endOfTheNextMonth;
//获取当前和当前n天后的日期
+(NSString *)getNDay:(NSInteger)n;
//获取当前和当前n天后的日期 yyyyMMdd
+(NSString *)getNumberDay:(NSInteger)n;
+(NSString *)getNDayMM:(NSInteger)n;
//关闭系统
+(void)exitApplication ;
+ (NSString *)getDHMSFromSS:(NSString *)time;
+ (NSString *)dateTimeDifferenceWithStartTime2:(NSString *)startTime endTime:(NSString *)endTime;
//横屏
+ (void)setNewOrientation:(BOOL)fullscreen;
//是否允许转向 屏幕
+ (void)setAllowRotation:(BOOL)allowRotation;
//获取屏幕方向
+ (UIInterfaceOrientationMask)getInterfaceOrientationMask;

//保存搜索历史
+(void)searchText :(NSString *)seaTxt andArrayName:(NSString *)name;
//判断两个数组的元素是否相等
+ (BOOL)array:(NSSet *)array1 isEqualTo:(NSArray *)array2;
//完整请求链接
+(NSString *)allRequestLink:(NSString *)urlString andDic:(NSDictionary *)dic;
//设置密码8位以上，必须包含字母和数字
+(BOOL)judgePassWordLegal:(NSString *)pass;
//指纹解锁
+(void)fingerprint:(void(^)(BOOL success))block;
//判断是否全是空格
+ (BOOL) isEmpty:(NSString *) str;
/**
获取字典有序value数组
对传入的字典key进行排序，依序提取value入数组
@param dict NSDictionary
@return NSArray
*/
+(NSArray *) orderValueArrayWithDictionary:(NSMutableDictionary *) dict;
//去除数组中model重复
+(NSArray *)removeModelDuplicatesFromArray:(NSMutableArray *)muArr;
/**
 * 判断字符串是否为IP地址
 * param iPAddress IP地址字符串
 * return BOOL 是返回YES，否返回NO
 */
+ (BOOL)isIPAddress:(NSString *)iPAddress;
//判断是否为手机号
+ (BOOL)validateCellPhoneNumber:(NSString *)cellNum;
//获取手机机型
+ (NSString *)getMobilePhoneModel;

///** 分享三方应用  目前只支持微信
// * @param platformType 平台的类型
// * @param title 标题
// * @param desc 描述
// * @param image 缩略图（UIImage或者NSData类型，或者image_url）
// * @param url 分享链接
// * @param controller 需要分享界面  用于分享成功或者失败
// *
// */
//+ (void)shareSocialPlatformType:(UMSocialPlatformType)platformType title:(NSString *)title desc:(NSString *)desc image:(id)image url:(NSString *)url controller:(UIViewController *)controller;

//URLEncode
+ (NSString *)URLEncodeWithStr:(NSString *)str;
//URLDEcode
+ (NSString *)URLDecodeWithStr:(NSString *)str;

//检查IP或域名  默认只能输入数字、小数点、英文大小写字母  限制200个
+ (BOOL)checkIpOrDomainName:(NSString *)str;
//检查端口  默认只能输入数字  1~65535
+ (BOOL)checkPort:(NSString *)str;
//检查是否包含表情符
+ (BOOL)checkIncludeEmoticons:(NSString *)str;
//秒转化为时分秒
+ (NSString *)stringHourWithSecond:(NSInteger)second;
//秒转化为分秒
+ (NSString *)stringMinWithSecond:(NSInteger)second;
//秒转化为天时分秒
+ (NSString *)stringDayHourWithSecond:(NSInteger)second;
//秒转化为时分秒 最少有分
+ (NSString *)stringTwoHourWithSecond:(NSInteger)second;
//身份证正则
+(BOOL)validateIDCardNumber:(NSString *)value;
//匹配数字 字母 汉字
+(BOOL)checkName:(NSString *)str;
+(BOOL)judgeNum:(NSString *)pass;
+(BOOL)judgeplate:(NSString *)pass;
+ (UIWindow *)getKeyWindow;

+ (UIWindow *)frontWindow;

/**
 *  计算文字尺寸
 *
 *  @param text    需要计算尺寸的文字
 *  @param font    文字的字体
 *  @param maxSize 文字的最大尺寸
 */
+ (CGSize)sizeWithText:(NSString *)text font:(UIFont *)font maxSize:(CGSize)maxSize;

+ (NSString *)getAppVersion;
/**
 * 随机生成UUID
 */
+ (NSString *)uuidString;
/**
 * 是否实现分享协议
 */
+ (BOOL)canImplementShareProtocol;

+ (UIViewController *)getCurrentVC;


@end

NS_ASSUME_NONNULL_END

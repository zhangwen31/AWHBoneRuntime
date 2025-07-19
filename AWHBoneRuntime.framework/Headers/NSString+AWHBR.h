//
//  NSString+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (AWHBR)

/// 拼音字符串
@property (nonatomic, copy, readonly) NSString *pinyinString;

/**
 字符串是否为空

 @return YES: 是  NO：不是
 */
- (BOOL)isEmpty;

/**
 身份证是否有效

 @return YES: 是  NO：不是
 */
- (BOOL)isValidUserId;


/**
 处理路径的斜杠问题

 @return 返回结果
 */
- (instancetype)pathString;


/**
 是否为有效的手机号

 @return YES: 是  NO：不是
 */
- (BOOL)isMobilePhone;
/**
 * 是否是数字
 */
- (BOOL)isNum;
/**
 * 是否是数字 先去掉字符串中 “-”
 */
- (BOOL)isNumRemoveRow;


/**
 是否为有效的邮箱格式

 @return YES: 是  NO：不是
 */
- (BOOL)isEmail;

- (NSString *)base64EncodedString;

- (NSString *)base64DecodedString;

- (CGSize)singleLineSizeWithAttributeText_awhbr:(UIFont *)font;

- (CGSize)multiLineSizeWithAttributeText_awhbr:(CGFloat)width font:(UIFont *)font;

- (CGSize)singleLineSizeWithText:(UIFont *)font;

- (NSString *)md5_awhbr;

- (NSData*)hexToBytes_awhbr;

- (NSURL *)urlScheme_awhbr:(NSString *)scheme;

+ (NSString *)localizedString:(NSString *)key ;

+ (NSString *)formatCount:(NSInteger)count;

+ (NSString *)currentTime;

+ (NSString *)currentDateStr;

//获取当前时间 时分秒
+ (NSString *)currentDateHMSStr;

//获取当前时间 年月日时分秒
+ (NSString *)currentDateYMDHMSStr;

+ (NSString *)hexStringFromHexData_awhbr:(NSData *)data;

/** 十六进制转换为普通字符串*/
+ (NSString *)stringFromHexString_awhbr:(NSString *)hexString;
/** 二进制转十进制 */
- (NSString *)toDecimalWithBinary_awhbr:(NSString *)binary;
/** 十进制转二进制 */
- (NSString *)toBinarySystemWithDecimalSystem_awhbr:(int)num length:(int)length;

/** 普通字符串转换为十六进制 */
+ (NSString *)hexStringFromString_awhbr:(NSString *)string;

/** 将传入的NSData类型转换成NSString */
+ (NSString *)hexadecimalString_awhbr:(NSData *)data;

/** 字典转JSON字符串*/
+ (NSString *)jsonStringFromDictionary_awhbr:(NSDictionary *)dictionaty;

/** 返回UInt8*/
- (UInt8 )hexValue_awhbr;

//是否不是空白 空格也不行
+ (BOOL)isNotBlank_awhbr:(NSString*)source;
//是否是空白  空格也是
+ (BOOL)isBlank_awhbr:(NSString*)source;
//是否为空  不包括空格
+ (BOOL)isEmpty_awhbr:(NSString*)source;
//获取字符串字节数
- (NSUInteger)charactorNumber;
//从字典安全出去字符串 如果是NSNumber类型转换成字符串
+ (NSString *)getSafeStringWithDictionary:(NSDictionary *)dict key:(NSString *)key;
/**
 * 从字典安全出去字符串 如果是NSNumber类型转换成字符串 四舍五入
 * @param dict 字段
 * @param key 标识key
 * @param decimalPointNum 小数点后几位
 */
+ (NSString *)getSafeStringHalfAdjustWithDictionary:(NSDictionary *)dict
                                                key:(NSString *)key
                                    decimalPointNum:(NSInteger)decimalPointNum;
/**
 * 转换成字符串 四舍五入
 * @param value 值 可以是字符串或者NSNumber
 * @param decimalPointNum 小数点后几位
 */
+ (NSString *)getStringHalfAdjustWithValue:(id)value
                           decimalPointNum:(NSInteger)decimalPointNum;

/**
 * 转换成字符串 四舍五入
 * @param value 值 浮点数
 * @param decimalPointNum 小数点后几位
 */
+ (NSString *)getStringHalfAdjustWithFloatValue:(CGFloat)value
                                decimalPointNum:(NSInteger)decimalPointNum;

@end

NS_ASSUME_NONNULL_END

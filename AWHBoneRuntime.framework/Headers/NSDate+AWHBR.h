//
//  NSDate+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>

#define LY_SECONDS_PER_DAY      (24 * 60 * 60)

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (AWHBR)

+ (NSString*)GetDateTimeString:(NSDate*)date;

+ (NSString*)GetDateString:(NSDate*)date;

+ (NSString*)GetShortDateString:(NSDate*)date;

+ (NSString*)GetShortTimeString:(NSDate*)date;

+ (NSString*)GetShortDateTimeString:(NSDate*)date;

+ (NSString*)GetLongDateTimeString:(NSDate*)date;

+ (NSString*)getYearMonthString:(NSDate *)date;

+ (NSDate*)GetDateFromDateTimeString:(NSString*)dateTimeString;

+ (NSDate*)GetDateFromDateTimeSecondString:(NSString*)dateTimeString;

+ (NSDate*)GetDateFromService:(NSString*)serviceDate;

+ (NSDate*)GetDateFromDateString:(NSString*)serviceDate;

+ (NSDate *)addDaysFromDate:(NSDate *)date withDay:(int)day;

+ (NSDate*)GetDateWithoutTimeFromDate:(NSDate*)originalDate;

+ (NSString*)getUpperDateTimeString:(NSDate *)date;

//时间戳转换为时间字符串
+(NSString*)stringWithTimeIntervalSince1970:(NSInteger)time;
//时间戳转换为时间字符串 中文
+(NSString*)stringWithTimeChinessIntervalSince1970:(NSInteger)time;
//时间戳转换为时间到秒字符串
+(NSString*)stringWithTimeSecondIntervalSince1970:(NSInteger)time;

@end

NS_ASSUME_NONNULL_END

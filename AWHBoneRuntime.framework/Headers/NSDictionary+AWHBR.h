//
//  NSDictionary+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/7/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (AWHBR)

+ (NSDictionary *)readJson2DicWithFileName:(NSString *)fileName;

/** JSON字符串转解析*/
+ (id)jsonDictFromJsonstring_awhbr:(NSString *)jsonString;

@end

NS_ASSUME_NONNULL_END

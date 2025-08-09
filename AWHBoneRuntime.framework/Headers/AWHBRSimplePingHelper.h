//
//  AWHBRSimplePingHelper.h
//  AWHBoneRuntime
//
//  Created by 王恒 on 2022/10/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRSimplePingHelper : NSObject

+ (void)ping:(NSString*)address target:(id)target sel:(SEL)sel;

@end

NS_ASSUME_NONNULL_END

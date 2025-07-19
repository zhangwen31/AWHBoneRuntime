//
//  AWHBRService.h
//  AWHBoneRuntime
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>
#import <AWHBoneRuntime/AWHBRProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRService : NSObject

/**
 * 注册协议实现类
 * @param protocol  协议
 * @param handlerClass 实现该协议类
 */
+ (BOOL)registerProtocol:(Protocol *)protocol handler:(Class)handlerClass;
/**
 * 查看协议实现类是否注册
 * @param protocol  协议
 */
+ (BOOL)canImplementProtocol:(Protocol *)protocol;

+ (Class)getHandlerClassWithProtocol:(Protocol *)protocol;

@end

NS_ASSUME_NONNULL_END

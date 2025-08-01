//
//  AWHBRProtocol.h
//  AWHBoneRuntime
//
//  Created by 王恒 on 2022/9/2.
//

#import <Foundation/Foundation.h>

@protocol AWHBRShareProtocol <NSObject>

/** 分享三方应用  需要接入方自己实现该功能
 * @param title 标题
 * @param desc 描述
 * @param url 分享链接
 *
 */
- (void)shareTitle:(NSString *)title desc:(NSString *)desc url:(NSString *)url;

/** 分享三方应用  需要接入方自己实现该功能
 * @param text 文本内容
 *
 */
- (void)shareMessageText:(NSString *)text;

@end

//推送协议
@protocol AWHBRPushProtocol <NSObject>

/**
 *  设置关闭推送模式（默认值：NO）针对与个推
 *  需要SDK在线才能调用
 *
 *  @param isValue 消息推送开发，YES.关闭消息推送 NO.开启消息推送
 *
 *  SDK-1.2.1+
 *
 */
- (void)setPushModeForOff:(BOOL)isValue;

@end


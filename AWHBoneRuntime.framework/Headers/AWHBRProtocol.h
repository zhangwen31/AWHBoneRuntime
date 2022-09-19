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

@end


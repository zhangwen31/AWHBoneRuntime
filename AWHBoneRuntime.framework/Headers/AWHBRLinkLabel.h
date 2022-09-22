//
//  AWHBRLinkLabel.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBRLinkLabelClickItemBlock)(id transmitBody);

@class AWHBRLinkLabelClickItem;

@interface AWHBRLinkLabel : UILabel

/**
 *  添加点击事件, block回调
 *
 *  @param text         需要监听点击的事件文字
 *  @param attributeds  文字的属性
 *  @param transmitBody 需要传入Block的参数
 *  @param clickBlock   回调Block 将传入的body传出来
 */
- (void)addClickText:(NSString *)text attributeds:(NSDictionary *)attributeds transmitBody:(id)transmitBody clickItemBlock:(AWHBRLinkLabelClickItemBlock)clickBlock;
/**
 *  图片点击的事件
 *
 *  @param attachmentName 附件名字
 *  @param transmitBody   需要传入Block的参数
 *  @param clickBlock     回调Block 将传入的body传出来
 */
- (void)addClickTextAttachmentName:(NSString *)attachmentName TransmitBody:(id)transmitBody clickItemBlock:(AWHBRLinkLabelClickItemBlock)clickBlock;

@end

@interface AWHBRLinkLabelClickItem :NSObject
/**
 *  文本
 */
@property(nonatomic, copy)NSString *text;
/**
 *  文本对应的范围
 */
@property(nonatomic, assign)NSRange range;
/**
 *  文本对应的尺寸
 */
@property(nonatomic, assign)CGRect textRect;
/**
 *  文本对应的尺寸集合
 */
@property(nonatomic, strong)NSMutableArray *textRects;
/**
 *  需要传参数
 */
@property(nonatomic, strong)id transmitBody;
/**
 *  点击事件
 */
@property(nonatomic, copy)AWHBRLinkLabelClickItemBlock clickBlock;

// 类工厂方法 返回实例
+ (instancetype)itemWithText:(NSString *)string range:(NSRange)range transmitBody:(id)transmitBody;

// 类工厂方法 返回实例
+ (instancetype)itemWithTransmitBody:(id)transmitBody;

@end

@interface AWHBRTextAttachment : NSTextAttachment

@property(nonatomic, copy)NSString *attachmentName;

@end

NS_ASSUME_NONNULL_END

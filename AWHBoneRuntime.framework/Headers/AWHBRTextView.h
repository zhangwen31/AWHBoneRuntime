//
//  AWHBRTextView.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <UIKit/UIKit.h>
#import <AWHBoneRuntime/UIView+AWHBR.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRTextView : UITextView

@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, strong) UIColor *placeholderColor;

@end

NS_ASSUME_NONNULL_END

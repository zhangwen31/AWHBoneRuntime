//
//  AWHBRWeakTimer.h
//  AWHBoneRuntime
//
//  Created by 王恒 on 2022/9/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBRWeakTimer : UIView

+ (NSTimer *)scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                      target:(id)aTarget
                                    selector:(SEL)aSelector
                                    userInfo:(id)userInfo
                                     repeats:(BOOL)yesOrNo;

@end

NS_ASSUME_NONNULL_END

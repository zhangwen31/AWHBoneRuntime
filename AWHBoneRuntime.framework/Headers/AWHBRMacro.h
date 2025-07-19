//
//  AWHBRMacro.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#ifndef AWHBRMacro_h
#define AWHBRMacro_h

// 系统控件默认高度
#define kStatusBarHeight        (20.f)
#define kTopBarHeight           (44.f)
#define kBottomBarHeight        (49.f)
#define kCellDefaultHeight      (44.f)
#define kEnglishKeyboardHeight  (216.f)
#define kChineseKeyboardHeight  (252.f)


//自定义高度
#define kBorderHeight (1.f)
//自定义按钮的边框
#define kButtonBorderHeight (.6f)

// 沙盒路径
#define kPATH_OF_APP_HOME    NSHomeDirectory()
#define kPATH_OF_TEMP        NSTemporaryDirectory()
#define kPATH_OF_DOCUMENT    [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]

// 加载图片
#define kPNGIMAGE(NAME)          [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:@"png"]]
#define kJPGIMAGE(NAME)          [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:@"jpg"]]
#define kIMAGE(NAME, EXT)        [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:(EXT)]]

// 颜色(RGB)
#define kRGBCOLOR(r, g, b)      [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define kRGBACOLOR(r, g, b, a)   [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:(a)]
// 随机颜色
#define kRANDOM_UICOLOR     [UIColor colorWithRed:arc4random_uniform(256) / 255.0 green:arc4random_uniform(256) / 255.0 blue:arc4random_uniform(256) / 255.0 alpha:1]

// block self
#define kBlockWeakObject(o) __typeof(o) __weak
#define kBlockWeakSelf kBlockWeakObject(self)

//提示
#define kShowToast(a)  [self showHint:a]

// 自定义NSLog,在debug模式下打印，在release模式下取消一切NSLog
#ifdef DEBUG
#define kNSLog(FORMAT, ...) fprintf(stderr,"%s:%d\t%s\n",[[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);
#else
#define kNSLog(FORMAT, ...) nil
#endif

#define kWeakSelf(weakSelf)  __weak __typeof(&*self) weakSelf  = self;
#define kStrongSelf(strongSelf)  __strong __typeof(&*self) strongSelf  = weakSelf;
#define kScreenW   ([AWHBRSizeHelper screenWidth])
#define kScreenH   ([AWHBRSizeHelper screenHeight])
#define kThemeColorStr   @"2461F7"
#define kTheme2ColorStr   @"3493E9"
#define kTitleColorStr   @"333333"
#define kSubTitleColorStr   @"666666"
#define kSubTitle9ColorStr   @"999999"
#define kDetailColorStr   @"C2C2C2"
#define kLineColorStr   @"E5E5E5"
#define kLine8ColorStr   @"E8E8E8"
#define kLine12ColorStr   @"CCCCCC"
#define kBackgroundColorStr   @"F5F5F5"
#define kBackground2ColorStr   @"F6F6F6"
#define kBackground3ColorStr   @"DDDDDD"
#define kBlackdColorStr   @"000000"
#define kWhiteColorStr   @"FFFFFF"
#define kAshenColorStr   @"BDDFFF"
#define kRedColorStr   @"FF0000"
#define kShadowColorStr   @"505257"
#define kPlaceHolderColorStr   @"B0B0B0"
#define kNavLowColorStr   @"001FF7"
#define kNavHigColorStr   @"0054F7"
//判断是否是刘海屏
#define kIsBangsScreen ({\
    BOOL isBangsScreen = NO; \
    if (@available(iOS 11.0, *)) { \
    UIWindow *window = [[UIApplication sharedApplication].windows firstObject]; \
    isBangsScreen = window.safeAreaInsets.bottom > 0; \
    } \
    isBangsScreen; \
})
//导航栏+状态栏的高度
#define NAheight [[UIApplication sharedApplication] statusBarFrame].size.height + self.navigationController.navigationBar.frame.size.height

//iPhone X适配
#define IOS11_OR_LATER_SPACE(par)\
({\
float space = 0.0;\
if (@available(iOS 11.0, *))\
space = par;\
(space);\
})

#define AWHBR_TOP_SPACE [AWHBRTools getAppTopSpace] //上边距status值
#define AWHBR_TOP_ACTIVE_SPACE [AWHBRTools getAppTopActiveSpace]  //与其他上边距status差值
#define AWHBR_BOTTOM_SPACE [AWHBRTools getAppTopBottomSpace] //下边距值
//Bundle Id
#define BID [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleIdentifier"]
//手机版本
#define PhoneVersion  [[UIDevice currentDevice] systemVersion]
#define iOS8Later [PhoneVersion integerValue]>7
#define PushInfoPath [kPATH_OF_DOCUMENT stringByAppendingPathComponent:@"pushInfo.plist"]

//沙盒存储操作
#define kUserDefaultObjForKey(key) [[NSUserDefaults standardUserDefaults] objectForKey:key]
#define kUserDefaultSetValueAndKey(value,key) [[NSUserDefaults standardUserDefaults] setObject:value forKey:key]
#define kUserDefaultRemoveObjForKey(key) [[NSUserDefaults standardUserDefaults] removeObjectForKey:key]
#define kUserDefaultSychronize [[NSUserDefaults standardUserDefaults] synchronize]

///判断设备
#define IS_IPHONE_5 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )568 ) < DBL_EPSILON )
#define IS_IPHONE_4S ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )480 ) < DBL_EPSILON )
#define IS_IPHONE_6 ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )667 ) < DBL_EPSILON )
#define IS_IPHONE_6PLUS ( fabs( ( double )[ [ UIScreen mainScreen ] bounds ].size.height - ( double )736 ) < DBL_EPSILON )
#define IS_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define IS_IPHONE_XR ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) : NO)

#define IS_IPHONE_XS_MAX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) : NO)

#define COLOR1    [UIColor colorWithHexString:@"F7E293"]
#define COLOR2    [UIColor colorWithHexString:@"FFAF79"]
#define COLOR3    [UIColor colorWithHexString:@"F66173"]
#define COLOR4    [UIColor colorWithHexString:@"6FA3A9"]
#define COLOR5    [UIColor colorWithHexString:@"90BBC9"]
#define COLOR6    [UIColor colorWithHexString:@"D7B4C1"]
#define COLOR7    [UIColor colorWithHexString:@"6C626D"]
#define COLOR8    [UIColor colorWithHexString:@"A2D8CA"]
#define COLOR9    [UIColor colorWithHexString:@"A8D6CB"]
#define COLOR10   [UIColor colorWithHexString:@"C6E5EA"]
#define COLOR11   [UIColor colorWithHexString:@"7A86C9"]
#define COLOR12   [UIColor colorWithHexString:@"B0D7F6"]
#define COLOR13   [UIColor colorWithHexString:@"C7B5DD"]
#define COLOR14   [UIColor colorWithHexString:@"E3CAE0"]
#define COLOR15   [UIColor colorWithHexString:@"FFB571"]

//主线程异步队列
#define dispatch_main_async_safe(block)\
    if ([NSThread isMainThread]) {\
        block();\
    } else {\
        dispatch_async(dispatch_get_main_queue(), block);\
    }

#define DISPATCH_AFTER_AWHBR(duration,block)     dispatch_after(dispatch_time(DISPATCH_TIME_NOW,(int64_t)(duration * NSEC_PER_SEC)),dispatch_get_main_queue(),block);

#endif /* AWHBRMacro_h */

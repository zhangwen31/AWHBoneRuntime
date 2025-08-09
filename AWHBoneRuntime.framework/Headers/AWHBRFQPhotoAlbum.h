//
//  AWHBRFQPhotoAlbum.h
//  AWHBoneRuntime
//
//  Created by 王恒 on 2023/3/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^AWHBRPhotoBlock)(UIImage *image);

@interface AWHBRFQPhotoAlbum : NSObject

- (void)getPhotoAlbumOrTakeAPhotoWithController:(UIViewController *)Controller
                                   andWithBlock:(AWHBRPhotoBlock)photoBlock;

@end

@interface AWHBRPHALModel : NSObject

@property(nonatomic,assign)BOOL isGranted;

@end

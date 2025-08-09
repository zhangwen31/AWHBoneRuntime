//
//  NSObject+AWHBR.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (AWHBR)
-(void)encodeCoder:(NSCoder *)aCoder;
- (void)initCoder:(NSCoder *)aDecoder;
@end

NS_ASSUME_NONNULL_END

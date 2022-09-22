//
//  AWHBRTableViewDataSource.h
//  AWHBoneRuntime
//
//  Created by GeDaTing on 2022/2/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^AWHBRTableViewCellConfigureBlock)(id cell, id items,id indexPath);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBRTableViewDataSource : NSObject <UITableViewDataSource>

@property(nonatomic, copy) AWHBRTableViewCellConfigureBlock configureCellBlock;/**< block */
- (id)initWithItems:(NSArray *)anItems
     cellIdentifier:(NSString *)aCellIdentifier
 configureCellBlock:(AWHBRTableViewCellConfigureBlock)aConfigureCellBlock;

- (id)itemAtIndexPath:(NSIndexPath *)indexPath;
-(void)reloadDataArray:(NSMutableArray *)dataArray;

@end

NS_ASSUME_NONNULL_END

//
//  BrandCell1.h
//  Tmgou
//
//  Created by qianfeng on 16/9/21.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Brandmodel.h"
@interface BrandCell1 : UITableViewCell
@property (nonatomic,strong) NSArray *DataSource;
@property (nonatomic,copy) void (^blockJumpClick)();
@property (nonatomic,copy) void (^JumpClick)(NSString *BrandId);
@end

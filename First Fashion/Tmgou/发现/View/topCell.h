//
//  topCell.h
//  Tmgou
//
//  Created by qianfeng on 16/9/20.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface topCell : UITableViewCell
@property (nonatomic,strong) NSArray *dataSoucre;
@property (nonatomic,copy) void (^jumpwebViewblock)(NSString *url);

@end

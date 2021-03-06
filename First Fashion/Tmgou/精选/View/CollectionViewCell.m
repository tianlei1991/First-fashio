//
//  CollectionViewCell.m
//  Tmgou
//
//  Created by qianfeng on 16/9/18.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "CollectionViewCell.h"
@interface CollectionViewCell()

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *UrliconImage;

@end
@implementation CollectionViewCell
- (void)setModel:(SelecTionModel *)model{
    CellfiveModel *mode =(CellfiveModel *) model;
    
    [self.UrliconImage sd_setImageWithURL:[NSURL URLWithString:mode.sourceCover] placeholderImage:[UIImage imageNamed:@"1.jpg"]];
    
    self.titleLabel.text  = mode.title;

}
- (void)awakeFromNib {
    [super awakeFromNib];

}

@end

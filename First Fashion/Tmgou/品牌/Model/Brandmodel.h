//
//  Brandmodel.h
//  Tmgou
//
//  Created by qianfeng on 16/9/21.
//  Copyright © 2016年 qianfeng. All rights reserved.
//

#import "JSONModel.h"


//品牌
@interface brandListModel : JSONModel
@property (nonatomic,copy) NSString *brandId;
@property (nonatomic,copy) NSString *logo;
@end
@protocol brandListModel

@end

//cell4动画效果
@interface brandStoryModel : JSONModel
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *summary;
@property (nonatomic,copy) NSString *picture;
@property (nonatomic,copy) NSString *re_id;
@property (nonatomic,copy) NSString *ios_url;
@end
@protocol brandStoryModel;
//两个图片的cell
@interface lookBookModel : JSONModel
@property (nonatomic,copy) NSString *showType;
@property (nonatomic,copy) NSString *jumpType;
@property (nonatomic,copy) NSString *coverImg;
@property (nonatomic,copy) NSString *newsId;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *time;
@property (nonatomic,copy) NSString *newsDetailUrl;//wepview
@end
@protocol lookBookModel;
//最长的那个
@interface interactiveModel : JSONModel
@property (nonatomic,copy) NSString *showType;
@property (nonatomic,copy) NSString *jumpType;
@property (nonatomic,copy) NSString *coverImg;
@property (nonatomic,copy) NSString *newsId;
@property (nonatomic,copy) NSString *title;
@property (nonatomic,copy) NSString *time;
@property (nonatomic,strong) NSArray *interactiveOption;
@property (nonatomic,strong) NSNumber *interactiveUserCount;
@property (nonatomic,copy) NSString *newsDetailUrl;//wepview
@end
@protocol interactiveModel;
@interface Brandmodel : JSONModel
@property (nonatomic,strong) NSArray <brandListModel>  *brandList;
@property (nonatomic,strong) NSArray <brandStoryModel> *brandStory;
@property (nonatomic,strong) NSArray <lookBookModel>   *lookBook;
@property (nonatomic,strong) NSArray <interactiveModel>*interactive;

@end

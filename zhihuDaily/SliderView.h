//
//  ViewController.h
//  zhihuDaily
//
//  Created by Siegrain on 16/3/15.
//  Copyright © 2016年 siegrain.zhihuDaily. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SliderView;

@protocol SliderViewDataSource
@required
/**
 *  指定Slider的项目数
 *
 *  @return <#return value description#>
 */
- (NSUInteger)numberOfItemsInSliderView;
/**
 *  指定索引位置的图片
 *
 *  @param index <#index description#>
 *
 *  @return <#return value description#>
 */
- (UIImage *)imageForSliderAtIndex:(NSInteger)index;

@optional
/**
 *  指定索引位置的内容
 *
 *  @param index <#index description#>
 *
 *  @return <#return value description#>
 */
- (NSString *)contentForSliderAtIndex:(NSInteger)index;
/**
 *  指定索引位置的事件
 *
 *  @param index <#index description#>
 */
- (void)touchUpForSliderAtIndex:(NSInteger)index;
@end

@interface SliderView : UIView
@property(weak, nonatomic) id<SliderViewDataSource> dataSource;

@end

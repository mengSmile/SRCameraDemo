//
//  LBrowseView.h
//  LSerialTakeCamera
//
//  Created by 李姝睿 on 22/1/16.
//  Copyright © 2016年 李姝睿. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LBrowseView : UIView<UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

- (id)initWithImagesArray:(NSArray *)imagesArray currentIndex:(NSInteger)currentIndex;

@end

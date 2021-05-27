//
//  PictureClick.h
//  ProjectFramework
//
//  Created by Jerry on 16/7/26.
//  Copyright © 2016年 Jonny. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PictureClick : NSObject

+ (PictureClick *)sharePicture;

- (void)handlePicture:(NSArray *)imageNameArray withIndex:(int)index;

@end

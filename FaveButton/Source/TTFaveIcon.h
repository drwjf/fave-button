//
//  TTFaveIcon.h
//  FaveButton
//
//  Created by yitailong on 16/8/8.
//  Copyright © 2016年 yitailong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TTEasing.h"

@interface TTFaveIcon : UIView

+ (TTFaveIcon *)createFaveIcon:(UIView *)onView icon:(UIImage *)icon color:(UIColor *)color;
- (void)animateSelect:(BOOL)isSelect fillColor:(UIColor *)fillColor duration:(NSTimeInterval )duration delay:(NSTimeInterval )delay;

@end

//
//  HCMedallionView.h
//  HCMedallionView
//
//  Created by Neil Burchfield on 07/23/13.
//  Copyright (c) 2012 - 2013 HCRUB. All rights reserved.
//
//  For the full copyright and license information, please view the LICENSE
//  file that was distributed with this source code.
//

#import <UIKit/UIKit.h>

@interface HCMedallionView : UIView

@property (nonatomic, strong) UIImage *image;

@property (nonatomic, strong) UIColor *borderColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGFloat borderWidth  UI_APPEARANCE_SELECTOR;
@property (nonatomic, strong) UIColor *shadowColor UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGSize shadowOffset  UI_APPEARANCE_SELECTOR;
@property (nonatomic, assign) CGFloat shadowBlur   UI_APPEARANCE_SELECTOR;

@end

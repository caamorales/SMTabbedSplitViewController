//
//  SMTabBarItemCell.h
//  SMSplitViewController
//
//  Created by Sergey Marchukov on 16.02.14.
//  Copyright (c) 2014 Sergey Marchukov. All rights reserved.
//
//  This content is released under the ( http://opensource.org/licenses/MIT ) MIT License.
//

#import <UIKit/UIKit.h>
#import "SMTabBarItem.h"

typedef enum {
    
    SMTabBarItemCellTab,
    SMTabBarItemCellAction
} SMTabBarItemCellType;

@interface SMTabBarItemCell : UITableViewCell
{
    UIView *_topSeparator;
    UIView *_separator;
    UIView *_viewBackground;
}

@property (nonatomic, assign) UILabel *titleLabel;
@property (nonatomic, assign) UIImageView *iconView;
@property (nonatomic, assign) UIViewController *viewController;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic, retain) UIColor *selectedColor;
@property (nonatomic, copy) ActionBlock actionBlock;
@property (nonatomic) SMTabBarItemCellType cellType;
@property (nonatomic) BOOL isFirstCell;

@end
//
//  AreaCodeViewController.h
//  AreaCodeViewController
//
//  Created by everettjf on 16/6/8.
//  Copyright © 2016年 everettjf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EVTPhoneAreaCodeViewControllerTheme : NSObject
@property (strong,nonatomic) UIColor *backgroundColor;

@property (strong,nonatomic) UIColor *sectionBackgroundColor;
@property (strong,nonatomic) UIColor *sectionForegroundColor;
@property (assign,nonatomic) CGFloat sectionHeight;
@property (strong,nonatomic) UIFont *sectionFont;

@property (strong,nonatomic) UIColor *sectionIndexBackgroundColor;
@property (strong,nonatomic) UIColor *sectionIndexColor;

@property (strong,nonatomic) UIColor *tableViewBackgroundColor;
@property (strong,nonatomic) UIColor *tableViewSeparatorColor;

@property (copy,nonatomic) NSString *title;
@property (copy,nonatomic) NSString *titleEn;
@property (copy,nonatomic) NSString *searchBarPlaceHolder;
@property (copy,nonatomic) NSString *searchBarPlaceHolderEn;

@property (strong,nonatomic) UIColor *searchBarTintColor;
@property (strong,nonatomic) UIColor *searchBarBackgroundColor;

@end

@interface EVTPhoneAreaCodeViewController : UIViewController
@property (strong,nonatomic) EVTPhoneAreaCodeViewControllerTheme *theme;
@property (assign,nonatomic) BOOL localeEn;
@property (copy,nonatomic) void(^completion)(NSString *name, NSString *code);
@end

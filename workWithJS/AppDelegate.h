//
//  AppDelegate.h
//  workWithJS
//
//  Created by Oleksandr Isaiev on 04.09.14.
//  Copyright (c) 2014 None. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ViewController;
@class SecondViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) ViewController * viewController;
@property (strong, nonatomic) SecondViewController * secondViewController;
@property (strong, nonatomic) UITabBarController * tabBarController;
@property (strong, nonatomic) UINavigationController * navigationController;

@end

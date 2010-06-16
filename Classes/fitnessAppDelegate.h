//
//  fitnessAppDelegate.h
//  fitness
//
//  Created by Prabin Deka on 16/06/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class fitnessViewController;

@interface fitnessAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    fitnessViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet fitnessViewController *viewController;

@end


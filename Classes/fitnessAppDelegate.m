//
//  fitnessAppDelegate.m
//  fitness
//
//  Created by Prabin Deka on 16/06/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import "fitnessAppDelegate.h"
#import "fitnessViewController.h"

@implementation fitnessAppDelegate

@synthesize window;
@synthesize viewController;


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];
	
	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end

//
//  MapQuakesDTFAppDelegate.h
//  MapQuakesDTF
//
//  Created by BestBuy on 10/5/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MapQuakesDTFViewController;

@interface MapQuakesDTFAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MapQuakesDTFViewController *viewController;

@end

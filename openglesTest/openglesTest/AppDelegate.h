//
//  AppDelegate.h
//  openglesTest
//
//  Created by bzx on 4/13/15.
//  Copyright (c) 2015 bzx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    OpenGLView* _glView;
}

@property (strong, nonatomic) IBOutlet UIWindow *window;
@property (strong, retain) IBOutlet OpenGLView *glView;

@end

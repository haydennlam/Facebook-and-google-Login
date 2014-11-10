//
//  ViewController.h
//  BarreForestGuide
//
//  Created by Everyone Else on 11/8/14.
//  Copyright (c) 2014 BarreTown. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>

@interface ViewController : UIViewController <FBFriendPickerDelegate>
@property (weak, nonatomic) IBOutlet FBLoginView *loginView;
@end

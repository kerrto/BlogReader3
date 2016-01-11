//
//  WebViewController.h
//  BlogReader3
//
//  Created by Kerry Toonen on 2016-01-09.
//  Copyright © 2016 Kerry Toonen. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;

@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end

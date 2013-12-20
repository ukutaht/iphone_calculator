//
//  CalcViewController.h
//  Calculator
//
//  Created by Uku Täht on 12/20/13.
//  Copyright (c) 2013 Uku Täht. All rights reserved.
//

#import <UIKit/UIKit.h>

int Method;
int Select;
float RunningTotal;

@interface CalcViewController : UIViewController
{
    IBOutlet UILabel *Screen;
}

-(IBAction)Number1:(id)sender;
-(IBAction)Number2:(id)sender;
-(IBAction)Number3:(id)sender;
-(IBAction)Number4:(id)sender;
-(IBAction)Number5:(id)sender;
-(IBAction)Number6:(id)sender;
-(IBAction)Number7:(id)sender;
-(IBAction)Number8:(id)sender;
-(IBAction)Number9:(id)sender;
-(IBAction)Number0:(id)sender;

-(IBAction)Times:(id)sender;
-(IBAction)Divide:(id)sender;
-(IBAction)Subract:(id)sender;
-(IBAction)Add:(id)sender;
-(IBAction)Equals:(id)sender;
-(IBAction)Clear:(id)sender;

@end

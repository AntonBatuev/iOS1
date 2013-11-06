//
//  VSController.m
//  iOS1
//
//  Created by Admin on 06.11.13.
//  Copyright (c) 2013 Admin. All rights reserved.
//

#import "VSController.h"

@implementation VSController

-(IBAction)buttonPressed:(id)sender
{
    _timesOfPresses++;
    _label.text = [NSString stringWithFormat:@"%u", _timesOfPresses];
}

@end

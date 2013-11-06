//
//  VSController.m
//  iOS1
//
//  Created by Admin on 06.11.13.
//  Copyright (c) 2013 Admin. All rights reserved.
//

#import "VSController.h"

@implementation VSController

-(IBAction)sig_pressed:(id)sender
{
    _count_taped++;
    _label.text = [NSString stringWithFormat:@"%u", _count_taped];
}

@end

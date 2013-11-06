//
//  VSController.h
//  iOS1
//
//  Created by Admin on 06.11.13.
//  Copyright (c) 2013 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VSController : NSObject
{
    NSUInteger _count_pres;
    IBOutlet UILabel *_label;
}

-(IBAction)sig_pressed:(id)sender;

@end

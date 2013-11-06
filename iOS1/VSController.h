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
    NSUInteger _timesOfPresses;
    IBOutlet UILabel *_label;
}

-(IBAction)buttonPressed:(id)sender;

@end

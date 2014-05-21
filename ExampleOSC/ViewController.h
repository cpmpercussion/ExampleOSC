//
//  ViewController.h
//  ExampleOSC
//
//  Created by Charles Martin on 21/05/2014.
//  Copyright (c) 2014 Charles Martin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "F53OSC.h"

@interface ViewController : UIViewController <F53OSCPacketDestination>

-(void)takeMessage:(F53OSCMessage *)message;

@end

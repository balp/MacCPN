//
//  MacCPNAppDelegate.h
//  MacCPN
//
//  Created by Anders Arnholm on 2011-01-24.
//  Copyright 2011 Mecel AB. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MacCPNAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
}

@property (assign) IBOutlet NSWindow *window;

@end

//
//  ChartView.m
//  MacCPN
//
//  Created by Anders Arnholm on 2011-01-25.
//  Copyright 2011 Mecel AB. All rights reserved.
//

#import "ChartView.h"


@implementation ChartView

- (id)initWithFrame:(NSRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code here.
    }
    return self;
}

- (void)drawRect:(NSRect)dirtyRect {
	
	// Draw the charts not just random.
    CGContextRef myContext = [[NSGraphicsContext // 1
							   currentContext]graphicsPort];
	// ********** Your drawing code here ********** // 2
    CGContextSetRGBFillColor (myContext, 1, 0, 0, 1);// 3
    CGContextFillRect (myContext, CGRectMake (0, 0, 200, 100 ));// 4
    CGContextSetRGBFillColor (myContext, 0, 0, 1, .5);// 5
    CGContextFillRect (myContext, CGRectMake (0, 0, 100, 200));

}

@end

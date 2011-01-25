//
//  boatLocation.h
//  MacCPN
//
//  Created by Anders Arnholm on 2011-01-24.
//  Copyright 2011 Mecel AB. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface boatLocation : NSObject {
	double longitude;
	double lattitude;
	double speed;
	double course;
}

@property(readwrite) double longitude, lattitude, speed, course;

@end

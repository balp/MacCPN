//
//  ChartController.h
//  MacCPN
//
//  Created by Anders Arnholm on 2011-01-25.
//  Copyright 2011. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface ChartController : NSObject {
	IBOutlet NSToolbarItem *followBoat;
	IBOutlet ChartView *chartView;
}

- (IBAction)zoomIn:(id)sender;
- (IBAction)zoomOut:(id)sender;
- (IBAction)scaleDown:(id)sender;
- (IBAction)scaleUp:(id)sender;
- (IBAction)createRoute:(id)sender;
- (IBAction)followBoat:(id)sender;
- (IBAction)showLabels:(id)sender;
- (IBAction)toggleAIS:(id)sender;
- (IBAction)toggleCurrents:(id)sender;
- (IBAction)toggleTides:(id)sender;
- (IBAction)tracksManager:(id)sender;
- (IBAction)toggleTracks:(id)sender;
- (IBAction)changeBrightness:(id)sender;
- (IBAction)activateMOB:(id)sender;
- (IBAction)viewGRIB:(id)sender;



@end

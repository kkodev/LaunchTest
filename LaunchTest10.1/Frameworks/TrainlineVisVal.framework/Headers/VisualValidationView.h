//
//  VisualValidationView.h
//  RNGTest
//
//  Created by Alan Pearson on 24/06/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import UIKit;

@interface VisualValidationView : UIView

- (void)setSeedData:(NSData *)seedData;

- (void)updateColoursForTest:(BOOL)test;

@end

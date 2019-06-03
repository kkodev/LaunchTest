//
//  X931RNG.h
//  RNGTest
//
//  Created by Alan Pearson on 29/05/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

@interface X931RNG : NSObject

- (void)reset;
- (int)nextRand;
- (void)stirRand:(Byte*)bytes count:(NSUInteger)count;

@end

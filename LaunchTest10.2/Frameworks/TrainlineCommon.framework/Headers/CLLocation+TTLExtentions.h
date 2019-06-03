//
//  CLLocation+TTLExtentions.h
//  Trainline
//
//  Created by Daniel Phillips on 03/05/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import CoreLocation;

@interface CLLocation (TTLExtentions)

- (BOOL)isEqualToLocation:(CLLocation *)location;
- (BOOL)isLocationTimestampExpiredWithTimeFromNow:(NSTimeInterval)seconds;

@end

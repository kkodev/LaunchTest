//
//  JSSLeg+Formatters.h
//  Trainline
//
//  Created by Luke De Feo on 04/02/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import JourneySearch;

@interface JSSLeg (Formatters)

- (NSString *)finalDestinationsString;

- (NSString *)departureStopRealtimeFullDescription:(BOOL)fullDescription;

- (NSString *)arrivalStopRealtimeFullDescription:(BOOL)fullDescription;

@end

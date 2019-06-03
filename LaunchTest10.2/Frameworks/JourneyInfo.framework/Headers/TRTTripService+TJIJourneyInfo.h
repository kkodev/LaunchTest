//
//  TRTTripService+TTLJourneyInfo.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 22/04/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import RealTime;
@import JourneySearch;

@interface TRTTripService (TJIJourneyInfo)

- (TRTStop *)findOriginStopForJourneyLeg:(JSSLeg *)journeyLeg;
- (TRTStop *)findDestinationStopForJourneyLeg:(JSSLeg *)journeyLeg;

//helper method to help you find the correct leg for the users journey in a split or join scenario
- (NSArray *)legForStop:(TRTStop *)stop;

//helper method to help you find the other leg in a split or journey scenario, does not apply for normal journeys
- (NSArray *)alternateLegForStop:(TRTStop *)stop;

- (BOOL)trainPastSplittingStation;

@end

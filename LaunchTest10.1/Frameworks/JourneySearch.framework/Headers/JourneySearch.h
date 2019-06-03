//
//  Journey Search.h
//  Journey Search
//
//  Created by Grzegorz Kozłowski on 15/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT double JourneySearchVersionNumber;
FOUNDATION_EXPORT const unsigned char JourneySearchVersionString[];

#import <JourneySearch/JSSJourney.h>
#import <JourneySearch/JSSLeg.h>
#import <JourneySearch/JSSLegStop.h>
#import <JourneySearch/JSSJourneyPlan.h>
#import <JourneySearch/JSSTravelOption.h>
#import <JourneySearch/JSSDeliveryOption.h>
#import <JourneySearch/JSSFare.h>
#import <JourneySearch/JSSTicket.h>
#import <JourneySearch/JSSTicketValidity.h>
#import <JourneySearch/JSSTravelTime.h>
#import <JourneySearch/JSSOvertakenInfo.h>

#import <JourneySearch/JSSJourneySearchParams.h>
#import <JourneySearch/JSSPassenger.h>
#import <JourneySearch/JSSRailcard.h>
#import <JourneySearch/JSSSelectedRailcard.h>
#import <JourneySearch/JSSLegTransformer.h>
#import <JourneySearch/JSSJourneyTransformer.h>
#import <JourneySearch/JSSJourneySearchService.h>
#import <JourneySearch/JSSNextAvailableJourneysParams.h>
#import <JourneySearch/JSSJourneySearchServiceProtocol.h>
#import <JourneySearch/JSSNextAvailableLegDetails.h>
#import <JourneySearch/JSSNextAvailableFareDetails.h>
#import <JourneySearch/JSSNextAvailableSearchDetails.h>
#import <JourneySearch/JSSNextAvailableJourneyResponseTransformer.h>
#import <JourneySearch/JSSNextAvailableJourneysParamsTransformer.h>
#import <JourneySearch/JSSJourneySearchServiceErrorTransformer.h>
#import <JourneySearch/JSSNextAvailableJourneysResponse.h>

//
//  JIAnalytics.h
//  JourneyInfo
//
//  Created by Mark Danks on 11/11/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import BusyBot;
@import JourneySearch;

@protocol TJIAnalytics <NSObject>

+ (void)trackEvent:(NSString *)event pageName:(NSString *)pageName;

- (void)trackLiveTrainProgressScreenWithJourney:(JSSJourney *)journey
                  railReplacementMessagingShown:(BOOL)railReplacementMessagingShown
                         disruptionMessageShown:(BOOL)disruptionMessageShown;

- (void)trackLiveTrainProgressEventWithJourney:(JSSJourney *)journey
                 railReplacementMessagingShown:(BOOL)railReplacementMessagingShown
                        disruptionMessageShown:(BOOL)disruptionMessageShown;

- (void)trackBusyBotDetailsTappedEventWithPageName:(NSString *)pageName;

- (void)trackBusyBotEmptySeatsResponseEventWithPageName:(NSString *)pageName overcrowdingLevel:(TBBOvercrowdingLevel)overcrowdingLevel;

- (void)trackBusyBotShownEventWithPageName:(NSString *)pageName;

- (void)trackBusyBotTrainLocationEventWithPageName:(NSString *)pageName carriagePosition:(TBBCarriagePosition)carriagePosition;

@end

//
//  JSSNextAvailableSearchDetails.h
//  thetrainline
//
//  Created by Luca Torella on 22/07/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class JSSTravelTime;

#import "JSSJourneySearchParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface JSSNextAvailableSearchDetails : NSObject <NSCopying>

@property (nonatomic, readonly) NSUInteger adultsTravelling;
@property (nonatomic, readonly) NSUInteger childrenTravelling;
@property (nonatomic, readonly) NSArray *railCards; // <JSSSelectedRailcard>
@property (nonatomic, readonly) JSSSearchType journeyType;
@property (nonatomic, readonly) TLCJourneyDirection journeyDirection;
@property (nonatomic, readonly) JSSTravelTime *travelTime;
@property (nonatomic, readonly) TLCStation *originStation;
@property (nonatomic, readonly) TLCStation *destinationStation;

@property (nonatomic, assign) BOOL queryCancelledTrains;

- (instancetype)initWithAdultsTravelling:(NSUInteger)adultsTravelling
                      childrenTravelling:(NSUInteger)childrenTravelling
                               railCards:(NSArray *)railCards
                             journeyType:(JSSSearchType)journeyType
                        journeyDirection:(TLCJourneyDirection)journeyDirection
                              travelTime:(JSSTravelTime *)travelTime
                           originStation:(TLCStation *)originStation
                      destinationStation:(TLCStation *)destinationStation;

@end

NS_ASSUME_NONNULL_END

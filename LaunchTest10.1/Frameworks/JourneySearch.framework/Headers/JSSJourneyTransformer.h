//
//  JSSJourneyTransformer.h
//  thetrainline
//
//  Created by Giuliano Galea on 24/02/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class JSSJourneyPlan, JSSLegTransformer;

@interface JSSJourneyTransformer : NSObject

- (instancetype)initWithStationLoader:(id<TLCStationLoader>)stationLoader
                       legTransformer:(JSSLegTransformer *)legTransformer;

- (JSSJourneyPlan *)transform:(NSDictionary *)journeyDict;

@end

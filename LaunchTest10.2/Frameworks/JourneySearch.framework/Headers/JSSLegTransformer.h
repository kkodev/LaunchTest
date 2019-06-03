//
//  JSSLegTransformer.h
//  thetrainline
//
//  Created by Giuliano Galea on 24/02/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class JSSLeg;

@interface JSSLegTransformer : NSObject

- (instancetype)initWithStationLoader:(id<TLCStationLoader>)stationLoader;

- (JSSLeg *)transform:(NSDictionary *)dict;

@end

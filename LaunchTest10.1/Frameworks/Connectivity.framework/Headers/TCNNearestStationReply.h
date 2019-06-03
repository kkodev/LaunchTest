//
//  TCNNearestStationReply.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 04/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import CoreLocation;
@import TrainlineCommon;

#import "TCNReply.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCNNearestStationReply : TCNReply

@property (nonatomic, readonly, nullable) TLCStation *station;
@property (nonatomic, readonly) CLLocationDistance distance;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithStation:(nullable TLCStation *)station distance:(CLLocationDistance)distance NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

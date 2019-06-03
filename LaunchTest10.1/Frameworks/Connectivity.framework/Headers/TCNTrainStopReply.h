//
//  TCNTrainStopReply.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 08/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

#import "TCNReply.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCNTrainStopReply : TCNReply

@property (nonatomic, readonly, nullable) NSString *stationName;
@property (nonatomic, readonly, nullable) NSString *platform;
@property (nonatomic, readonly, nullable) NSString *scheduledTime;
@property (nonatomic, readonly, nullable) NSString *projectedTime;
@property (nonatomic, readonly) BOOL isRunningLate;
@property (nonatomic, readonly) BOOL isTrainAtStation;
@property (nonatomic, readonly) BOOL isTrainAtOrigin;
@property (nonatomic, readonly) BOOL isTrainAtDestination;
@property (nonatomic, readonly) BOOL isNextArrivalStation;
@property (nonatomic, readonly) BOOL hasDeparted;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithStationName:(nullable NSString *)stationName platform:(nullable NSString *)platform scheduledTime:(nullable NSString *)scheduledTime projectedTime:(nullable NSString *)projectedTime runningLate:(BOOL)runningLate trainAtStation:(BOOL)trainAtStation trainAtOrigin:(BOOL)trainAtOrigin trainAtDestination:(BOOL)trainAtDestination nextArrivalStation:(BOOL)nextArrivalStation departed:(BOOL)departed NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

//
//  TCNDepartingTrainReply.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 08/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

#import "TCNReply.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCNDepartingTrainReply : TCNReply

@property (nonatomic, readonly, nullable) NSString *trainIdentifier;
@property (nonatomic, readonly, nullable) NSString *platform;
@property (nonatomic, readonly, nullable) NSDate *departureTime;
@property (nonatomic, readonly, nullable) NSDate *throughStationTime;
@property (nonatomic, readonly, nullable) NSString *timeProjectionType;
@property (nonatomic, readonly) BOOL departed;
@property (nonatomic, readonly) BOOL cancelled;
@property (nonatomic, readonly) BOOL cancelledThroughStation;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithTrainIdentifier:(nullable NSString *)trainIdentifier platform:(nullable NSString *)platform departureTime:(nullable NSDate *)departureTime throughStationTime:(nullable NSDate *)throughStationTime timeProjectionType:(nullable NSString *)timeProjectionType departed:(BOOL)departed cancelled:(BOOL)cancelled cancelledThroughStation:(BOOL)cancelledThroughStation NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

//
//  JSSNextAvailableLegDetails.h
//  thetrainline
//
//  Created by Luca Torella on 22/07/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface JSSNextAvailableLegDetails : NSObject

@property (nonatomic, readonly, copy) NSString *originStationCode;
@property (nonatomic, readonly, copy) NSString *destinationStationCode;
@property (nonatomic, readonly, copy) NSString *retailTrainNumber;
@property (nonatomic, readonly, copy) NSString *trainUId;
@property (nonatomic, readonly, copy) NSDate *arrivalTime;
@property (nonatomic, readonly, copy) NSDate *departureTime;

- (instancetype)initWithOriginStationCode:(NSString *)originStationCode
                   destinationStationCode:(NSString *)destinationStationCode
                        retailTrainNumber:(NSString *)retailTrainNumber
                                 trainUId:(NSString *)trainUId
                              arrivalTime:(NSDate *)arrivalTime
                            departureTime:(NSDate *)departureTime;

@end

NS_ASSUME_NONNULL_END

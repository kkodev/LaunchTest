//
//  JSSLegStop.h
//  thetrainline
//
//  Created by Daniel Phillips on 06/03/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

NS_ASSUME_NONNULL_BEGIN

@interface JSSLegStop : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, strong) TLCStation *station;
@property (nonatomic, strong) NSDate *scheduledDate;
@property (nonatomic, strong, nullable) NSDate *estimatedDate;
@property (nonatomic, assign) TLCRealTimeStatus status;
@property (nonatomic, assign) TLCPlatformStatus platformStatus;
@property (nonatomic, copy, nullable) NSString *platform;

- (instancetype)initWithStation:(TLCStation *)station
         scheduledDepartureDate:(NSDate *)date;

- (instancetype)initWithStation:(TLCStation *)station
         scheduledDepartureDate:(NSDate *)date
         estimatedDepartureDate:(NSDate * _Nullable)estimatedDate
                       platform:(NSString * _Nullable)platform
                         status:(TLCRealTimeStatus)status
                 platformStatus:(TLCPlatformStatus)platformStatus;

@end

NS_ASSUME_NONNULL_END

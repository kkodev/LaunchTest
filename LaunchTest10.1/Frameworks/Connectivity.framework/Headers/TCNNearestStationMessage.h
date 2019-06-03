//
//  TCNNearestStationMessage.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 07/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import CoreLocation;

#import "TCNMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCNNearestStationMessage : TCNMessage

@property (nonatomic, readonly) CLLocation *location;

- (instancetype)initWithUserInfo:(nullable NSDictionary<NSString *, id> *)userInfo NS_UNAVAILABLE;
- (instancetype)initWithLocation:(CLLocation *)location NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

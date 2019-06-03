//
//  TTLStationFacilityOpeningTime.h
//  Trainline
//
//  Created by akshayn on 11/08/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@interface TTLStationFacilityOpeningTime : NSObject

@property (nonatomic, readonly) NSString *dayString;
@property (nonatomic, readonly) NSString *time;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithDay:(NSString *)day time:(NSString *)time NS_DESIGNATED_INITIALIZER;

@end

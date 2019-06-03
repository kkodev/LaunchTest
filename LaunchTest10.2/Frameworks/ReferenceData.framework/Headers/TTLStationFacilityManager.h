//
//  TTLStationFacility.h
//  Trainline
//
//  Created by akshayn on 10/08/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@class TTLStationFacility;
@class TTLStationFacilityMapper;

@interface TTLStationFacilityManager : NSObject

// TODO: Remove singleton from here and cash Data in coreData. Probably should be changed with Station list.

+ (instancetype)sharedInstance;

@property(nonatomic, readonly) NSArray *stationFacilities;

- (instancetype)initWithStationFacilityMapper:(TTLStationFacilityMapper *)stationFacilityMapper;

- (TTLStationFacility *)stationFacilityForCrsCode:(NSString *)crsCode;

@end

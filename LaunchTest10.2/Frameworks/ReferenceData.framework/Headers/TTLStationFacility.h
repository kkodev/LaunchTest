//
//  TTLStationFacility.h
//  Trainline
//
//  Created by akshayn on 11/08/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@interface TTLStationFacility : NSObject

@property (nonatomic, readonly) NSString *crsCode;
@property (nonatomic, readonly) NSString *travelCardZone;
@property (nonatomic, readonly) NSArray *openingTimes;
@property (nonatomic, readonly) NSArray *fares;
@property (nonatomic, readonly) NSArray *accessibility;
@property (nonatomic, readonly) NSArray *facilities;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCrsCode:(NSString *)crsCode travelCardZone:(NSString *)travelCardZone openingTimes:(NSArray *)openingTimes fares:(NSArray *)fares accessibility:(NSArray *)accessibility facilities:(NSArray*)facilities NS_DESIGNATED_INITIALIZER;

@end

//
//  TTLStationFacilityItem.h
//  Trainline
//
//  Created by akshayn on 11/08/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@interface TTLStationFacilityItem : NSObject

@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSString *itemType;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithItemDescription:(NSString *)itemDescription itemType:(NSString *)itemType NS_DESIGNATED_INITIALIZER;

@end

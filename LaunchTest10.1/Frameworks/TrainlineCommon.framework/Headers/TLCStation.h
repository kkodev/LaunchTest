//
//  TLCStation.h
//  thetrainline
//
//  Created by Andy Bettis on 09/11/2012.
//  Copyright (c) 2012 Trapeze Group (UK). All rights reserved.
//

@import Foundation;
@import CoreLocation;

NS_ASSUME_NONNULL_BEGIN

@interface TLCStation : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly, nullable) NSString *crsCode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly, nullable) CLLocation *location;
@property (nonatomic, readonly) BOOL hasKiosk;
@property (nonatomic, readonly) BOOL isGroupStation;
@property (nonatomic, readonly) BOOL isRailStation;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCrsCode:(nullable NSString *)crsCode
                           name:(nullable NSString *)name
                       latitude:(CLLocationDegrees)latitude
                      longitude:(CLLocationDegrees)longitude
                       hasKiosk:(BOOL)hasKiosk
                 isGroupStation:(BOOL)isGroupStation
                   isSearchable:(BOOL)isSearchable NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithCrsCode:(NSString *)crsCode;

- (BOOL)isEqualToStation:(TLCStation *)station;

@end

NS_ASSUME_NONNULL_END

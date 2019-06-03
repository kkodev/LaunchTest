//
//  JSSFare.h
//  thetrainline
//
//  Created by Andy Bettis on 06/12/2012.
//  Copyright (c) 2012 Trapeze Group (UK). All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

#define kJourneyFare_defaultType	@"Full Fare"

typedef NS_ENUM(NSUInteger, JourneyFarePassengerType) {
    JourneyFarePassengerTypeFullAdult        = 0,
    JourneyFarePassengerTypeFullChild        = 1,
    JourneyFarePassengerTypeDiscountedAdult  = 2,
    JourneyFarePassengerTypeDiscountedChild  = 3
};

@interface JSSFare : NSObject<NSSecureCoding>

@property NSInteger count;
@property TLCCurrency fare;
@property BOOL isChild;
@property (nonatomic, readonly) BOOL isRailcardFare;
@property (nonatomic, readonly) JourneyFarePassengerType passengerType;
@property (nonatomic,strong) NSString* type;

- (instancetype)initWithFare:(TLCCurrency)fare count:(NSInteger)count isChild:(BOOL)isChild type:(NSString *)type;

@end

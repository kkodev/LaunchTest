//
//  JSSPassenger.h
//  Trainline
//
//  Created by Andrey Kozlov on 16/10/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@interface JSSPassenger : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic, readonly) NSInteger age;

+ (instancetype)passengerWithAge:(NSInteger)age;

@end

@interface JSSPassenger (UKPassengers)

+ (instancetype)UKAdultPassenger;
+ (instancetype)UKChildPassenger;

- (BOOL)isUKAdult;
- (BOOL)isUKChild;
- (BOOL)isUnder5;

@end

@interface NSArray (Passengers)

- (NSUInteger)numberOfPassengersSameAs:(JSSPassenger *)samplePassenger;

@end

@interface NSArray (UKPassengers)

- (NSUInteger)numberOfUKAdults;
- (NSUInteger)numberOfUKChildren;

@end

@interface JSSPassenger (EuroPassengers)

+ (instancetype)EuroAdultPassenger;
+ (instancetype)EuroChildPassenger;
+ (instancetype)EuroSeniorPassenger;
+ (instancetype)EuroYouthPassenger;

@end

@interface NSArray (EuroPassengers)

- (NSUInteger)numberOfEuroAdults;
- (NSUInteger)numberOfEuroChildren;
- (NSUInteger)numberOfEuroSeniors;
- (NSUInteger)numberOfEuroYouths;

@end

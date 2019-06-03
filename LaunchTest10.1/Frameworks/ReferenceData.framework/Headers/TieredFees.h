//
//  TieredFees.h
//  Trainline
//
//  Created by Andy Bettis on 09/10/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class Fee;

@interface TieredFees : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSDate *effectiveDate;
@property (nonatomic, readonly) NSMutableDictionary *cardFees;	// Key is card type, value is NSMutableArray of Fee objects in threshold order

- (instancetype)initWithDate:(NSDate *)date;

+ (TieredFees *)tieredFeesWithDate:(NSDate *)date;

- (NSArray *)bookingFees;
- (void)addFee:(Fee *)fee cardType:(NSString *)cardType;
- (TLCCurrency)feeForPrice:(TLCCurrency)price cardType:(NSString *)cardType;

@end

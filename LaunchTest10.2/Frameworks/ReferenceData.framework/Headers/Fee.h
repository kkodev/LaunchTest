//
//  Fee.h
//  Trainline
//
//  Created by Andy Bettis on 09/10/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

@import TrainlineCommon;

@interface Fee : NSObject <NSSecureCoding>

@property (nonatomic, readonly) TLCCurrency amount;
@property (nonatomic, readonly) BOOL percent;
@property (nonatomic, readonly) TLCCurrency threshold;
@property (nonatomic) TLCCurrency nextThreshold;

- (instancetype)initWithAmount:(TLCCurrency)amount percent:(BOOL)percent threshold:(TLCCurrency)threshold;

+ (Fee *)feeWithAmount:(TLCCurrency)amount percent:(BOOL)percent threshold:(TLCCurrency)threshold;

- (TLCCurrency)feeForPrice:(TLCCurrency)price;

@end

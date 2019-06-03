//
//  VisValSeed.h
//  TTLSeedLoader
//
//  Created by Alan Pearson on 12/07/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

@interface VisValSeed : NSObject <NSSecureCoding>

@property (nonatomic) NSDate *validFromDate;
@property (nonatomic) NSDate *validToDate;
@property (nonatomic) NSData *seedData;

- (instancetype)initWithFromDate:(NSDate *)fromDate toDate:(NSDate *)toDate seedData:(NSData *)data;

- (BOOL)seedIsValidForDate:(NSDate *)dateToCheck;

@end

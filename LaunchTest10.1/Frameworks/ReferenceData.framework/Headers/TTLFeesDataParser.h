//
//  TTLFeesDataParser.h
//  Trainline
//
//  Created by akshayn on 23/01/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@interface TTLFeesDataParser : NSObject

- (NSDictionary *)parsePaymentsFeesJSON:(NSArray *)json;
- (NSDictionary *)parseBookingFeeJSON:(NSArray *)json;

@end

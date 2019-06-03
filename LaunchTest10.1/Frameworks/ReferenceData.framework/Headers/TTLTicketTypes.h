//
//  TTLTicketTypes.h
//  Trainline
//
//  Created by Andy Bettis on 22/08/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;
@import JourneySearch;

extern const NSInteger TTLTicketValidityTypeSpecifiedTrain; // this isnt in the offical response but it used for advanced tickets to separate them from flexible tickets in this structure (bit of a hack)

@interface TTLTicketTypes : NSObject

+ (BOOL)ticketTFLAvailableForTicketType:(nonnull NSString *)type;
+ (nullable NSString *)ticketTitleForTicketType:(nonnull NSString *)type;
+ (nullable NSString *)ticketDescriptionForTicketType:(nonnull NSString *)type;
+ (JSSTicketValidityType)validityTypeForNumberOfDays:(NSUInteger)days numberOfMonth:(NSUInteger)month;

@end

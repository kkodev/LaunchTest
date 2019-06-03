//
//  JSSNextAvailableFareDetails.h
//  thetrainline
//
//  Created by Luca Torella on 22/07/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

NS_ASSUME_NONNULL_BEGIN

@interface JSSNextAvailableFareDetails : NSObject <NSCopying>

@property (nonatomic, copy, readonly) NSString *ticketType;
@property (nonatomic, readonly) TLCTicketCategory ticketCategoryGroup;
@property (nonatomic, copy, readonly) NSString *fareRestrictionCode;
@property (nonatomic, copy, readonly) NSString *routeRestrictionCode;
@property (nonatomic, copy, readonly) NSString *fareOriginCode;
@property (nonatomic, copy, readonly) NSString *fareDestinationCode;
@property (nonatomic, copy, readonly) NSDate *startValidityDate;
@property (nonatomic, copy, readonly) NSDate *endValidityDate;

- (instancetype)initWithTicketType:(NSString *)ticketType
               ticketCategoryGroup:(TLCTicketCategory)ticketCategoryGroup
               fareRestrictionCode:(NSString *)fareRestrictionCode
              routeRestrictionCode:(NSString *)routeRestrictionCode
                    fareOriginCode:(NSString *)fareOriginCode
               fareDestinationCode:(NSString *)fareDestinationCode
                 startValidityDate:(NSDate *)startValidityDate
                   endValidityDate:(NSDate *)endValidityDate;

@end

NS_ASSUME_NONNULL_END

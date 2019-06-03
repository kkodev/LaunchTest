//
//  JourneyTicket.h
//  thetrainline
//
//  Created by Andy Bettis on 06/12/2012.
//  Copyright (c) 2012 Trapeze Group (UK). All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class JSSFare;
@class JSSDeliveryOption;
@class TTLLegacyTicketValidity;
@class JSSTicketValidity;

#define NO_ROUTE_RESTRICTIONS_CODE @"00000"

extern const struct JSSSeatAvCode {
    __unsafe_unretained NSString *Mandatory;
    __unsafe_unretained NSString *Reservable;
    __unsafe_unretained NSString *NotAvailable;

} JSSSeatAvCode;

typedef NS_ENUM(NSUInteger, JSSTicketValidityType) {
    JSSTicketValidityTypeD1 = 100, // this must be greater than specified train, as this enum order is relied upon to sort the ticket options by flexibility
    JSSTicketValidityTypeD2,
    JSSTicketValidityTypeD3,
    JSSTicketValidityTypeD4,
    JSSTicketValidityTypeD5,
    JSSTicketValidityTypeM0,
    JSSTicketValidityTypeM1,
    JSSTicketValidityTypeM2,
    JSSTicketValidityTypeM3
};

FOUNDATION_EXPORT NSUInteger const JSSTicketUnlimitedNumberOfSeatsRemaining;
FOUNDATION_EXPORT NSUInteger const JSSTicketUnspecifiedNumberOfSeatsRemaining;

@interface JSSTicket : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *ticketDescription;
@property (nonatomic, strong) NSString *routeRestriction;
@property (nonatomic, strong) NSString *routeRestrictionCode;

@property (nonatomic, strong) NSOrderedSet<JSSDeliveryOption *> *availableDeliveryOptions;

@property (nonatomic, readonly) NSString *passengerType;
@property (nonatomic, readonly) NSString *seatAvCode;
@property (nonatomic) NSUInteger seatsRemaining;
@property (nonatomic, readonly) BOOL railcardApplied;
@property (nonatomic, assign) JSSTicketValidityType outboundValidityType;
@property (nonatomic, assign) JSSTicketValidityType returnValidityType;
@property (nonatomic, strong) JSSTicketValidity *outboundValidity;
@property (nonatomic, strong) JSSTicketValidity *returnValidity;

@property (nonatomic) TLCCurrency fullAdultFare;
@property (nonatomic) TLCCurrency fullChildFare;
@property (nonatomic, readonly) TLCCurrency totalNonDiscountedPrice;
@property (nonatomic, readonly) TLCCurrency nextTierTotalPrice;

@property (nonatomic) TLCCurrency totalPrice;
@property (nonatomic) BOOL isFirst;
@property (nonatomic, readonly) TLCTicketTypeClass ticketTypeClass;
@property (nonatomic) BOOL isReturn;
@property (nonatomic, getter=isSaleTicket) BOOL saleTicket;

@property (nonatomic) TLCTicketCategory ticketFlexibility;
@property (nonatomic, strong) NSArray<JSSFare *>* fares;
@property (nonatomic, strong) NSArray<NSNumber *>* advanceTiers;
@property (nonatomic, strong) NSNumber *daysPredictedToExpire;
@property (nonatomic) NSInteger ticketID;

@property(nonatomic, copy) NSString *fareOriginCode;
@property(nonatomic, copy) NSString *fareDestinationCode;
@property(nonatomic, copy) NSString *fareRestrictionCode;

- (NSInteger)numberOfAdults;
- (NSInteger)numberOfChildren;

- (NSArray<NSString *> *)restrictionsGist;

@end

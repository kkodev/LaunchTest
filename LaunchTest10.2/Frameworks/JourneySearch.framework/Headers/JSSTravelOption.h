@import Foundation;
@import TrainlineCommon;

@class JSSTicket;
@class JSSJourneyPlan;
@class TTLLegacyTicketValidity;
@class JSSTicketValidity;

/* This class encapsulates one or more tickets required to travel on the selected journey(s) and exposes the travel option type
 * enum to allow you reason over which type of booking the user is making */
@interface JSSTravelOption : NSObject<NSSecureCoding>

@property (nonatomic, readonly) JSSTicket *outboundTicket;
@property (nonatomic, readonly) JSSTicket *inboundTicket;
@property (nonatomic, readonly) TLCBookingType travelOptionType;
@property (nonatomic, readonly) TLCCurrency totalPrice;
@property (nonatomic, readonly) TLCCurrency totalNonDiscountedPrice;
@property (nonatomic, readonly) TLCCurrency nextTierTotalPrice;

@property (nonatomic, readonly) BOOL railcardApplied;

- (instancetype)initWithOutboundTicket:(JSSTicket *)outbound inbound:(JSSTicket *)inbound;

- (instancetype)initWithOutboundTicket:(JSSTicket *)outbound type:(TLCBookingType)type;

- (JSSTicketValidity *)outboundValidity;

- (JSSTicketValidity *)inboundValidity;

- (NSComparisonResult)compare:(JSSTravelOption *)other;

- (BOOL)isFlexible;

- (BOOL)isEqual:(id)other;

- (BOOL)isEqualToOption:(JSSTravelOption *)option;

- (NSUInteger)hash;

@end

@import Foundation;
@import TrainlineCommon;

@class JSSTicket;
@class JSSTravelOption;

#import "JSSJourney.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger , JSSTicketTypeFilter) {
        JSSTicketTypeFilterAdvancedSingles,     /* this returns only the advanced singles */
        JSSTicketTypeFilterFlexibleSingles,     /* this returns only the flexible singles */
        JSSTicketTypeFilterSortedSingles,       /* this returns only the cheapest advanced and the flexible singles sorted by prices */
        JSSTicketTypeFilterReturns,             /* this returns only the advanced and the flexible returns */
        JSSTicketTypeFilterAll,                 /* this returns all the tickets */
};

@interface JSSJourneyPlan : JSSJourney <NSCopying, NSSecureCoding>

@property (nonatomic) long long journeySearchId;
@property (nonatomic, assign) NSInteger journeyID;
@property (nonatomic, readonly, getter=hasReservableLegs) BOOL reservableLegs;
@property (nonatomic, assign) TLCWalkUpFareType walkUpFareType;
@property (nonatomic, readonly) NSMutableArray<JSSTicket *> *tickets;

- (instancetype)initWithId:(NSInteger)journeyID
                    origin:(TLCStation *)origin
               destination:(TLCStation *)destination
                      legs:(NSArray<JSSLeg *> *)legs
                 direction:(TLCJourneyDirection)direction;

- (void)addTicket:(JSSTicket *)ticket
             seat:(NSString *)pSeatAvCode;

- (BOOL) isUsableWithTicket:(JSSTicket *)pTicket;

- (BOOL)hasDeliveryOptions;

/*filter methods to query tickets */
- (NSArray<JSSTicket *> *)ticketsForTicketType:(JSSTicketTypeFilter)requestedTicketType
                                     classType:(TLCTicketTypeClass)classType;

/*same overloaded with class type set to All */
- (NSArray<JSSTicket *> *)ticketsForTicketType:(JSSTicketTypeFilter)requestedTicketType;

/*returns possible travel options for an outbound journey paired with another inbound journey, filtered by ticket type */
- (nullable JSSTravelOption *)eachWayFareTravelOptionWithInboundJourney:(JSSJourneyPlan *)inboundJourney;

/*returns possible travel options for an outbound journey paired with another inbound journey */
- (NSArray<JSSTravelOption *> *)travelOptionsWithInboundJourney:(JSSJourneyPlan *)inboundJourney
                                                      classType:(TLCTicketTypeClass)classType;

/*same overloaded with class type set to all*/
- (NSArray<JSSTravelOption *> *)travelOptionsWithInboundJourney:(JSSJourneyPlan *)inboundJourney;

/*Returns travel options for this journey, should only be called for an outbound journey */
- (NSArray<JSSTravelOption *> *)travelOptions;

/*Returns travel options for this journey, should only be called for an outbound journey */
- (NSArray<JSSTravelOption *> *)travelOptionsForClassType:(TLCTicketTypeClass)classType;

@end

NS_ASSUME_NONNULL_END

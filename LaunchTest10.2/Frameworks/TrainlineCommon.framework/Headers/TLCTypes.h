//
//  TLCTypes.h
//  Common
//
//  Created by Luca Torella on 23/07/2015.
//  Copyright (c) 2015 thetrainline.com. All rights reserved.
//

@import Foundation;

typedef NSInteger TLCCurrency;

typedef NS_ENUM(NSInteger, TLCJourneyDirection) {
    TLCJourneyDirectionUnknown = -1,
    TLCJourneyDirectionOutbound,
    TLCJourneyDirectionInbound
};

typedef NS_ENUM(NSInteger, TLCWalkUpFareType) {
    TLCWalkUpFareTypePeak,
    TLCWalkUpFareTypeOffPeak,
    TLCWalkUpFareTypeSuperOffPeak
};

typedef NS_ENUM(NSInteger , TLCTicketCategory) {
    TLCTicketCategoryUnknown,
    TLCTicketCategoryAdvanced,
    TLCTicketCategoryFlexible
};

typedef NS_ENUM(NSUInteger, TLCTicketTypeClass) {
    TLCTicketTypeClassUnknown,
    TLCTicketTypeClassAll,
    TLCTicketTypeClassFirst,
    TLCTicketTypeClassStandard
};

typedef NS_ENUM(NSUInteger, TLCBookingType) {
    TLCBookingTypeUnknown,
    TLCBookingTypeSingle,
    TLCBookingTypeReturn,
    TLCBookingTypeOpenReturn,
    TLCBookingTypeEachWayFare
};

NS_INLINE TLCBookingType bookingTypeFromString(NSString *type)
{
    if ([type isEqualToString:@"Single"]) {
        return TLCBookingTypeSingle;
    } else if ([type isEqualToString:@"Return"]) {
        return TLCBookingTypeReturn;
    } else if ([type isEqualToString:@"OpenReturn"]) {
        return TLCBookingTypeOpenReturn;
    } else if ([type isEqualToString:@"EachWayFare"]) {
        return TLCBookingTypeEachWayFare;
    }
    return TLCBookingTypeUnknown;
}

static NSString * const TLCWalkUpFareTypeDescription[] = {
    [TLCWalkUpFareTypePeak] = @"Peak",
    [TLCWalkUpFareTypeOffPeak] = @"OffPeak",
    [TLCWalkUpFareTypeSuperOffPeak] = @"SuperOffPeak"
};

NS_INLINE TLCWalkUpFareType walkUpFareTypeFromWalkUpFareTypeString(NSString *walkUpFareTypeString) {
    if ([walkUpFareTypeString isEqualToString:TLCWalkUpFareTypeDescription[TLCWalkUpFareTypePeak]]){
        return TLCWalkUpFareTypePeak;
    }else if([walkUpFareTypeString isEqualToString:TLCWalkUpFareTypeDescription[TLCWalkUpFareTypeOffPeak]]){
        return TLCWalkUpFareTypeOffPeak;
    }else if([walkUpFareTypeString isEqualToString:TLCWalkUpFareTypeDescription[TLCWalkUpFareTypeSuperOffPeak]]){
        return TLCWalkUpFareTypeSuperOffPeak;
    }
    return TLCWalkUpFareTypePeak;
}

typedef NS_ENUM(NSInteger, TLCRealTimeStatus) {
    TLCRealTimeStatusNotAvailable = 0,
    TLCRealTimeStatusOnTime,
    TLCRealTimeStatusLate,
    TLCRealTimeStatusDelayed /* we know the train the is late but we don't have an estimated time */
};

typedef NS_ENUM(NSInteger, TLCPlatformStatus) {
    TLCPlatformStatusNotAvailable = 0,
    TLCPlatformStatusScheduled,
    TLCPlatformStatusRealtime,
};

static NSString * const TLCRealTimeStatusDescription[] = {
    [TLCRealTimeStatusNotAvailable] = @"NotAvailable",
    [TLCRealTimeStatusOnTime] = @"OnTime",
    [TLCRealTimeStatusLate] = @"Late",
    [TLCRealTimeStatusDelayed] = @"Delayed"
};

NS_INLINE TLCRealTimeStatus
statusCodeFromStatusString(NSString *statusString) {
    if ([statusString isEqualToString:TLCRealTimeStatusDescription[TLCRealTimeStatusOnTime]]){
        return TLCRealTimeStatusOnTime;
    } else if([statusString isEqualToString:TLCRealTimeStatusDescription[TLCRealTimeStatusLate]]){
        return TLCRealTimeStatusLate;
    } else if([statusString isEqualToString:TLCRealTimeStatusDescription[TLCRealTimeStatusDelayed]]){
        return TLCRealTimeStatusDelayed;
    } else if ([statusString isEqualToString:TLCRealTimeStatusDescription[TLCRealTimeStatusNotAvailable]]){
        return TLCRealTimeStatusNotAvailable;
    }
    return TLCRealTimeStatusNotAvailable;
}

static NSString * const TLCPlatformStatusDescription[] = {
    [TLCPlatformStatusScheduled] = @"Scheduled",
    [TLCPlatformStatusRealtime] = @"Realtime",
};

NS_INLINE TLCPlatformStatus
platformStatusCodeFromPlatformStatusString(NSString *platformStatusString) {
    if ([platformStatusString isEqualToString:TLCPlatformStatusDescription[TLCPlatformStatusScheduled]]){
        return TLCPlatformStatusScheduled;
    }else if([platformStatusString isEqualToString:TLCPlatformStatusDescription[TLCPlatformStatusRealtime]]){
        return TLCPlatformStatusRealtime;
    }
    return TLCPlatformStatusNotAvailable;
}

typedef NS_ENUM(NSInteger, TLCTransportMode) {
    TLCTransportModeUnknown = 0,
    TLCTransportModeBus,
    TLCTransportModeTrain,
    TLCTransportModeFerry,
    TLCTransportModeWalk,
    TLCTransportModeTube,
    TLCTransportModeTaxi,
    TLCTransportModeMetro,
    TLCTransportModeTramlink,
    TLCTransportModePlatformChange,
    TLCTransportModeCheckinTime,
    TLCTransportModeHovercraft,
    TLCTransportModeTransfer,
    TLCTransportModeFoot,
    
    TLCTransportModeCount, // Used for enumerating. Not a mode.
};

/**
 * Returns a string that can be used to describe a given `TLCTransportMode`.
 *
 * These strings are not suitable for user display, but are guaranteed
 * to never change, so they are suitable for persistence and other uses.
 *
 * Consumers of this framework are responsible for supplying their
 * own localised descriptions of `TLCTransportMode` if needed.
 *
 * @param mode The mode to get a description for
 * @return A string describing the specified transport mode.
 */
extern NSString* descriptionForTLCTransportMode(TLCTransportMode mode);

extern TLCTransportMode
transportModeFromTransportString(NSString *transportModeString);

typedef NS_ENUM(NSInteger, TLCPaymentMethod) {
    TLCPaymentMethodCard,
    TLCPaymentMethodUnknown,
    TLCPaymentMethodApplePay,
    TLCPaymentMethodPayPal,
    TLCPaymentMethodMasterPass,
    TLCPaymentMethodVoucher,
    TLCPaymentMethodOnAccount
};

static NSString * const TLCPaymentMethodCode[] = {
    [TLCPaymentMethodUnknown]           = @"Unknown",
    [TLCPaymentMethodCard]              = @"CC",
    [TLCPaymentMethodApplePay]          = @"AW",
    [TLCPaymentMethodPayPal]            = @"PP",
    [TLCPaymentMethodMasterPass]        = @"MP",
    [TLCPaymentMethodVoucher]           = @"VO",
    [TLCPaymentMethodOnAccount]         = @"SC"
};

extern TLCPaymentMethod paymentMethodFromPaymentMethodString(NSString *paymentMethodString);

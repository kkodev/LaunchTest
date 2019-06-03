@import Foundation;

extern const struct JSSDeliveryOptionIdentifiers {
    __unsafe_unretained NSString *Mobile;
    __unsafe_unretained NSString *ETicket;
    __unsafe_unretained NSString *Kiosk;
} JSSDeliveryOptionIdentifiers;

@interface JSSDeliveryOption : NSObject<NSSecureCoding>

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSTimeInterval bookingHorizonInterval;
@property (nonatomic, readonly) BOOL isKiosk;
@property (nonatomic, readonly) BOOL isMobile;
@property (nonatomic, readonly) BOOL isETicket;
@property (nonatomic, readonly) BOOL isMobileOrETicket;

- (instancetype)initWithIdentifier:(NSString *)identifier
            bookingHorizonInterval:(NSTimeInterval)bookingHorizon;

- (BOOL)isEqualToOption:(JSSDeliveryOption *)option;

@end

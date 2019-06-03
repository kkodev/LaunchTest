@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (Extensions)

- (BOOL)ttl_isTodayRailTravelTime;
- (BOOL)isInThePast;

- (NSDate *)TTLExpiryDateForDate;
- (NSDate *)adjustedDateForRailNetworkEndOfDay;

@end

NS_ASSUME_NONNULL_END

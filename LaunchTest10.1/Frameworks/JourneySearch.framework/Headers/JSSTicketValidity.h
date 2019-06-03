@import Foundation;

@interface JSSTicketValidity : NSObject<NSSecureCoding>

@property (nonatomic) NSUInteger years;
@property (nonatomic) NSUInteger months;
@property (nonatomic) NSUInteger days;

@property (nonatomic) NSDate *startDate;
@property (nonatomic) NSDate *endDate;
@property (nonatomic, readonly) NSDate *endDay;     //tickets end at 4:30 the next day but sometimes we dont want this

- (instancetype)initWithYears:(NSUInteger)years
                       months:(NSUInteger)months
                         days:(NSUInteger)days
                    startDate:(NSDate *)startDate
                      endDate:(NSDate *)endDate;

@end

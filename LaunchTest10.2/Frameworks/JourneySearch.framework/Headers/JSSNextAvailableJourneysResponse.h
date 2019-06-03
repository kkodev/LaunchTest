@import Foundation;

typedef NS_ENUM(NSUInteger, JSSNextAvailableJourneysStatus) {
    JSSNextAvailableJourneysStatusMoreJourneysAvailable,
    JSSNextAvailableJourneysStatusMoreEarlierJourneysNotAvailable,
    JSSNextAvailableJourneysStatusMoreLaterJourneysNotAvailable,
};

@class JSSJourney;

@interface JSSNextAvailableJourneysResponse : NSObject <NSCopying>

@property (nonatomic, readonly) JSSJourney *realTimeJourney;
@property (nonatomic, readonly) NSArray<JSSJourney *> *nextAvailableJourneys;
@property (nonatomic, readonly) JSSNextAvailableJourneysStatus nextAvailableJourneysStatus;
@property (nonatomic, readonly) NSDate *timeStamp;

- (instancetype)initWithRealTimeJourney:(JSSJourney *)realTimeJourney
                  nextAvailableJourneys:(NSArray<JSSJourney *> *)nextAvailableJourneys
            nextAvailableJourneysStatus:(JSSNextAvailableJourneysStatus)nextAvailableJourneysStatus
                              timeStamp:(NSDate *)timeStamp;

@end

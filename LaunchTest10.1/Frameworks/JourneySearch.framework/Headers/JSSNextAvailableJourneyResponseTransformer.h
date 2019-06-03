@import Foundation;

@class JSSJourneyTransformer;
@class JSSLegTransformer;
@class JSSNextAvailableJourneysResponse;

@protocol TLCStationLoader;

@interface JSSNextAvailableJourneyResponseTransformer : NSObject

+ (instancetype)nextAvailableResponseTransformerWithStationLoader:(id<TLCStationLoader>)stationLoader;

- (instancetype)initWithJourneyTransformer:(JSSJourneyTransformer *)journeyTransformer;

- (JSSNextAvailableJourneysResponse *)transform:(NSDictionary *)response;

@end

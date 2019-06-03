@import Foundation;

@class JSSNextAvailableJourneyResponseTransformer;
@class JSSNextAvailableJourneysParamsTransformer;

@protocol TLCNetworkClient;
@protocol TLCErrorTransformer;
@protocol TLCStationLoader;

#import "JSSJourneySearchServiceProtocol.h"

@interface JSSJourneySearchService : NSObject <JSSJourneySearchService>

+ (instancetype)journeySearchServiceWithClient:(id<TLCNetworkClient>)client stationLoader:(id<TLCStationLoader>)stationLoader;

- (instancetype)initWithNextAvailableJourneyResponseTransformer:(JSSNextAvailableJourneyResponseTransformer *)nextAvailableJourneyResponseTransformer
                                                         client:(id <TLCNetworkClient>)client
                                               errorTransformer:(id <TLCErrorTransformer>)errorTransformer
                                nextAvailableRequestTransformer:(JSSNextAvailableJourneysParamsTransformer *)requestTransformer;

@end

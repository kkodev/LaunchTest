@import Foundation;

@class JSSNextAvailableJourneysParams;
@class JSSNextAvailableFareDetailsTransformer;
@class JSSNextAvailableSearchDetailsTransformer;
@class JSSNextAvailableLegDetailsTransformer;

@interface JSSNextAvailableJourneysParamsTransformer : NSObject

- (instancetype)initWithNextAvailableFareDetailsTransformer:(JSSNextAvailableFareDetailsTransformer *)nextAvailableFareDetailsTransformer
                                   searchDetailsTransformer:(JSSNextAvailableSearchDetailsTransformer *)searchDetailsTransformer
                                      legDetailsTransformer:(JSSNextAvailableLegDetailsTransformer *)legDetailsTransformer;

- (NSDictionary *)transform:(JSSNextAvailableJourneysParams *)requestParams;

@end

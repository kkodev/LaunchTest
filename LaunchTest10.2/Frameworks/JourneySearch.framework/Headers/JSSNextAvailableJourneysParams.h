@import Foundation;

@class JSSNextAvailableSearchDetails;
@class JSSNextAvailableFareDetails;

@interface JSSNextAvailableJourneysParams : NSObject <NSCopying>

@property (nonatomic, readonly) JSSNextAvailableSearchDetails *searchDetails;
@property (nonatomic, readonly) JSSNextAvailableFareDetails *fareDetails;
@property (nonatomic, readonly) NSArray *legDetails;

@property (nonatomic, readonly) BOOL retryWithMoreJourneys;

- (instancetype)initWithLegDetails:(NSArray *)legDetails searchDetails:(JSSNextAvailableSearchDetails *)searchDetails fareDetails:(JSSNextAvailableFareDetails *)fareDetails retryWithMoreJourneys:(BOOL)retryWithMoreJourneys;

@end

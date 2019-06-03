//
//  JSSJourneySearchService.h
//  thetrainline
//
//  Created by Luca Torella on 22/07/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;

@class JSSNextAvailableJourneysResponse;
@class JSSNextAvailableJourneysParams;

NS_ASSUME_NONNULL_BEGIN

typedef void (^JSSNextAvailableJourneysCompletionHandler)(JSSNextAvailableJourneysResponse * __nullable response, NSError * __nullable error);

@protocol JSSJourneySearchService <NSObject>

- (NSOperation *)fetchNextAvailableJourneysWithParams:(JSSNextAvailableJourneysParams *)requestParams completion:(__nullable JSSNextAvailableJourneysCompletionHandler)completion;

@end

NS_ASSUME_NONNULL_END

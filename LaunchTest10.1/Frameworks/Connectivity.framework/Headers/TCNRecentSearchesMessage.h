//
//  TCNRecentSearchesMessage.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 08/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

#import "TCNMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCNRecentSearchesMessage : TCNMessage

@property (nonatomic, readonly) NSUInteger maximumNumberOfRecentSearches;

- (instancetype)initWithUserInfo:(nullable NSDictionary<NSString *, id> *)userInfo NS_UNAVAILABLE;
- (instancetype)initWithMaximumNumberOfRecentSearches:(NSUInteger)maximumNumberOfRecentSearches NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

//
//  TCNRecentSearchReply.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 08/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

#import "TCNReply.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCNRecentSearchReply : TCNReply

@property (nonatomic, readonly, nullable) TLCStation *originStation;
@property (nonatomic, readonly, nullable) TLCStation *destinationStation;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithOriginStation:(nullable TLCStation *)originStation destinationStation:(nullable TLCStation *)destinationStation NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

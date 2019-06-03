//
//  TCNDepartingTrainsMessage.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 08/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

#import "TCNMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface TCNDepartingTrainsMessage : TCNMessage

@property (nonatomic, readonly, nullable) TLCStation *originStation;
@property (nonatomic, readonly, nullable) TLCStation *destinationStation;

- (instancetype)initWithUserInfo:(nullable NSDictionary<NSString *, id> *)userInfo NS_UNAVAILABLE;
- (instancetype)initWithOriginStation:(nullable TLCStation *)originStation destinationStation:(nullable TLCStation *)destinationStation NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

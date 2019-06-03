//
//  TCNMessage.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 10/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface TCNMessage : NSObject <NSSecureCoding>

@property (nonatomic, readonly, nullable) NSDictionary<NSString *, id> *userInfo;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithUserInfo:(nullable NSDictionary<NSString *, id> *)userInfo NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

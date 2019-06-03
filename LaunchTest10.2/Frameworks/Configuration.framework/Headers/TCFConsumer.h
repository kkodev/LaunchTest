//
//  TCFConsumer.h
//  Configuration
//
//  Created by Grzegorz Kozłowski on 29/01/2015.
//  Copyright (c) 2015 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Consumer)
@interface TCFConsumer : NSObject <NSCopying, NSSecureCoding>

/**
 Returns consumer identifier.
 */
@property (nonatomic, nullable, copy) NSString *identifier;

/**
 Returns consumer entry point.
 */
@property (nonatomic, nullable, copy) NSString *entryPoint;

/**
 Returns consumer username.
 */
@property (nonatomic, nullable, copy) NSString *username;

/**
 Returns consumer password.
 */
@property (nonatomic, nullable, copy) NSString *password;

/**
 Returns consumer salt.
 */
@property (nonatomic, nullable, copy) NSString *salt;

/**
 Designated initializer.
 */
- (instancetype)initWithIdentifier:(nullable NSString *)identifier entryPoint:(nullable NSString *)entryPoint username:(nullable NSString *)username password:(nullable NSString *)password salt:(nullable NSString *)salt NS_DESIGNATED_INITIALIZER;

/**
 Compares the receiving consumer to another consumer.
 */
- (BOOL)isEqualToConsumer:(nullable TCFConsumer *)consumer;

@end

NS_ASSUME_NONNULL_END

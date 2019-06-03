//
//  JSSRailcard.h
//  thetrainline
//
//  Created by Andy Bettis on 07/10/2013.
//  Copyright (c) 2013 Trapeze Group (UK). All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface JSSRailcard : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, copy, readonly) NSString *identifier;
@property (nonatomic, copy, readonly) NSString *name;
@property (nonatomic, copy, readonly) NSString *code;
@property (nonatomic, copy, readonly) NSString *urn;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithIdentifier:(NSString *)identifier
                              name:(NSString *)name
                              code:(NSString *)code
                              urn:(NSString *)urn NS_DESIGNATED_INITIALIZER;

+ (nullable NSString *)railcardListFromArray:(NSArray *)railcards;

@end

NS_ASSUME_NONNULL_END

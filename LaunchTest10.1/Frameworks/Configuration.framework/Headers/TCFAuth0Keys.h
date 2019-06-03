//
//  TCFAuth0Keys.h
//  Configuration
//
//  Created by Giordano Scalzo on 14/08/2017.
//  Copyright © 2017 Trainline. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Auth0Keys)
@interface TCFAuth0Keys : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, nullable, copy) NSString *clientId;

@property (nonatomic, nullable, copy) NSString *domain;

@property (nonatomic, nullable, copy) NSString *realmLeisure;

@property (nonatomic, nullable, copy) NSString *realmBusiness;

@property (nonatomic, nullable, copy) NSString *scope;

@property (nonatomic, nullable, copy) NSString *audience;

- (instancetype)initWithClientId:(nullable NSString *)clientId domain:(nullable NSString *)domain realmLeisure:(nullable NSString *)realmLeisure realmBusiness:(nullable NSString *)realmBusiness scope:(nullable NSString *)scope audience:(nullable NSString *)audience NS_DESIGNATED_INITIALIZER;

- (BOOL)isEqualToAuth0Keys:(nullable TCFAuth0Keys *)auth0Keys;

@end

NS_ASSUME_NONNULL_END

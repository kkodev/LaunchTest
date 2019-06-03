//
//  TCFEnvironment.h
//  Configuration
//
//  Created by Grzegorz Kozłowski on 10/02/2015.
//  Copyright (c) 2015 Trainline. All rights reserved.
//

@import Foundation;

@class TCFConsumer;
@class TCFAuth0Keys;

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Environment)
@interface TCFEnvironment : NSObject <NSCopying, NSSecureCoding>

/**
 Returns environment name.
 */
@property (nonatomic, nullable, copy) NSString *name;

/**
 Returns environment details.
 */
@property (nonatomic, nullable, copy) NSString *details;

/**
 Indicates if environment allows invalid SSL certificates.
 */
@property (nonatomic) BOOL allowsInvalidSSLCertificates;

/**
 Returns base URL to Trainline API.
 */
@property (nonatomic, nullable, copy) NSURL *apiBaseURL;

/**
 Returns base URL to Real Time API.
 */
@property (nonatomic, nullable, copy) NSURL *realTimeAPIBaseURL;

/**
 Returns URL to leisure website.
 */
@property (nonatomic, nullable, copy) NSURL *leisureWebsiteURL;

/**
 Returns URL to business website.
 */
@property (nonatomic, nullable, copy) NSURL *businessWebsiteURL;

/**
 Returns base URL to reference data.
 */
@property (nonatomic, nullable, copy) NSURL *referenceDataBaseURL;

/**
 Returns URL to EU realtime website.
 */
@property (nonatomic, nullable, copy) NSURL *euRealtimeWebsiteURL;

/**
 Returns New Relic access key.
 */
@property (nonatomic, copy) NSString *ttl_newRelicAccessKey;

/**
 Returns Braze access key.
 */
@property (nonatomic, copy) NSString *brazeAccessKey;

/**
 Returns Auth0 Keys.
 */
@property (nonatomic, nullable, copy) TCFAuth0Keys *auth0Keys;

/**
 Leisure consumer without fraud delay and without fee for journeys in less than 2 hours.
 */
@property (nonatomic, nullable, copy) TCFConsumer *leisureConsumerNoFraudDelayNoFee;

/**
 Leisure consumer with fraud delay but without fee for journeys in more than than 2 hours but less than 1 day.
 */
@property (nonatomic, nullable, copy) TCFConsumer *leisureConsumerFraudDelayNoFee;

/**
 Leisure consumer with fraud delay and with fee for journeys in more than 1 day.
 */
@property (nonatomic, nullable, copy) TCFConsumer *leisureConsumerFraudDelayFee;

/**
 Business consumer for managed group 04 - CWT.
 */
@property (nonatomic, nullable, copy) TCFConsumer *businessConsumerManagedGroup04;

/**
 Business consumer for managed group 15 - Trainline Business.
 */
@property (nonatomic, copy) TCFConsumer *businessConsumerManagedGroup15;

/**
 Business consumer for managed group 21 - SME.
 */
@property (nonatomic, nullable, copy) TCFConsumer *businessConsumerManagedGroup21;

/**
 Business consumer for managed group 26 - AMEX.
 */
@property (nonatomic, nullable, copy) TCFConsumer *businessConsumerManagedGroup26;

/**
 Returns Merchant Identifier for Apple Pay payments
 */
@property (nonatomic, nullable, copy) NSString *applePayMerchantIdentifier;

/**
 Returns visual validation consumer identifier.
 */
@property (nonatomic, nullable, copy) NSString *visualValidationConsumerIdentifier;

/**
 Returns visual validation encryption key.
 */
@property (nonatomic, nullable, copy) NSString *visualValidationEncryptionKey;
@property (nonatomic, nullable, copy) NSString *visualValidationEncryptionKey1P;

/**
 Returns Trust Defender merchant identifier.
 */
@property (nonatomic, nullable, copy) NSString *trustDefenderMerchantIdentifier;

/**
 Returns Trust Defender organization identifier.
 */
@property (nonatomic, nullable, copy) NSString *trustDefenderOrganizationIdentifier;

/**
 Compares the receiving environment to another environment.
 */
- (BOOL)isEqualToEnvironment:(nullable TCFEnvironment *)environment;

@end

NS_ASSUME_NONNULL_END

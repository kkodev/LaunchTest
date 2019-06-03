//
//  JSSLeg.h
//  thetrainline
//
//  Created by Andy Bettis on 03/12/2012.
//  Copyright (c) 2012 Trapeze Group (UK). All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class JSSLeg;
@class JSSLegStop;

NS_ASSUME_NONNULL_BEGIN

@interface JSSLeg : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, assign) BOOL reservable;
@property (nonatomic, assign, getter=isCancelled) BOOL cancelled;
@property (nonatomic, copy) NSString *trainUID;
@property (nonatomic, assign) TLCTransportMode transportMode;
@property (nonatomic, copy) NSString *serviceProvider;
@property (nonatomic, copy) NSString *serviceProviderCode;
@property (nonatomic, copy, nullable) NSString *retailTrainIdentifier;
@property (nonatomic, strong) NSArray<TLCStation *> *finalDestinations;
@property (nonatomic, strong, nullable) NSDictionary *busyData;
@property (nonatomic, assign, getter = isTimetableConfirmed) BOOL timetableConfirmed;
@property (nonatomic, assign, getter = isReplacementService) BOOL replacementService;

- (instancetype)initWithStops:(NSArray<JSSLegStop *> *)stops
                transportMode:(TLCTransportMode)mode
              serviceProvider:(NSString *)provider;

- (instancetype)initWithStops:(NSArray<JSSLegStop *> *)stops
                transportMode:(TLCTransportMode)mode
              serviceProvider:(NSString *)provider
          serviceProviderCode:(NSString * _Nullable)providerCode;

- (BOOL)isTrainTransfer;

- (NSTimeInterval)scheduledDurationInSeconds;

- (JSSLegStop *)destinationStop;
- (JSSLegStop *)originStop;

@end

NS_ASSUME_NONNULL_END

//
//  TFTFeatureToggleStore.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

#import "TFTMultivariateFeatureToggleVariant.h"

@protocol TFTFeatureToggle;
@protocol TFTLocalValueProvider;
@protocol TFTRemoteValueProvider;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const TFTFeatureToggleStoreDidUpdateStoreNotification NS_SWIFT_NAME(FeatureToggleStoreDidUpdateStoreNotification);

NS_SWIFT_NAME(FeatureToggleStore)
@interface TFTFeatureToggleStore : NSObject

@property (nonatomic, readonly) NSURL *fileURL;

@property (nonatomic, nullable) id<TFTLocalValueProvider> localValueProvider;
@property (nonatomic, nullable) id<TFTRemoteValueProvider> remoteValueProvider;

@property (nonatomic, nullable, readonly) NSArray<id<TFTFeatureToggle>> *allFeatureToggles;

+ (instancetype)defaultStore;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithFileURL:(NSURL *)fileURL localValueProvider:(nullable id<TFTLocalValueProvider>)localValueProvider remoteValueProvider:(nullable id<TFTRemoteValueProvider>)remoteValueProvider NS_DESIGNATED_INITIALIZER;

- (nullable id<TFTFeatureToggle>)featureToggleWithName:(NSString *)name;

- (BOOL)boolValueForFeatureToggleWithName:(NSString *)name;
- (nullable NSNumber *)numberValueForFeatureToggleWithName:(NSString *)name;
- (nullable NSString *)textValueForFeatureToggleWithName:(NSString *)name;
- (TFTMultivariateFeatureToggleVariant)multivariateValueForFeatureToggleWithName:(NSString *)name;

- (void)setLocalValue:(nullable id)value forFeatureToggleWithName:(NSString *)name;
- (void)setTemporaryLocalValue:(nullable id)value forFeatureToggleWithName:(NSString *)name;
- (void)setRemoteValue:(nullable id)value forFeatureToggleWithName:(NSString *)name;
- (BOOL)hasCustomValueForFeatureToggleWithName:(NSString *)name;

- (void)registerFeatureToggles:(NSArray<id<TFTFeatureToggle>> *)featureToggles;

@end

NS_ASSUME_NONNULL_END

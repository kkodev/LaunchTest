//
//  TFTMultivariateFeatureToggle.h
//  Feature Toggling
//
//  Created by Dave Barker on 28/03/2017.
//  Copyright © 2017 Trainline. All rights reserved.
//

#import "TFTFeatureToggle.h"
#import "TFTMultivariateFeatureToggleVariant.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(MultivariateFeatureToggle)
@interface TFTMultivariateFeatureToggle : NSObject <TFTFeatureToggle>

@property (nonatomic, readonly) TFTMultivariateFeatureToggleVariant value;

@property (nonatomic, readonly) TFTMultivariateFeatureToggleVariant defaultValue;
@property (nonatomic, readonly) TFTMultivariateFeatureToggleVariant localValue;
@property (nonatomic, readonly) TFTMultivariateFeatureToggleVariant remoteValue;
@property (nonatomic, readonly) TFTMultivariateFeatureToggleVariant remotePersistedValue;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithName:(NSString *)name defaultValue:(TFTMultivariateFeatureToggleVariant)defaultValue source:(TFTFeatureToggleSource)source type:(TFTFeatureToggleType)type NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithName:(NSString *)name defaultValue:(TFTMultivariateFeatureToggleVariant)defaultValue source:(TFTFeatureToggleSource)source;
- (instancetype)initWithName:(NSString *)name defaultValue:(TFTMultivariateFeatureToggleVariant)defaultValue type:(TFTFeatureToggleType)type;
- (instancetype)initWithName:(NSString *)name defaultValue:(TFTMultivariateFeatureToggleVariant)defaultValue;

+ (nullable NSString *)textFromValue:(TFTMultivariateFeatureToggleVariant)multivariateValue;
+ (TFTMultivariateFeatureToggleVariant)valueFromText:(nullable NSString *)text;

@end

NS_ASSUME_NONNULL_END

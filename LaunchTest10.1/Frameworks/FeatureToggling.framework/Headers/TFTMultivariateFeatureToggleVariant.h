//
//  TFTMultivariateFeatureToggleVariant.h
//  Feature Toggling
//
//  Created by Dave Barker on 28/03/2017.
//  Copyright © 2017 Trainline. All rights reserved.
//

typedef NS_ENUM(NSInteger, TFTMultivariateFeatureToggleVariant) {
	TFTMultivariateFeatureToggleVariantUnset = -1, // Required to distinguish an unset value from 'default'.
	TFTMultivariateFeatureToggleVariantControl = 0,
	TFTMultivariateFeatureToggleVariantA = 1,
	TFTMultivariateFeatureToggleVariantB = 2,
} NS_SWIFT_NAME(MultivariateFeatureToggleVariant);

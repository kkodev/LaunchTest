//
//  FeatureToggling.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 21/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT double FeatureTogglingVersionNumber;
FOUNDATION_EXPORT const unsigned char FeatureTogglingVersionString[];

#import <FeatureToggling/TFTFeatureToggle.h>
#import <FeatureToggling/TFTBoolFeatureToggle.h>
#import <FeatureToggling/TFTNumberFeatureToggle.h>
#import <FeatureToggling/TFTTextFeatureToggle.h>
#import <FeatureToggling/TFTMultivariateFeatureToggle.h>
#import <FeatureToggling/TFTFeatureToggleStore.h>
#import <FeatureToggling/TFTValueProvider.h>
#import <FeatureToggling/TFTLocalValueProvider.h>
#import <FeatureToggling/TFTRemoteValueProvider.h>

//
//  TFTMultivariateFeatureToggle+TFTPrivate.h
//  Feature Toggling
//
//  Created by Dave Barker on 28/03/2017.
//  Copyright © 2017 Trainline. All rights reserved.
//

#import "TFTMultivariateFeatureToggle.h"

@interface TFTMultivariateFeatureToggle ()

@property (nonatomic, readwrite) TFTMultivariateFeatureToggleVariant inMemoryValue;
@property (nonatomic, readwrite) TFTMultivariateFeatureToggleVariant localValue;
@property (nonatomic, readwrite) TFTMultivariateFeatureToggleVariant remoteValue;

@property (nonatomic, readonly) BOOL hasLocalValue;

- (void)clearInMemoryValue;
- (void)clearLocalValue;
- (void)clearRemoteValue;

@end

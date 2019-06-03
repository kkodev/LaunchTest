//
//  TFTRemoteValueProvider.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 14/07/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TFTValueProvider.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(RemoteValueProvider)
@protocol TFTRemoteValueProvider <TFTValueProvider>

@optional

- (void)registerFeatureToggle:(id<TFTFeatureToggle>)featureToggle;
- (void)unregisterFeatureToggle:(id<TFTFeatureToggle>)featureToggle;
- (void)startUp;

@end

NS_ASSUME_NONNULL_END

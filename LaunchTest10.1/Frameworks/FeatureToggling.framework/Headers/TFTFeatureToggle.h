//
//  TFTFeatureToggle.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 21/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TFTFeatureToggleSource) {
	TFTFeatureToggleSourceLocal,
	TFTFeatureToggleSourceLocalAndRemote
} NS_SWIFT_NAME(FeatureToggleSource);

typedef NS_ENUM(NSInteger, TFTFeatureToggleType) {
	TFTFeatureToggleTypeVolatile,
	TFTFeatureToggleTypeStatic
} NS_SWIFT_NAME(FeatureToggleType);

NS_SWIFT_NAME(FeatureToggle)
@protocol TFTFeatureToggle <NSObject, NSCopying, NSSecureCoding>

@required

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) TFTFeatureToggleSource source;
@property (nonatomic, readonly) TFTFeatureToggleType type;
@property (nonatomic, readonly) BOOL hasCustomValue;

- (BOOL)isEqualToFeatureToggle:(id<TFTFeatureToggle>)featureToggle;

@end

NS_ASSUME_NONNULL_END

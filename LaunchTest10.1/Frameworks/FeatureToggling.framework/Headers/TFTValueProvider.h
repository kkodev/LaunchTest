//
//  TFTValueProvider.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

@protocol TFTFeatureToggle;
@protocol TFTValueProvider;

NS_ASSUME_NONNULL_BEGIN

typedef NS_OPTIONS(NSUInteger, TFTValueChangeType) {
	TFTValueChangeTypeDefault	= 0,
	TFTValueChangeTypeEnforced	= 1 << 1,
	TFTValueChangeTypeInMemory	= 1 << 2
} NS_SWIFT_NAME(ValueChangeType);

NS_SWIFT_NAME(ValueProviderDelegate)
@protocol TFTValueProviderDelegate <NSObject>

@optional

- (void)valueProvider:(id<TFTValueProvider>)valueProvider didChangeValueForFeatureToggleWithName:(NSString *)name changeType:(TFTValueChangeType)changeType;

@end

NS_SWIFT_NAME(ValueProvider)
@protocol TFTValueProvider <NSObject>

@required

@property (nonatomic, nullable, weak) id<TFTValueProviderDelegate> delegate;

- (nullable id)valueForFeatureToggle:(id<TFTFeatureToggle>)featureToggle;

@end

NS_ASSUME_NONNULL_END

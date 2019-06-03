//
//  TFTNumberFeatureToggle.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TFTFeatureToggle.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(NumberFeatureToggle)
@interface TFTNumberFeatureToggle : NSObject <TFTFeatureToggle>

@property (nonatomic, readonly) NSNumber *value;

@property (nonatomic, readonly) NSNumber *defaultValue;
@property (nonatomic, nullable, readonly) NSNumber *localValue;
@property (nonatomic, nullable, readonly) NSNumber *remoteValue;
@property (nonatomic, nullable, readonly) NSNumber *remotePersistedValue;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSNumber *)defaultValue source:(TFTFeatureToggleSource)source type:(TFTFeatureToggleType)type NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSNumber *)defaultValue source:(TFTFeatureToggleSource)source;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSNumber *)defaultValue type:(TFTFeatureToggleType)type;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSNumber *)defaultValue;

@end

NS_ASSUME_NONNULL_END

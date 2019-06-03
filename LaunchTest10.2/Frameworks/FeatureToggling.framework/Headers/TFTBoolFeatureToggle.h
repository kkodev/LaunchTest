//
//  TFTBoolFeatureToggle.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TFTFeatureToggle.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(BoolFeatureToggle)
@interface TFTBoolFeatureToggle : NSObject <TFTFeatureToggle>

@property (nonatomic, readonly) BOOL value;

@property (nonatomic, readonly) BOOL defaultValue;
@property (nonatomic, readonly) BOOL localValue;
@property (nonatomic, readonly) BOOL remoteValue;
@property (nonatomic, readonly) BOOL remotePersistedValue;
@property (nonatomic, readonly) BOOL hasRemoteValue;
@property (nonatomic, readonly) BOOL hasRemotePersistedValue;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithName:(NSString *)name defaultValue:(BOOL)defaultValue source:(TFTFeatureToggleSource)source type:(TFTFeatureToggleType)type NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithName:(NSString *)name defaultValue:(BOOL)defaultValue source:(TFTFeatureToggleSource)source;
- (instancetype)initWithName:(NSString *)name defaultValue:(BOOL)defaultValue type:(TFTFeatureToggleType)type;
- (instancetype)initWithName:(NSString *)name defaultValue:(BOOL)defaultValue;

@end

NS_ASSUME_NONNULL_END

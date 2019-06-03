//
//  TFTTextFeatureToggle.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TFTFeatureToggle.h"

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(TextFeatureToggle)
@interface TFTTextFeatureToggle : NSObject <TFTFeatureToggle>

@property (nonatomic, readonly) NSString *value;

@property (nonatomic, readonly) NSString *defaultValue;
@property (nonatomic, nullable, readonly) NSString *localValue;
@property (nonatomic, nullable, readonly) NSString *remoteValue;
@property (nonatomic, nullable, readonly) NSString *remotePersistedValue;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSString *)defaultValue source:(TFTFeatureToggleSource)source type:(TFTFeatureToggleType)type NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSString *)defaultValue source:(TFTFeatureToggleSource)source;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSString *)defaultValue type:(TFTFeatureToggleType)type;
- (instancetype)initWithName:(NSString *)name defaultValue:(NSString *)defaultValue;

@end

NS_ASSUME_NONNULL_END

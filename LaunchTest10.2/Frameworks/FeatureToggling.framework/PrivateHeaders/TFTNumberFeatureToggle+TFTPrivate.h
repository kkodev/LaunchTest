//
//  TFTNumberFeatureToggle+TFTPrivate.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TFTNumberFeatureToggle.h"

@interface TFTNumberFeatureToggle ()

@property (nonatomic, nullable, readwrite) NSNumber *inMemoryValue;
@property (nonatomic, nullable, readwrite) NSNumber *localValue;
@property (nonatomic, nullable, readwrite) NSNumber *remoteValue;
@property (nonatomic, nullable, readwrite) NSNumber *remotePersistedValue;

@end

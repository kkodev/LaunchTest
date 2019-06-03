//
//  TFTTextFeatureToggle+TFTPrivate.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TFTTextFeatureToggle.h"

@interface TFTTextFeatureToggle ()

@property (nonatomic, nullable, readwrite) NSString *inMemoryValue;
@property (nonatomic, nullable, readwrite) NSString *localValue;
@property (nonatomic, nullable, readwrite) NSString *remoteValue;
@property (nonatomic, nullable, readwrite) NSString *remotePersistedValue;

@end

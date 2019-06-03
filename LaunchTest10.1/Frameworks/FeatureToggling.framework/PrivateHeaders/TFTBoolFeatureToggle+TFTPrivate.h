//
//  TFTBoolFeatureToggle+TFTPrivate.h
//  Feature Toggling
//
//  Created by Grzegorz Kozłowski on 22/01/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TFTBoolFeatureToggle.h"

@interface TFTBoolFeatureToggle ()

@property (nonatomic, readwrite) BOOL inMemoryValue;
@property (nonatomic, readwrite) BOOL localValue;
@property (nonatomic, readwrite) BOOL remoteValue;

@property (nonatomic, readonly) BOOL hasLocalValue;

- (void)clearInMemoryValue;
- (void)clearLocalValue;
- (void)clearRemoteValue;

@end

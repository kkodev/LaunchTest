//
//  NSUserDefaults+TSDExtensions.h
//  Shared Data
//
//  Created by Grzegorz Kozłowski on 12/07/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface NSUserDefaults (TSDExtensions)

+ (instancetype)tsd_sharedUserDefaults;

@end

NS_ASSUME_NONNULL_END

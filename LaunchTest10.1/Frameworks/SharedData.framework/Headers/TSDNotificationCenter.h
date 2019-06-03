//
//  TSDNotificationCenter.h
//  Shared Data
//
//  Created by Grzegorz Kozłowski on 20.02.2017.
//  Copyright © 2017 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface TSDNotificationCenter : NSObject

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)defaultCenter;

- (void)mapDarwinNotificationWithName:(NSString *)darwinNotificationName toLocalNotificationWithName:(NSString *)localNotificationName;
- (void)removeMappingForDarwinNotificationWithName:(NSString *)name;
- (void)postDarwinNotificationWithName:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

//
// Created by Andrey Kozlov on 03/02/15.
// Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@class JSSRailcard;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const TTLAppliedRailcardsDidChangeNotification;

@interface TTLRailCardsPersistenceStore : NSObject

@property (nonatomic, readonly) NSString *pathForPersistenceFile;

@property (nonatomic, assign) BOOL discountBannerWasShown;

+ (TTLRailCardsPersistenceStore *)defaultStore;

- (instancetype)initWithFileName:(NSString *)fileName;

- (void)saveRailcard:(JSSRailcard *)railcard;

- (void)removeSavedRailcard;

- (nullable JSSRailcard *)loadRailcard;

@end

NS_ASSUME_NONNULL_END

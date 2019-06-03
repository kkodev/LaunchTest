//
//  RailcardManager.h
//  Trainline
//
//  Created by Andy Bettis on 19/11/2012.
//  Copyright © 2012 Trainline. All rights reserved.
//

@import Foundation;

#import "TTLBaseReferenceDataLoader.h"

@class JSSRailcard;

NS_ASSUME_NONNULL_BEGIN

@interface RailcardManager : TTLBaseReferenceDataLoader

+ (void)loadData;

+ (nullable NSArray<JSSRailcard *> *)railcards;
    
+ (nullable NSString *)nameForCode:(NSString *)code;

+ (nullable NSString *)codeForName:(NSString *)name;

+ (nullable JSSRailcard *)railcardForCode:(NSString *)code;

+ (nullable JSSRailcard *)railcardForIdentifier:(NSString *)identifier;

#pragma mark - Proxy Railcards

/**
 * Returns `YES` if the code passed in is a discount or other
 * promotion that is implemented as a Railcard (such as GroupSave),
 * rather than an actual, physical, railcard.
 *
 * @param code The code of the railcard to check.
 * @return `YES` if the code represents a discount or other promotion.
 */
+ (BOOL)isProxyCardCode:(NSString *)code;

+ (BOOL)isGroupSaveCode:(NSString *)code;

@end

NS_ASSUME_NONNULL_END

//
//  AbstractLegacyAnalytics.h
//  TrainlineLegacy
//
//  Created by Giordano Scalzo on 09/04/2019.
//  Copyright © 2019 Tauseef Mughal. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AbstractLegacyAnalytics : NSObject

+ (id)instance;
+ (void)setup:(AbstractLegacyAnalytics *)instance;

- (void)trackEvent:(NSString *)event pageName:(NSString *)pageName data:(NSDictionary *)data;

@end

NS_ASSUME_NONNULL_END

//
//  ProgressHUD.h
//  TrainlineLegacy
//
//  Created by Giordano Scalzo on 09/04/2019.
//  Copyright © 2019 Tauseef Mughal. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ProgressHUD : NSObject

+(id)instance;
+(void)setup:(ProgressHUD *)instance;

- (void)showHUDWithText:(NSString *)text;
- (void)hideHUD;

@end

NS_ASSUME_NONNULL_END

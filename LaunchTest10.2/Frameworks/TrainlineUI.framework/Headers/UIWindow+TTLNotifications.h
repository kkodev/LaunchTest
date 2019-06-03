//
//  UIWindow+TTLNotifications.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 11/09/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import UIKit;

#import "TTLWindowNotification.h"

@interface UIWindow (TTLNotifications)

- (void)presentNotificationWithMessage:(NSString *)message color:(TTLColorType)color position:(TTLNotificationPosition)position completionHandler:(dispatch_block_t)completionHandler;
- (void)presentNotificationWithView:(UIView *)view color:(TTLColorType)color position:(TTLNotificationPosition)position requiresInteraction:(BOOL)requiresInteraction completionHandler:(dispatch_block_t)completionHandler;
- (BOOL)showsNotification;
- (void)dismissNotification;

@end

//
//  TTLWindowNotification.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 23/06/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import UIKit;

#import "TTLUIStyleDefines.h"

typedef NS_ENUM(NSInteger, TTLNotificationPosition) {
    TTLNotificationPositionTop,
    TTLNotificationPositionBottom
};

@interface TTLWindowNotification : NSObject

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) TTLColorType color;
@property (nonatomic, readonly) TTLNotificationPosition position;
@property (nonatomic, readonly) BOOL requiresInteraction;
@property (nonatomic, readonly) dispatch_block_t completionHandler;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithView:(UIView *)view color:(TTLColorType)color position:(TTLNotificationPosition)position requiresInteraction:(BOOL)requiresInteraction completionHandler:(dispatch_block_t)completionHandler NS_DESIGNATED_INITIALIZER;

- (BOOL)isEqualToWindowNotification:(TTLWindowNotification *)windowNotification;

@end

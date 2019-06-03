//
//  TTLNotificationView.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 17/09/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import UIKit;

@class TTLNotificationView;

@protocol TTLNotificationViewDelegate <NSObject>

@optional

- (void)notificationViewWantsToDismiss:(TTLNotificationView *)notificationView;

@end

@interface TTLNotificationView : UIView

@property (nonatomic, weak) id<TTLNotificationViewDelegate> delegate;

@end

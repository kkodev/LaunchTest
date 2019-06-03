//
//  Trainline UI.h
//  Trainline UI
//
//  Created by Daniel on 16/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT double TrainlineUIVersionNumber;
FOUNDATION_EXPORT const unsigned char TrainlineUIVersionString[];

#import <TrainlineUI/TTLUIStyleDefines.h>
#import <TrainlineUI/TTLTransportModeDescription.h>


#if !TARGET_OS_WATCH
#import <TrainlineUI/TTLLabel.h>
#import <TrainlineUI/TTLCopyableLabel.h>
#import <TrainlineUI/TTLRoundBorderedColoredGrayLabel.h>

#import <TrainlineUI/JSSLeg+Formatters.h>

#import <TrainlineUI/TTLButton.h>
#import <TrainlineUI/TTLClearButton.h>
#import <TrainlineUI/TTLGrayButton.h>
#import <TrainlineUI/TTLGreenButton.h>
#import <TrainlineUI/TTLIconTitleButton.h>
#import <TrainlineUI/TTLInfoButton.h>
#import <TrainlineUI/TTLPayPalButton.h>
#import <TrainlineUI/TTLSpinningButton.h>

#import <TrainlineUI/HorizontalSeparator.h>

#import <TrainlineUI/UIView+TTLLoadFromNib.h>

#import <TrainlineUI/TTLNotificationView.h>
#import <TrainlineUI/TTLMessageNotificationView.h>
#import <TrainlineUI/TTLWindowNotification.h>
#import <TrainlineUI/UIWindow+TTLNotifications.h>

#endif

#if __has_include(<TrainlineUI/TTLRoundedView.h>)
#import <TrainlineUI/TTLRoundedView>
#endif

#if __has_include(<TrainlineUI/TTLExpandableTextContainerView.h>)
#import <TrainlineUI/TTLExpandableTextContainerView>
#endif

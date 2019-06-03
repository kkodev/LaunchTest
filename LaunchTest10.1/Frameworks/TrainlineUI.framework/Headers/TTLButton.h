//
// Created by Andrey Kozlov on 29/05/15.
// Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

#import "TTLUIStyleDefines.h"

typedef NS_ENUM(NSUInteger, TTLButtonStyle) {
    TTLButtonStyleStandard,
    TTLButtonStyleRoundedGreen,
    TTLButtonStyleRoundedGreenDisabled,
    TTLButtonStyleRoundedCoral,
    TTLButtonStyleRoundedClear
};

@interface TTLButton : UIButton

+ (TTLButton *)buttonWithStyle:(TTLButtonStyle)buttonStyle;

@property (assign, nonatomic) TTLButtonStyle buttonStyle;
@property (assign, nonatomic, getter=isRoundedCorners) BOOL roundedCorners;

@property (assign, nonatomic) TTLFontSize textFontSize;
@property (assign, nonatomic) TTLFontStyle textFontStyle;
@property (assign, nonatomic) TTLColorType textColorType;

#pragma mark - For Subclassing

/**
 * Configures the appearance of the button before display.
 *
 * Do any custom setup of your subclasses here, after calling `super`.
 */
- (void)setup NS_REQUIRES_SUPER;

@end

//
// Created by Andrey Kozlov on 27/05/15.
// Copyright © 2015 Trainline. All rights reserved.
//

@import UIKit;

/// Trainline Corner Radius
FOUNDATION_EXTERN CGFloat const TTLRoundedCornerRadius;

/// Trainline set of font sizes
typedef NS_ENUM(NSUInteger, TTLFontSize) {
    TTLFontSizeTrainNumbers,    /* 9.0f */
    TTLFontSizeSmall,           /* 12.0f */
    TTLFontSizeSemiRegular,     /* 13.0f */
    TTLFontSizeRegular,         /* 14.0f */
    TTLFontSizeMedium,          /* 15.0f */
    TTLFontSizeMediumLarge,     /* 16.0f */
    TTLFontSizeLarge,           /* 18.0f */
    TTLFontSizeExtraLarge,      /* 20.0f */
    TTLFontSizeExtraExtraLarge, /* 22.0f */
    TTLFontSizeSuperExtraLarge, /* 24.0f */
};

FOUNDATION_EXTERN TTLFontSize TTLFontSizeForPointSize(CGFloat pointSize);

/// Trainline set of font styles
typedef NS_ENUM(NSUInteger, TTLFontStyle) {
    TTLFontStyleRegular,
    TTLFontStyleBold,
    TTLFontStyleCircularRegular,
    TTLFontStyleCircularBold,
    TTLFontStyleATOCRailAlphabet,
    TTLFontStyleSFUITextRegular,
    TTLFontStyleSFUITextMedium,
    TTLFontStyleSFUITextSemiBold,
    TTLFontStyleSFUITextBold,
    TTLFontStyleSFUIDisplaySemiBold,
    TTLFontStyleSFUIDisplayBold
};

FOUNDATION_EXTERN TTLFontStyle TTLFontStyleForName(NSString *fontName);

/// Trainline set of branding colours
typedef NS_ENUM(NSUInteger, TTLColorType) {
    // will deprecate soon: Use the new Palette
    // vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv
    TTLColorTypeMint = 1,
    TTLColorTypeLightMint,
    TTLColorTypePaleMint,
    TTLColorTypeDarkPaleMint,
    TTLColorTypeCoral,/* will deprecate soon, Use TTLColorTypeCoralBase */
    TTLColorTypeOrange,
    TTLColorTypeYellow,
    TTLColorTypeSandYellow,
    TTLColorTypeBeachBrown,
    TTLColorTypeNavy, /* will deprecate soon, Use TTLColorTypeNavyBase */
    TTLColorTypeSky,
    TTLColorTypeWhite54,
    TTLColorTypeWhite80,
    TTLColorTypeGrey4,
    TTLColorTypeGrey8,
    TTLColorTypeGrey12,
    TTLColorTypeGrey30,
    TTLColorTypeGrey54,
    TTLColorTypeGrey80,
    TTLColorTypeBlack,
    TTLColorTypeDarkShadow,
    TTLColorTypeLightShadow,
    TTLColorTypeTableViewCellDefaultSelection,

    // New but not in the Palette colour
    TTLColorTypePaleSky,
    // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    // will deprecate soon: Use the new Palette


    // New Colour Palette: https://zpl.io/VDpQJwe

    // Core Brand colours
    TTLColorTypeMintLight,
    TTLColorTypeNavyLight,
    TTLColorTypeCoralLight,
    TTLColorTypeKevinLight,
    TTLColorTypeOrchidLight,
    TTLColorTypeSkyLight,

    TTLColorTypeSkyMid,

    TTLColorTypeMintBase,
    TTLColorTypeNavyBase,
    TTLColorTypeCoralBase,
    TTLColorTypeKevinBase,
    TTLColorTypeOrchidBase,
    TTLColorTypeSkyBase,

    TTLColorTypeMintDark,
    TTLColorTypeNavyDark,
    TTLColorTypeCoralDark,
    TTLColorTypeKevinDark,
    TTLColorTypeOrchidDark,
    TTLColorTypeSkyDark,

    // 7 shades of Gray
    TTLColorTypeGreyText1,
    TTLColorTypeGreyText2,
    TTLColorTypeGreyText3,
    TTLColorTypeGreyStrong,
    TTLColorTypeGreyMid,
    TTLColorTypeGreyLite,
    TTLColorTypeGreyBackground,

    // Errors and success
    TTLColorTypeNegativeLight,
    TTLColorTypeNegative,
    TTLColorTypePositiveLight,
    TTLColorTypePositive,
    TTLColorTypeWarningLight,
    TTLColorTypeWarning,

    // White
    TTLColorTypeWhite
};

@interface UIColor (TTLColorType)

+ (UIColor *)colorWithType:(TTLColorType)type;

+ (UIColor *)ttl_colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue alpha:(CGFloat)alpha;

+ (UIColor *)ttl_colorWithWhite:(CGFloat)white alpha:(CGFloat)alpha;

+ (UIColor *)ttl_colorWithBlack:(CGFloat)black alpha:(CGFloat)alpha;

@end

@interface UIFont (TTLFontStyle)

+ (UIFont *)fontWithStyle:(TTLFontStyle)style size:(TTLFontSize)size;

@end

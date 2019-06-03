//
//  TTLLabel.h
//  Trainline
//
//  Created by Daniel Phillips on 28/05/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import UIKit;

#import "TTLUIStyleDefines.h"

typedef NS_ENUM(NSUInteger, TTLLabelType) {
    TTLLabelTypeStandard,
    TTLLabelTypeRoundBorderedColoredGray,
    TTLLabelTypeRoundMint,
    TTLLabelTypeNavigationTitle,
    TTLLabelTypeNavigationBarItem
};

@interface TTLLabel : UILabel

+ (TTLLabel *)labelWithType:(TTLLabelType)type;

+ (TTLLabel *)standardTrainlineMultilineLabel;

@property (nonatomic, assign) TTLLabelType type;

/*this causes label to reduce kerning on circlar fonts default is yes*/
@property (nonatomic, assign) BOOL overrideKerning;

@property (assign, nonatomic, getter=isRoundedCorners) BOOL roundedCorners;

@property (nonatomic, assign) TTLFontSize textFontSize;
@property (nonatomic, assign) TTLFontStyle textFontStyle;
@property (nonatomic, assign) TTLColorType textColorType;

@property (nonatomic, assign) UIEdgeInsets insets;

/// Setting this property to a non-zero value will change the drawing behaviour and prioritise scaling fonts down over adding new lines.
/// If the content doesn't fit on a single line given the current width, fonts will be progressively scaled down up to the minimumScaleFactor limit and new lines will be added only if needed, up to the limit specified by this property's value.
///
/// The native behaviour prioritises adding new lines over scaling fonts down.
///
/// Note that the lineBreakMode will be forced to NSLineBreakModeByTruncatingTail.
///
/// This property only applies if adjustsFontSizeToFitWidth is enabled and minimumScaleFactor is set. If font scaling is not required, use native numberOfLines property.
///
/// The value must be in the range of 0 to 10. Default value is 0.
@property (nonatomic, assign) NSInteger maximumNumberOfLines;

/// Private, only for internal Swift code access. Do not modify!
@property (nonatomic, assign) BOOL applyingMaximumNumberOfLines;

@end

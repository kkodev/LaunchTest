//
// Created by Andrey Kozlov on 16/04/15.
// Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;
@import CoreGraphics;

NS_ASSUME_NONNULL_BEGIN

@protocol TTLModuleTableViewCellInterface <NSObject>

///return UITableVewAutomaticDimension if you want auto sizing, otherwise provide proper value
+ (CGFloat)cellHeightForObject:(nullable id)object;
+ (NSString *)cellIdentifier;

@optional

- (void)setDataModel:(nullable id)object;

///module will return UITableVewAutomaticDimension if not implementated, this means no estimate available
+ (CGFloat)estimatedHeightForObject:(nullable id)object;


@end

NS_ASSUME_NONNULL_END

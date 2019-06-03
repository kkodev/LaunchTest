//
//  TTLModuleLoadingTableViewCell.h
//  Trainline
//
//  Created by Andrey Kozlov on 09/03/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import UIKit;

#import "TTLModuleTableViewCellInterface.h"

/**
 * Use this reuse identifier to get a loading cell.
 */
extern NSString * const TTLModuleLoadingTableViewCellReuseIdentifier;

@interface TTLModuleLoadingTableViewCell : UITableViewCell <TTLModuleTableViewCellInterface>

@property (nonatomic, weak, readonly) UIActivityIndicatorView *activityIndicatorView;

@end

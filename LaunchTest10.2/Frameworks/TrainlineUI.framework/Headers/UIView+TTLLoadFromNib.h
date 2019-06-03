//
//  UIView+TTLLoadFromNib.h
//  Trainline
//
//  Created by Giuliano Galea on 25/09/2014.
//  Copyright © 2014 Trainline. All rights reserved.
//

@import UIKit;

@interface UIView (TTLLoadFromNib)

+ (instancetype)ttl_load;
+ (instancetype)ttl_loadFromNib:(UINib *)nib;
+ (instancetype)ttl_loadWithOwner:(id)owner;
+ (instancetype)ttl_loadFromNib:(UINib *)nib owner:(id)owner;

@end

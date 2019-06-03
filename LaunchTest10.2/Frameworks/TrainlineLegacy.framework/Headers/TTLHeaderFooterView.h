//
//  TTLHeaderFooterView.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 05/11/2014.
//  Copyright © 2014 Trainline. All rights reserved.
//

@import UIKit;

@class TTLLabel;

@interface TTLHeaderFooterView : UITableViewHeaderFooterView

@property (nonatomic, weak) IBOutlet TTLLabel *titleLabel;
@property (nonatomic, weak) IBOutlet UIImageView *iconImageView;

@end

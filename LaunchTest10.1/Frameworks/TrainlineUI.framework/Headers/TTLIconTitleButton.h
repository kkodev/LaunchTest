//
//  TTLIconTitleButton.h
//  Trainline
//
//  Created by Daniel on 03/02/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

#import "TTLLabel.h"

@import UIKit;

@interface TTLIconTitleButton : UIControl

@property (nonatomic, readonly) TTLLabel *textLabel;

- (void)setTitle:(NSString *)title;
- (void)setIcon:(UIImage *)icon;

@end

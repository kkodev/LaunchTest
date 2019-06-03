//
//  TTLSpinningButton.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 18/05/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

#import "TTLButton.h"


/**
 * A button that can optionally display a `UIActivityIndicator`.
 *
 * While the activity indicator is showing, the button will not respond to
 * touch events.
 */
@interface TTLSpinningButton : TTLButton

@property (nonatomic, getter=isSpinning) BOOL spinning;
@property (nonatomic, getter=isHidingTitle) BOOL hidingTitle;

- (void)setSpinning:(BOOL)spinning animated:(BOOL)animated;
- (void)setDownloading:(BOOL)downloading;

@end

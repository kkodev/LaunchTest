//
//  NSCalendar+TTLRailDay.h
//  Trainline
//
//  Created by Daniel on 12/02/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

// FIXME: This is never used so should be removed
// i.e. https://github.thetrainline.com/search?q=org%3ABonsai+ttl_isDateInTodayForRailIndustry&type=Code
// Or for Swift - `ttl_isDateInToday(forRailIndustry:)`- https://github.thetrainline.com/search?q=org%3ABonsai+ttl_isDateInToday&type=Code
@interface NSCalendar (TTLRailDay)

- (BOOL)ttl_isDateInTodayForRailIndustry:(NSDate *)date;

@end

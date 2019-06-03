//
//  NSDateFormatter+Utils.h
//  Utility classes
//
//  Copyright © 2012 Trainline. All rights reserved.
//
//	u_setSafeLocale - sets the locale to en_US_POSIX to avoid 12/24 hour problems
//
//	u_setUkTimeZone - sets the timezone to Europe/London. Used to display UK-based dates & times
//
//	u_safeDateFormatter - create a formatter with the en_US_POSIX locale
//		This avoids problems with 12/24 hour time display
//
//	u_ukDateFormatter - same as the safe formatter but adds a timezone based on London.
//		This keeps timetable information correct when viewed from other timezones
//
//	u_ukLocalDateFormatter - same as the above but preserves the user's 12/24 hour preference.

@import Foundation;
@import UIKit;

@interface NSDateFormatter (Utils)

- (void)u_setSafeLocale;
- (void)u_setUkTimeZone;
- (NSAttributedString *)superScriptStringFromDate:(NSDate *)date withFont:(UIFont *)font;

+ (NSDateFormatter *)u_safeDateFormatter;

+ (NSDateFormatter *)u_ukDateFormatter;
+ (NSDateFormatter *)u_ukLocalDateFormatter;

+ (NSDateFormatter *)shortDateFormatter;

+ (NSTimeZone *)u_ukTimeZone;

@end

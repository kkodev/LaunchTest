//
//  IsoDateFormatter.h
//  Trainline
//
//  Created by Andy Bettis on 05/10/2012.
//
//

#import "NSDateFormatter+Utils.h"

@interface IsoDateFormatter : NSDateFormatter

+ (IsoDateFormatter *)dateFormatter;
+ (IsoDateFormatter *)shortDateFormatter;
+ (IsoDateFormatter *)globalDateFormatter;

+ (NSString *)tidyString:(NSString *)string;
+ (NSString *)showTime:(NSString *)date;

@end

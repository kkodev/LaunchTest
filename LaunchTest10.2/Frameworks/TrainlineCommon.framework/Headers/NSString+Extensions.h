//
//  NSString+Extensions.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 08/09/2014.
//  Copyright © 2014 Trainline. All rights reserved.
//

@import Foundation;

@interface NSString (Extensions)

+ (NSString *)randomStringWithLength:(NSUInteger)length;

- (NSDate *)toDate;
- (NSString *)xmlEncodedString;

@end

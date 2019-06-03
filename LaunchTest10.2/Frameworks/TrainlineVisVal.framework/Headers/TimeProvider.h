//
//  TimeProvider.h
//  RNGTest
//
//  Created by Alan Pearson on 31/05/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

@interface TimeProvider : NSObject

@property (nonatomic, strong) NSCalendar* calendar;
@property (nonatomic, strong) NSDate* currentDate;

- (id)initWithDate:(NSDate*)initialDate;

- (void)adjustTime:(NSTimeInterval)adjustmentMS;

- (void)packIntoByteArray:(Byte*)bytes;

- (NSUInteger)getHour;
- (NSUInteger)getMinute;
- (NSUInteger)getSecond;
- (void)setHour:(NSUInteger)hour;
- (void)setMinute:(NSUInteger)minute;
- (void)setSecond:(NSUInteger)second;

- (NSString*)currentTime;

@end

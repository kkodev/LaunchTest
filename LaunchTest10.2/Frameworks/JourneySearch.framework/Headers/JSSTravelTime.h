//
//  JSSTravelTime.h
//  thetrainline
//
//  Created by Andy Bettis on 16/11/2012.
//  Copyright (c) 2012 Trapeze Group (UK). All rights reserved.
//

@import Foundation;

typedef NS_ENUM(NSUInteger, JSSJourneyDateType) {
    JourneyDateTypeLeaveAfter,
    JourneyDateTypeArriveBefore
};

@interface JSSTravelTime : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, strong) NSDate *date;
@property (nonatomic, readonly, getter=isChristmas) BOOL christmas;
@property (nonatomic) BOOL arriveByFlag;
@property (nonatomic, readonly) JSSJourneyDateType journeyDateType;

- (instancetype)initWithDate:(NSDate *)date arriveBy:(BOOL)arriveBy;

- (void)setDefaultDate;

+ (JSSTravelTime *)timeWithDate:(NSDate *)date arriveBy:(BOOL)arriveBy;

@end

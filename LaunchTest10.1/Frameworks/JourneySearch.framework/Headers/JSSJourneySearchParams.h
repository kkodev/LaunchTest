//
//  JSSJourneySearchParams.h
//  thetrainline
//
//  Created by Andy Bettis on 12/11/2014.
//  Copyright (c) 2014 Thetrainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class JSSTravelTime;

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, JSSSearchType) {
    JSSSearchTypeSingle = 0,
    JSSSearchTypeReturn,
    JSSSearchTypeOpenReturn
};

typedef NS_ENUM(NSInteger, JSSSearchContext) {
    JSSSearchContextAny = 0,
    JSSSearchContextWalkup,
};

@class JSSRailcard;
@class JSSSelectedRailcard;
@class JSSPassenger;

@interface JSSJourneySearchParams : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, strong, nullable) TLCStation *origin;
@property (nonatomic, strong, nullable) TLCStation *destination;
@property (nonatomic, strong, nullable) TLCStation *via;
@property (nonatomic, strong, nullable) TLCStation *avoid;

@property (nonatomic, assign) JSSSearchType searchType;

@property (nonatomic, strong, nullable) JSSTravelTime *outboundTime;
@property (nonatomic, strong, nullable) JSSTravelTime *inboundTime;

@property (nonatomic, copy, nullable) NSArray<JSSPassenger *> *passengers;

@property (nonatomic, strong) NSMutableArray<JSSRailcard *> *railcards;
@property (nonatomic, readonly) NSArray<JSSSelectedRailcard *> *selectedRailcards; //(computed from railcards)

@property (nonatomic, getter=isTimetable) BOOL timetable;

@property (nonatomic, assign) BOOL queryCancelledTrains;

@property (nonatomic, assign) JSSSearchContext searchContext;

- (NSInteger)railcardTotal;

@end

NS_ASSUME_NONNULL_END

//
//  JSSJourney.h
//  thetrainline
//
//  Created by Luca Torella on 23/07/2015.
//  Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

@class TLCStation;
@class JSSLeg;
@class JSSOvertakenInfo;
@class JSSDisruption;

typedef NS_ENUM(NSInteger, JSSJourneyStatus) {
    JSSJourneyStatusPossible,
    JSSJourneyStatusImpossible,
    JSSJourneyStatusInDoubt
};

NS_INLINE JSSJourneyStatus journeyStatusTypeFromJourneyStatusTypeString(NSString *journeyStatusTypeString) {
    if ([journeyStatusTypeString isEqualToString:@"Possible"]){
        return JSSJourneyStatusPossible;
    }else if([journeyStatusTypeString isEqualToString:@"Impossible"]){
        return JSSJourneyStatusImpossible;
    }else if([journeyStatusTypeString isEqualToString:@"InDoubt"]){
        return JSSJourneyStatusInDoubt;
    }
    return JSSJourneyStatusPossible;
}


@interface JSSJourney : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, strong) TLCStation *origin;
@property (nonatomic, strong) TLCStation *destination;
@property (nonatomic, strong) NSArray<JSSLeg *> *legs;
@property (nonatomic, strong) NSArray<JSSDisruption *> *disruptions;
@property (nonatomic, strong) JSSOvertakenInfo *overtakenInfo;

@property (nonatomic, assign) JSSJourneyStatus journeyStatus;

@property (nonatomic, readonly) NSDate *departDate;
@property (nonatomic, readonly) NSDate *arrivalDate;

@property (nonatomic, readonly) JSSLeg *firstTrainLeg;

@property (nonatomic, readonly) NSDate *realtimeDepartDate;
@property (nonatomic, readonly) NSDate *realtimeArrivalDate;

@property (nonatomic, assign) TLCJourneyDirection direction;
@property (readonly) NSTimeInterval durationInSeconds;

@property (readonly, getter = isTrainOnly) BOOL trainOnly;
@property (readonly, getter = isTimetableConfirmed) BOOL timetableConfirmed;

- (NSTimeInterval)duration;

- (instancetype)initWithOrigin:(TLCStation *)origin
                   destination:(TLCStation *)destination
                          legs:(NSArray<JSSLeg *> *)legs
                     direction:(TLCJourneyDirection)direction;

- (BOOL)sameJourneyAs:(JSSJourney *)journey;

@end

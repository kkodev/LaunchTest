//
//  TTLLocationTracker.h
//  Trainline
//
//  Created by Andrey Kozlov on 18/12/2014.
//  Copyright © 2014 Trainline. All rights reserved.
//

@import Foundation;
@import CoreLocation;

extern NSString * const TTLLocationTrackerLocationKey;
extern NSString * const TTLLocationTrackerUpdatedKey;

typedef void (^TTLLocationTrackerLocationUpdatedCompletionHandler) (NSDictionary *userInfo, NSError *error);

@interface TTLLocationTracker : NSObject

@property (nonatomic, copy) TTLLocationTrackerLocationUpdatedCompletionHandler completionHandler;

+ (CLLocation *)recentLocation;

- (void)requestLocation; // This prompts the user
- (BOOL)requestSoftLocation __unused; // This doesn't prompt the user, returns true if location access authorised

@end

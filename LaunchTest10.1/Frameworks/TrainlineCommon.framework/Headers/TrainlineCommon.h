//
//  Common.h
//  Common
//
//  Created by Grzegorz Kozłowski on 15/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT double TrainlineCommonVersionNumber;
FOUNDATION_EXPORT const unsigned char TrainlineCommonVersionString[];

#import <TrainlineCommon/TLCTypes.h>
#import <TrainlineCommon/TLCStationLoader.h>
#import <TrainlineCommon/TLCStation.h>
#import <TrainlineCommon/TLCNetworkClient.h>
#import <TrainlineCommon/TLCErrorTransformer.h>
#import <TrainlineCommon/NSDateFormatter+MobileServices.h>
#import <TrainlineCommon/IsoDateFormatter.h>
#import <TrainlineCommon/NSString+Extensions.h>
#import <TrainlineCommon/NSDateFormatter+Utils.h>
#import <TrainlineCommon/NSDate+Extensions.h>
#import <TrainlineCommon/NSCalendar+TTLRailDay.h>
#import <TrainlineCommon/IsoDateFormatter.h>
#import <TrainlineCommon/UICKeyChainStore+TTLExtensions.h>
#import <TrainlineCommon/NSUUID+TTLExtensions.h>

#import <TrainlineCommon/TTLLocationTracker.h>
#import <TrainlineCommon/CLLocation+TTLExtentions.h>

#import <TrainlineCommon/LocalizationUtilities.h>

#if !TARGET_OS_WATCH
#import <TrainlineCommon/UIDevice+TTLExtensions.h>
#endif

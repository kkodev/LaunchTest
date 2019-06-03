//
//  TLCStationLoader.h
//  TrainlineCommon
//
//  Created by Luca Torella on 27/07/2015.
//  Copyright (c) 2015 thetrainline.com. All rights reserved.
//

@import Foundation;

@class TLCStation;

@protocol TLCStationLoader <NSObject>

- (TLCStation *)stationForCrsCode:(NSString *)crsCode;

@end

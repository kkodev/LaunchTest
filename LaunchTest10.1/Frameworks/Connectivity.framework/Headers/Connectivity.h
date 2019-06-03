//
//  Connectivity.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 03/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT double ConnectivityVersionNumber;
FOUNDATION_EXPORT const unsigned char ConnectivityVersionString[];

#import <Connectivity/TCNConnectivity.h>
#import <Connectivity/TCNError.h>

#import <Connectivity/TCNMetadataTransferHandler.h>
#import <Connectivity/TCNFileTransferHandler.h>
#import <Connectivity/TCNReplyProvider.h>

#import <Connectivity/TCNMetadataTransfer.h>
#import <Connectivity/TCNFileTransfer.h>

#import <Connectivity/TCNMessage.h>
#import <Connectivity/TCNNearestStationMessage.h>
#import <Connectivity/TCNNextBookingMessage.h>
#import <Connectivity/TCNRecentSearchesMessage.h>
#import <Connectivity/TCNDepartingTrainsMessage.h>
#import <Connectivity/TCNTrainStopsMessage.h>

#import <Connectivity/TCNReply.h>
#import <Connectivity/TCNNearestStationReply.h>
#import <Connectivity/TCNNextBookingReply.h>
#import <Connectivity/TCNRecentSearchReply.h>
#import <Connectivity/TCNDepartingTrainReply.h>
#import <Connectivity/TCNTrainStopReply.h>

//
//  TCNError.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 07/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT NSString *const TCNErrorDomain;

typedef NS_ENUM(NSInteger, TCNErrorCode) {
    TCNUnknownError = 1,
    TCNDeviceUnreachable = 2,
    TCNInvalidMessageError = 3,
    TCNEmptyReplyError = 4,
    TCNCanNotCommunicateWithOtherDevice = 5
};

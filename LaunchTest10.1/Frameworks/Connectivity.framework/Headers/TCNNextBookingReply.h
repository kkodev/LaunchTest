//
//  TCNNextBookingReply.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 04/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import TrainlineCommon;

#import "TCNReply.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TCNNextBookingReplyTicketType) {
    TCNNextBookingReplyTicketTypeKiosk,
    TCNNextBookingReplyTicketTypeMobile
};

@interface TCNNextBookingReply : TCNReply

@property (nonatomic, readonly, nullable) TLCStation *outboundStation;
@property (nonatomic, readonly, nullable) NSString *outboundTime;
@property (nonatomic, readonly, nullable) TLCStation *inboundStation;
@property (nonatomic, readonly, nullable) NSString *inboundTime;
@property (nonatomic, readonly, nullable) NSString *collectionCode;
@property (nonatomic, readonly) TCNNextBookingReplyTicketType ticketType;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithOutboundStation:(nullable TLCStation *)outboundStation outboundTime:(nullable NSString *)outboundTime inboundStation:(nullable TLCStation *)inboundStation inboundTime:(nullable NSString *)inboundTime collectionCode:(nullable NSString *)collectionCode ticketType:(TCNNextBookingReplyTicketType)ticketType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

//
//  TCNReplyProvider.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 10/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

@class TCNMessage;

typedef void (^TCNReplyProviderCompletionHandler)(id reply, NSError *error);

@protocol TCNReplyProvider <NSObject>

@required

- (BOOL)canReplyToMessage:(TCNMessage *)message;
- (void)replyToMessage:(TCNMessage *)message completionHandler:(TCNReplyProviderCompletionHandler)completionHandler;

@end

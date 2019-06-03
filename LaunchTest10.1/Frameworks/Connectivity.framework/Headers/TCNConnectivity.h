//
//  TCNConnectivity.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 03/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;
@import CoreLocation;
@import WatchConnectivity;

#import "TCNMetadataTransferHandler.h"
#import "TCNFileTransferHandler.h"
#import "TCNReplyProvider.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, TCNSessionActivationState) {
    TCNSessionActivationStateInactive,
    TCNSessionActivationStateActive
};

@protocol TCNConnectivityDelegate <NSObject>

- (void)didActivateSession;
- (void)didUpdateApplicationContext;

@end

@protocol TCNConnectivityMessagingDelegate <NSObject>

- (void)didReceiveMessage:(NSDictionary<NSString *, id> *)message;

@end

@interface TCNConnectivity : NSObject

@property (nonatomic, readonly) WCSession *session;
@property (nonatomic, readonly) TCNSessionActivationState sessionActivationState;

@property (nonatomic, readonly, nullable) NSArray<id<TCNMetadataTransferHandler>> *metadataTransferHandlers;
@property (nonatomic, readonly, nullable) NSArray<id<TCNFileTransferHandler>> *fileTransferHandlers;
@property (nonatomic, readonly, nullable) NSArray<id<TCNReplyProvider>> *replyProviders;
@property (nonatomic, weak) id<TCNConnectivityDelegate> delegate;
@property (nonatomic, weak) id<TCNConnectivityMessagingDelegate> messagingDelegate;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithSession:(WCSession *)session NS_DESIGNATED_INITIALIZER;

+ (instancetype)defaultConnectivity;

- (void)activateSession;

- (void)registerMetadataTransferHandler:(id<TCNMetadataTransferHandler>)metadataTransferHandler;
- (void)unregisterMetadataTransferHandler:(id<TCNMetadataTransferHandler>)metadataTransferHandler;
- (void)unregisterAllMetadataTransferHandlers;

- (WCSessionUserInfoTransfer *)queueMetadataTransfer:(TCNMetadataTransfer *)metadataTransfer;

- (void)registerFileTransferHandler:(id<TCNFileTransferHandler>)fileTransferHandler;
- (void)unregisterFileTransferHandler:(id<TCNFileTransferHandler>)fileTransferHandler;
- (void)unregisterAllFileTransferHandlers;

- (WCSessionFileTransfer *)queueFileTransfer:(TCNFileTransfer *)fileTransfer;

- (void)registerReplyProvider:(id<TCNReplyProvider>)replyProvider;
- (void)unregisterReplyProvider:(id<TCNReplyProvider>)replyProvider;
- (void)unregisterAllReplyProviders;

- (void)sendMessage:(TCNMessage *)message completionHandler:(nullable TCNReplyProviderCompletionHandler)completionHandler;

- (BOOL)updateApplicationContext:(NSDictionary<NSString *,id> *)applicationContext error:(NSError * _Nullable *)error;

@end

NS_ASSUME_NONNULL_END

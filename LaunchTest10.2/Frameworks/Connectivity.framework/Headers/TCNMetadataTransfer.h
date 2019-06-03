//
//  TCNMetadataTransfer.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 10/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface TCNMetadataTransfer : NSObject

@property (nonatomic, readonly, nullable) NSDictionary<NSString *, id> *metadata;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithMetadata:(nullable NSDictionary<NSString *, id> *)metadata NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

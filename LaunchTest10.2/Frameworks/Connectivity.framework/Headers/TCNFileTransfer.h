//
//  TCNFileTransfer.h
//  Connectivity
//
//  Created by Grzegorz Kozłowski on 10/03/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface TCNFileTransfer : NSObject

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly, nullable) NSDictionary<NSString *, id> *metadata;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithFileURL:(NSURL *)fileURL metadata:(nullable NSDictionary<NSString *, id> *)metadata NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END

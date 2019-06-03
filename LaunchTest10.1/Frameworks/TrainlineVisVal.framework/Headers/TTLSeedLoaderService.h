//
//  TTLSeedLoaderService.h
//  TTLSeedLoader
//
//  Created by Alan Pearson on 03/07/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

@class VisValSeed;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const TTLSeedLoaderServiceErrorDomain;

typedef NS_ENUM(NSInteger, TTLSeedLoaderServiceErrorCode) {
    TTLSeedLoaderServiceErrorCodeDecryptionFailed = 1001,
};

@interface TTLSeedLoaderService : NSObject

+ (nullable NSData *)decodedDataWithString:(NSString *)string transactionId:(NSString *)transactionId encryptionKey:(NSString *)encryptionKey error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END

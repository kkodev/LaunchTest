//
// Created by Luke De Feo on 28/07/15.
// Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;

typedef void (^TLNMobileServiceClientSuccessBlock) (id responseObject, NSDictionary *responseHeaders);
typedef void (^TLNMobileServiceClientFailureBlock) (id responseObject, NSDictionary *responseHeaders, NSError *error);

@protocol TLCNetworkClient <NSObject>

- (void)addHeadersFromDictionary:(NSDictionary *)customHeaders;

- (NSOperation *)POST:(NSString *)URLString
           parameters:(id)parameters
              success:(TLNMobileServiceClientSuccessBlock)success
              failure:(TLNMobileServiceClientFailureBlock)failure;

- (NSOperation *)GET:(NSString *)URLString
          parameters:(id)parameters
             success:(TLNMobileServiceClientSuccessBlock)success
             failure:(TLNMobileServiceClientFailureBlock)failure;

@end

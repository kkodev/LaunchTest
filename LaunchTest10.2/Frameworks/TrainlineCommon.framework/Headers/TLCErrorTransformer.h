//
// Created by Andrey Kozlov on 26/06/2015.
// Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;

@protocol TLCErrorTransformer <NSObject>

- (NSError *)extractSingleError:(NSDictionary *)response;

@end

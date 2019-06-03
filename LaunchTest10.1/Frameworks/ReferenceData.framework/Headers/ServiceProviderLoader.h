//
//  ServiceProviderLoader.h
//  Trainline
//
//  Created by Andy Bettis on 22/11/2012.
//  Copyright © 2012 Trainline. All rights reserved.
//

@import Foundation;

#import "TTLBaseReferenceDataLoader.h"

@interface ServiceProviderLoader : TTLBaseReferenceDataLoader

+ (NSString *)serviceProviderForCode:(NSString *)code;

@end

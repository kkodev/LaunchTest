//
//  UICKeyChainStore+TTLExtensions.h
//  Trainline
//
//  Created by Grzegorz Kozłowski on 22/04/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import UICKeyChainStore;

@interface UICKeyChainStore (TTLExtensions)

+ (instancetype)ttl_keyChainStore;
+ (instancetype)ttl_keyChainStoreWithServiceName:(NSString *)serviceName;

@end

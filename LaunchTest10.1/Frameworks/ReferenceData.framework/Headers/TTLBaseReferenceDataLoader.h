//
//  TTLBaseReferenceDataLoader.h
//  Trainline
//
//  Created by Daniel Phillips on 20/02/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

extern NSString * const TTLReferenceDataCoordinatorDataUpdatedNotification;
extern NSString * const TTLReferenceDataCoordinatorNameKey;
extern NSString * const TTLReferenceDataJsonReadErrorNotification;
extern NSString * const TTLReferenceDataJsonReadErrorKey;

@interface TTLBaseReferenceDataLoader : NSObject

+ (void)loadData;
+ (NSString *)identifier;

+ (nullable NSURL *)bundlePath;
+ (nullable NSURL *)dataContainerURL;

+ (nullable id)parseJSONFileAtURL:(NSURL *)URL;

@end

NS_ASSUME_NONNULL_END

//
//  TSDPathUtilities.h
//  Shared Data
//
//  Created by Grzegorz Kozłowski on 12/07/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface TSDApplicationGroup : NSObject

+ (void)setupIdentifier:(NSString *)identifier;
+ (void)setupTeamId:(NSString *)teamId;

@end


FOUNDATION_EXPORT NSString *TSDApplicationGroupIdentifier;

FOUNDATION_EXPORT NSURL *__nullable TSDSharedDirectoryURL(void);
FOUNDATION_EXPORT NSString *__nullable TSDSharedDirectory(void);

FOUNDATION_EXPORT NSURL *__nullable TSDDocumentsDirectoryURL(void);
FOUNDATION_EXPORT NSString *__nullable TSDDocumentsDirectory(void);

FOUNDATION_EXPORT NSURL *__nullable TSDLibraryDirectoryURL(void);
FOUNDATION_EXPORT NSString *__nullable TSDLibraryDirectory(void);

FOUNDATION_EXPORT NSURL *__nullable TSDCachesDirectoryURL(void);
FOUNDATION_EXPORT NSString *__nullable TSDCachesDirectory(void);

FOUNDATION_EXPORT NSURL *__nullable TSDLogsDirectoryURL(void);
FOUNDATION_EXPORT NSString *__nullable TSDLogsDirectory(void);

FOUNDATION_EXPORT NSURL *__nullable TSDConfigurationDirectoryURL(void);
FOUNDATION_EXPORT NSString *__nullable TSDConfigurationDirectory(void);

NS_ASSUME_NONNULL_END

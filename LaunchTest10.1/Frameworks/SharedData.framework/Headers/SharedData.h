//
//  SharedData.h
//  Shared Data
//
//  Created by Grzegorz Kozłowski on 12/07/2016.
//  Copyright © 2016 Trainline. All rights reserved.
//

@import Foundation;

FOUNDATION_EXPORT double SharedDataVersionNumber;
FOUNDATION_EXPORT const unsigned char SharedDataVersionString[];

#if __has_include(<SharedData/TSDKeychain.h>)
#import <SharedData/TSDKeychain.h>
#endif

#if __has_include(<SharedData/TSDNotificationCenter.h>)
#import <SharedData/TSDNotificationCenter.h>
#endif

#if __has_include(<SharedData/TSDPathUtilities.h>)
#import <SharedData/TSDPathUtilities.h>
#endif

#import <SharedData/NSUserDefaults+TSDExtensions.h>

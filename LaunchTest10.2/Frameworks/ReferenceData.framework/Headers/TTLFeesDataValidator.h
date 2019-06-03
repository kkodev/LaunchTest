//
//  TTLFeesDataDownloadValidator.h
//  Trainline
//
//  Created by akshayn on 23/01/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

@interface TTLFeesDataValidator : NSObject

- (BOOL)validateData:(NSData *)data
            response:(NSHTTPURLResponse *)response
     requireCardData:(BOOL)requireCardData
               error:(NSError * __autoreleasing *)error;

@end

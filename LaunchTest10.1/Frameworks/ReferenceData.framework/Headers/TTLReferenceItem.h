//
//  TTLReferenceItem.h
//  Trainline
//
//  Created by Giuliano Galea on 18/02/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;

typedef BOOL (^TTLReferenceItemValidationBlock) (NSURLResponse *response, NSData *data);

@interface TTLReferenceItem : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *encryptionKey;
@property (nonatomic, readonly) TTLReferenceItemValidationBlock validationBlock;

- (instancetype)initWithName:(NSString *)name
             validationBlock:(TTLReferenceItemValidationBlock)validationBlock
               encryptionKey:(NSString *)encKey;

- (BOOL)isEqualToReferenceItem:(TTLReferenceItem *)other;

@end

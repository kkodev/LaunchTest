//
//  AES128.h
//  TTLSeedLoader
//
//  Created by Alan Pearson on 08/07/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

@interface AES128 : NSObject

- (id)initWithKey:(Byte*)key iv:(Byte*)iv;
- (BOOL)decryptBytes:(Byte*)bytes count:(NSUInteger)count toBytes:(Byte*)outputBytes bytesDecrypted:(size_t*)pBytesDecrypted;
- (BOOL)encryptBytes:(Byte*)bytes count:(NSUInteger)count toBytes:(Byte*)outputBytes;

@end

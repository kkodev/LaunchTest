//
//  AES256.h
//  RNGTest
//
//  Created by Alan Pearson on 18/06/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

@interface AES256 : NSObject

- (id)initWithKey:(Byte*)key iv:(Byte*)iv;
- (BOOL)encryptBytes:(Byte*)bytes withMutator:(Byte*)mutator toBytes:(Byte*)outputBytes;

@end

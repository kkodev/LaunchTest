//
//  VisualValidation.h
//  RNGTest
//
//  Created by Alan Pearson on 31/05/2013.
//  Copyright © 2013 Trainline. All rights reserved.
//

@import Foundation;

#import "TimeProvider.h"
#import "X931RNG.h"

typedef struct { int a; int b; int c; } VisValTricolour;

@interface VisualValidation : NSObject

@property (nonatomic, strong) TimeProvider* timeProvider;

- (id)initWithTimeProvider:(TimeProvider*)timeProvider rng:(X931RNG*)rng;

// public API
- (VisValTricolour)getTricolour;
- (void)setupCurrentTicket:(NSString*)ticketId withSeed:(Byte*)seedBytes;

// "public" only for unit tests
- (int)colourFromRNG:(NSUInteger)r;
- (int)getCoeff:(int)i timeProvider:(TimeProvider*)c;
- (void)getConc:(Byte*)s c:(Byte*)c i:(NSUInteger)i st:(Byte*)st;
- (void)getSecurityNo:(Byte*)securityNo;
- (void)getSeed:(Byte*)o oLength:(NSUInteger)oLength x:(Byte*)x xLength:(NSUInteger)xLength u:(Byte*)u;
- (SInt64)getTcUnint:(SInt64)i timeProvider:(TimeProvider*)pTimeProvider roundUp:(BOOL)pRoundUp;
- (TimeProvider*)getTimeForInt:(SInt64)i timeProvider:(TimeProvider*)pTimeProvider roundUp:(BOOL)pRoundUp;
- (SInt64)interp:(SInt64)p n:(SInt64)n m:(SInt64)m;
- (SInt64)rng:(Byte*)r;

@end

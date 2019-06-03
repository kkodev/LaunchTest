//
//  JSSOvertakenInfo.h
//  Journey Search
//
//  Created by Petr Krojzl on 11/12/2017.
//  Copyright © 2017 Trainline. All rights reserved.
//

@import Foundation;

@interface JSSOvertakenInfo : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) BOOL isOvertaken;

- (instancetype)initWithIsOvertaken:(BOOL)isOvertaken;

@end

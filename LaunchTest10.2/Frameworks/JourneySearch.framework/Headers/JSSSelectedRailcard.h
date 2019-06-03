//
// Created by Andrey Kozlov on 04/02/15.
// Copyright (c) 2015 Thetrainline. All rights reserved.
//

@import Foundation;

@class JSSRailcard;

@interface JSSSelectedRailcard : NSObject <NSCopying, NSSecureCoding>

+ (instancetype)selectedCardForRailcard:(JSSRailcard *)railcard numberOfCards:(NSUInteger)numberOfCards;

@property (nonatomic, copy, readonly) JSSRailcard *railcard;
@property (nonatomic) NSUInteger numberOfCards;

- (instancetype)initWithRailcard:(JSSRailcard *)railcard numberOfCards:(NSUInteger)numberOfCards;

// Produce a list of railcard names for analytics!!
+ (NSString*) railcardListFromArray:(NSArray*)pSelectedRailcards;

@end

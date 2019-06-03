//
//  SectionController.h
//  Trainline
//
//  Created by Giuliano Galea on 05/09/2014.
//  Copyright © 2014 Trainline. All rights reserved.
//

@import Foundation;

@interface SectionController : NSObject

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, strong) NSString *sectionTitle;
@property (nonatomic, strong) UIImage *sectionIcon;
@property (nonatomic, strong) NSArray *rowItems;

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithIdentifier:(NSString *)indentifer NS_DESIGNATED_INITIALIZER;

- (void)updateData;
- (void)updateDataWithError:(NSError *)error forRowItemTag:(NSInteger)tag;

@end

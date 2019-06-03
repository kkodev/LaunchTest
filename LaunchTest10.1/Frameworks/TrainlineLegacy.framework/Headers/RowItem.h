//
//  RowItem.h
//  Trainline
//
//  Created by Giuliano Galea on 05/09/2014.
//  Copyright © 2014 Trainline. All rights reserved.
//

@import Foundation;

typedef void (^BindingBlock) (id view);

@interface RowItem : NSObject

@property (nonatomic, readonly) NSString *cellIdentifier;
@property (nonatomic, readonly) BindingBlock bindingBlock;
@property (nonatomic, assign) CGFloat cellHeight;
@property (nonatomic, assign) NSInteger tag;

- (instancetype)initWithCellIdentifier:(NSString *)cellIdentifier height:(CGFloat)height bindingBlock:(BindingBlock)block;

@end

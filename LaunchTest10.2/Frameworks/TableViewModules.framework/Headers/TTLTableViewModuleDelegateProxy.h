//
//  TTLTableViewModuleDelegateProxy.h
//  Trainline
//
//  Created by Andrey Kozlov on 09/03/2015.
//  Copyright © 2015 Trainline. All rights reserved.
//

@import Foundation;
@import UIKit;

@class TTLTableViewModule;

@interface TTLTableViewModuleDelegateProxy : NSProxy <UITableViewDelegate>

- (instancetype)initWithDataSource:(TTLTableViewModule *)dataSource;

@property (nonatomic, assign, readonly) TTLTableViewModule *dataSource;

@end
